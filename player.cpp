#include "player.h"

Player::Player()
{
    this->position = Vector2{ 600.f, 600.f };
    this->health = 100;
    this->damage = 50;
    this->texture = LoadTexture(".\\assets\\ship\\PNG\\sprites\\ship01\\layer1.png");
}

Player::~Player()
{
    UnloadTexture(texture);
}

Vector2 Player::getPosition() const
{
    return this->position;
}

void Player::setPosition(Vector2 newPosition)
{
    this->position = newPosition;
}

int Player::getHealth() const
{
    return health;
}

void Player::setHealth(int newHealth)
{
    this->health = newHealth;
}

int Player::getDamage() const
{
    return damage;
}

void Player::setDamage(int newDamage)
{
    this->damage = newDamage;
}

Texture2D Player::getTexture() const
{
    return this->texture;
}

void Player::setTexture(Texture2D newTexture)
{
    this->texture = newTexture;
}

void Player::draw() const
{
    DrawTextureV(texture, position, WHITE);
}

void Player::moveLeft()
{
    position.x -= 3;
    if(position.x < 0)
    {
        position.x = 0;
    }
}

void Player::moveRight()
{
    position.x += 3;
    if(position.x > GetScreenWidth() - texture.width)
    {
        position.x = GetScreenWidth() - texture.width;
    }
}

void Player::moveUp()
{
    position.y -= 3;
    if(position.y < 550)
    {
        position.y = 550;
    }
}

void Player::moveDown()
{
    position.y += 3;
    if(position.y > GetScreenHeight() - texture.height)
    {
        position.y = GetScreenHeight() - texture.height;
    }
}

void Player::update()
{

}