#pragma once

class GameObject
{
public:
	struct position
	{
		float x;
		float y;
	} pos;

	float velocity;
	float jumpForce;

	GameObject()
	{
		pos.x = 0;
		pos.y = 0;
		velocity = 10.0f;
		jumpForce = 25.0f;
	}

	void move()
	{
		pos.x += velocity;
	}

	void move(float velocity, float jumpForce)
	{
		this->velocity = velocity;
		this->jumpForce = jumpForce;

		move();
	}

	void jump()
	{
		pos.y += jumpForce;
	}

	void jump(float jumpForce)
	{
		this->jumpForce = jumpForce;

		jump();
	}
};