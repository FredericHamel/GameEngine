#include "FileTools.h"
#include "exceptions/FileNotFoundException.h"

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
  PHYSFS_mount(path, nullptr, type);
}

/**
 * @brief load the content of a file into mem.
 * @param nomFichier is the filename.
 * @return the file buffer.
 */
void FileTools::LoadFileBuffer(const std::string& nomFichier, size_t* size, char** buffer)
{
  *buffer = nullptr;

  PHYSFS_File* fichier = nullptr;
  if(!PHYSFS_exists(nomFichier.c_str()))
    throw FileNotFoundException(StringConcat() << nomFichier << " (No such file or directory)"); 

  fichier = PHYSFS_openRead(nomFichier.c_str());
  
  if(fichier == nullptr) throw IOException(StringConcat() << "Failed to open file " << nomFichier);

  *size = PHYSFS_fileLength(fichier);
  *buffer = new char[*size];

  if(*buffer == nullptr) throw IOException(StringConcat() << "Failed to allocate file buffer: " << size);

  PHYSFS_read(fichier, *buffer, sizeof(char), PHYSFS_uint32(*size));
  PHYSFS_close(fichier);
}

void FileTools::UnloadFileBuffer(char** buffer)
{
  if(*buffer != nullptr)
  {
    delete[] *buffer;
    *buffer = nullptr;
  }
}

/**
 * @brief unload the physfs library.
 */
void FileTools::Quit()
{
  PHYSFS_deinit();
}
