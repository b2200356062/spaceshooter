#include "engine.h"

Engine::Engine()
{

}

Engine::~Engine()
{

}

void Engine::init()
{
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, title);
	SetWindowState(FLAG_VSYNC_HINT);
	//ToggleFullscreen();
	HideCursor();
	SetTargetFPS(144);

	// init camera
	camera.target = Vector2{ 0.f, 0.f };
	camera.zoom = 1.f;
	camera.rotation = 0;
	camera.offset = Vector2{ 10.f, 10.f };

	// init player
	player = new Player();
}

void Engine::load()
{

}

void Engine::handleInputEvents()
{
	if (IsKeyDown(KEY_W))
	{
		player->moveUp();
	}
	if (IsKeyDown(KEY_S))
	{
		player->moveDown();
	}
	if (IsKeyDown(KEY_A))
	{
		player->moveLeft();
	}
	if (IsKeyDown(KEY_D))
	{
		player->moveRight();
	}
}

void Engine::update()
{
	//std::cout << camera.target.x << camera.target.y << std::endl;
	//player->update();
}

// const when function dont modify objects state
void Engine::draw() const
{
	BeginDrawing();
	//BeginMode2D(camera);

	ClearBackground(BLACK);

	player->draw();

	//EndMode2D();
	EndDrawing();
}

void Engine::clean()
{
	delete player;

	CloseWindow();
}
