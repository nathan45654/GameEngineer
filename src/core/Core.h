


#include <SDL.h>
#include <SDL_image.h>


class Core
{
public:

	Core(int height, int width);
	void init();
	void run_game();
	~Core();

protected:
	void update_physics();
	void draw_graphics();

private:


	SDL_Window* _window;

	//The window renderer
	SDL_Renderer* _renderer;

	int _height{ 0 };
	int _width{ 0 };
	uint8_t _background_red{ 100 };
	uint8_t _background_green{ 100 };
	uint8_t _background_blue{ 100 };



};