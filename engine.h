#pragma once
#include "raylib.h"
#include "player.h"

#include <iostream>

// engine is the controller
class Engine
{
private:
	int SCREEN_WIDTH = 1280;
	int SCREEN_HEIGHT = 720;
	const char* title = "oyun";
	Camera2D camera = { 0 };
	Player *player = nullptr;
	Player *npc = nullptr;

public:

	Engine();
	~Engine();

	void init();
	void load();
	void handleInputEvents();
	void update();
	void draw() const;
	void clean();

};

