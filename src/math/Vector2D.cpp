

#include "Vector2D.h"

Vector2D::Vector2D(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Vector2D::get_x() const
{
	return x;
}

float Vector2D::get_y() const
{
	return y;
}

float Vector2D::magnitude()
{
	float mag = pow((pow(x, 2) + pow(y, 2)), 0.5);
	return mag;
}

Vector2D Vector2D::operator+(Vector2D const& other_vector)
{
	Vector2D new_vector{ other_vector.x + x, other_vector.y + y };
	return new_vector;
}



//Vector Vector::operator+(pos const& position)
//{
//	Vector new_vector{ position.x + x, position.y + y };
//	return new_vector;
//}


