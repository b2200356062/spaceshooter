#include "loader.h"

Model Loader::modelLoader(const char* fileName)
{
	return LoadModel(fileName);
}

Texture Loader::textureLoader(const char* fileName)
{
	return LoadTexture(fileName);
}
