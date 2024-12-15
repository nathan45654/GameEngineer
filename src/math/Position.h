#pragma once

#include "Vector2D.h"

class Position
{

public:
	Position(int x, int y);

	int x{ 0 };
	int y{ 0 };

	Vector2D operator-(Position const& other_position);
	Position operator+(Vector2D const& vector);
	Position operator-(Vector2D const& vector);
private:

};

