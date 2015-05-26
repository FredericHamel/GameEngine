#include "FileTools.h"
#include <iostream> 

using ugen::FileTools;

/**
 * @brief initialize the physfs library.
 */
void FileTools::Init()
{
	PHYSFS_init(NULL);
}

/**
 * @brief add the search path.
 * @param path is the new search path.
 * @param type is the append type (default push back)
 */
void FileTools::AddSearchPath(const char* path, FileTools::TYPE_APPEND type)
{
	PHYSFS_addToSearchPath(path, type);
}

/**
 * @brief load the content of a file into mem.
 * @param nomFichier is the filename.
 * @return the file buffer.
 */
void FileTools::LoadFileBuffer(const std::string& nomFichier, size_t* size, char** buffer)
{
	*buffer = NULL;

	PHYSFS_File* fichier = NULL;
	std::cout << "Start load raw data...\n";
	Debug::check_assertion(!PHYSFS_exists(nomFichier.c_str()), StringConcat() << "File " << nomFichier << " doesn't exists\n"); 

	std::cout << "Open file " << nomFichier << "\n";
	fichier = PHYSFS_openRead(nomFichier.c_str());
	Debug::check_assertion(fichier == NULL, StringConcat() << "Failed to open file " << nomFichier << "\n");

	*size = PHYSFS_fileLength(fichier);
	*buffer = new char[*size];

	Debug::check_assertion(*buffer == NULL, StringConcat() << "Failed to allocate file buffer: " << size << "\n");

	std::cout << "Load raw data\n";
	PHYSFS_read(fichier, *buffer,sizeof(char), PHYSFS_uint32(*size));
	PHYSFS_close(fichier);
}

void FileTools::UnloadFileBuffer(char** buffer)
{
	delete[] *buffer;
	*buffer = NULL;
}

/**
 * @brief unload the physfs library.
 */
void FileTools::Quit()
{
	PHYSFS_deinit();
}
