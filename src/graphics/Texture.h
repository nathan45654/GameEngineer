#pragma once

#include <SDL_image.h>
#include <string>

//#include "utils.hpp"

class Position;
class Rect;
class Camera;


class Texture
{

public:
	Texture(SDL_Renderer* renderer, const char* filename, Position* position);
	~Texture();

	void create_texture();
	void draw(Camera* camera);
	void get_center_from_position();
	void get_position_from_center();

private:
	const char* fileName;

protected:
	SDL_Renderer* renderer{ NULL };
	SDL_Texture* texture{ NULL };

	Rect* rect;

	Position* position;

};

