#include "SDL_image.h"
#include "SDL.h"

#include "Texture.h"
#include "../math/Rect.h"
#include "../math/Position.h"

#include <string>


class Camera;

Texture::Texture(SDL_Renderer* renderer, const char* fileName, Position* position)
{
	this->fileName = fileName;
	this->renderer = renderer;
	this->position = position;

	create_texture();
}

Texture::~Texture()
{
	renderer = NULL;

	SDL_DestroyTexture(texture);
	texture = NULL;
}

void Texture::create_texture()
{
	int w, h;

	if (fileName != "")
	{
		texture = IMG_LoadTexture(renderer, this->fileName);
		SDL_QueryTexture(texture, NULL, NULL, &w, &h);

		rect->x = position->x; rect->y = position->y; rect->w = w; rect->h = h;
	}	
	else
	{
		rect->x = position->x; rect->y = position->y;
		rect->w = 32; rect->h = 32;
	}

}

void Texture::get_center_from_position()
{

}

void Texture::get_position_from_center()
{

}

//void Texture::draw(Camera* camera)
//{	
//	if (texture != NULL)
//	{
//		SDL_Rect offset_rect{ rect.x - camera->offsets.x, rect.y - camera->offsets.y, rect.w, rect.h };
//		
//		camera->view_rect.x = rect.x - camera->offsets.x;
//		camera->view_rect.y = rect.y - camera->offsets.y;
//
//		SDL_RenderCopy(renderer, texture, NULL, &offset_rect);
//	}
//}