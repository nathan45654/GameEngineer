#include "Rect.h"

#include "SDL.h"
#include "Position.h"
//#include "utils.hpp"
//#include "Vector2D.hpp"

Rect::Rect()
	: SDL_Rect()
{ 
}

Rect::Rect(int x, int y, int w, int h)
	: SDL_Rect{ x, y, w, h }
{ 
}

Position Rect::center()
{
	return Position( x + w/2, y + h/2 );
}

void Rect::move_center_to(Position center)
{
	x = center.x - w / 2;
	y = center.y - h / 2;
}

Position Rect::top_left()
{
	return Position( x, y );
}

Position Rect::top_right()
{
	return Position(x + w, y);
}

Position Rect::bottom_left()
{
	return Position( x, y + h );
}

Position Rect::bottom_right()
{
	return Position( x + w, y + h );
}


int Rect::left()
{
	return x;
}

int Rect::right()
{
	return (x + w);
}

int Rect::top()
{
	return y;
}

int Rect::bottom()
{
	return (y + h);
}

void Rect::copy_rect(Rect other_rect)
{
	w = other_rect.w;
	h = other_rect.h;

	move_center_to(other_rect.center());
}

void Rect::add_vector(Vector2D& vector)
{
	x += vector.get_x();
	y += vector.get_y();
}

