#pragma once

//#include "utils.hpp"
#include "Rect.h"

class Vector2D
{

public:
	Vector2D(float x, float y);

	float get_x() const;
	float get_y() const;

	float magnitude();

	Vector2D operator+(Vector2D const& other_vector);
	//Vector operator+(pos const& position);

private:
	float x{ 0 };
	float y{ 0 };

};

