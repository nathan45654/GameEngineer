#include "Position.h"

#include "Vector2D.h"

Position::Position(int x, int y)

{
	this->x = x;
	this->y = y;
}

Position Position::operator+(Vector2D const& vector)
{
	Position new_position(vector.get_x() + x, vector.get_y() + y);
	return new_position;
}
Position Position::operator-(Vector2D const& vector)
{
	Position new_position(vector.get_x() - x, vector.get_y() - y);
	return new_position;
}

Vector2D Position::operator-(Position const& other_position)
{
	Vector2D vector(x - other_position.x, y - other_position.y);
	return vector;
}
