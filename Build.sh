#!/usr/bin/zsh
current_dir=`pwd`
project_path=`pwd`

run(){
	if [[ ! ((-a ./GameTest/bin/GameTest)) ]]; then
		project_path=`pwd`
		compile
	fi
	echo Running...
	LD_LIBRARY_PATH=$current_dir/GameGraphics/lib ./GameTest/bin/GameTest

}

compile(){
	subproject_dirs=(GameGraphics GameTest);
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
	for elem in ./*; do
		if [[ -d $elem ]]; then
			echo "\n$elem";
			pushd $elem
			make clean
			popd
		fi;
	done;
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
		clean
		;;
	run)
		run
		;;
	*)
		echo "Usage: $0 [compile|run|clean]"
esac

