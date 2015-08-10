#!/usr/bin/zsh
current_dir=`pwd`
project_path=`pwd`
subproject_dirs=(GameGraphics GameTest);

run(){
	if [[ ! ((-a ./GameTest/bin/GameTest)) ]]; then
		#project_path=`pwd`
		compile
	fi
	echo Running...
	LD_LIBRARY_PATH=$current_dir/GameGraphics/lib ./GameTest/bin/GameTest

}

compile(){
	cd $project_path;

	for elem in $subproject_dirs; do
		if [[ -d $elem ]]; then
			echo "\n$elem: Compilation Started...";
			pushd $elem;
			make;
			if [[ $? != 0 ]]; then
				echo "Error..."
				popd;
				break;
			fi;
			popd;
		fi;
	done;
}

clean(){
	if (( $# == 1 )); then
		cd $1 2> /dev/null
		[[ "$?" -eq "0" ]] && echo "Cleaning $1" && make clean && exit
		echo "Project $1 not found..."
	else
		for elem in ./*; do
			if [[ -d $elem ]]; then
				echo "Cleaning $elem";
				pushd $elem
				make clean
				popd
			fi;
		done;
	fi;
}

# if [[ $1 != 10 ]]; then
	#statements
#	zsh -i $(./Build.sh 10);
# fi;

case $1 in
	compile)
		compile
		;;
	clean)
		clean $2
		;;
	run)
		run
		;;
	rebuild)
		clean
		compile	
		;;
	*)
		echo "Usage: $0 [compile|run|rebuild|clean]"
esac

