#pragma once
#include "raylib.h"

class Loader
{
private:

public:
	static Model modelLoader(const char* fileName);
	static Texture textureLoader(const char* fileName);
};

