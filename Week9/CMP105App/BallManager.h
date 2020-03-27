#pragma once
#include "Ball.h"
#include <math.h>
#include <vector>

class BallManager
{
public:
	BallManager();
	~BallManager();

	void spawn();
	void update(float dt);
	void deathCheck();
	void render(sf::RenderWindow* window);

private:
	std::vector<Ball> balls;
	sf::Vector2f spawnPoint;
	sf::Texture texture;
};

