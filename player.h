#pragma once
#include "raylib.h"

#include "loader.h"
class Player
{
private:
	int health = 0;
	int damage = 0;

	Texture2D texture;

	Vector2 position;

public:
	Player();
	~Player();

	Vector2 getPosition() const;
	void setPosition(Vector2 newPosition);

	int getHealth() const;
	void setHealth(int newHealth);

	int getDamage() const;
	void setDamage(int newDamage);

	Texture2D getTexture() const;
	void setTexture(Texture2D newTexture);

	void draw() const;

	void moveLeft();
	void moveRight();

	void moveUp();
	void moveDown();

	void update();
};

