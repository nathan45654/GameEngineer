#pragma once

#include "SDL.h"
//#include "utils.hpp"

class Vector2D;
class Position;

class Rect : public SDL_Rect
{
public:
	Rect();
	Rect(int x, int y, int w, int h);

	Position center();
	void move_center_to(Position center);
	Position top_left();
	Position top_right();
	Position bottom_left();
	Position bottom_right();

	int left();
	int right();
	int top();
	int bottom();

	void copy_rect(Rect other_rect);

	void add_vector(Vector2D& vector);

};

