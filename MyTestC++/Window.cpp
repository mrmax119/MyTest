#include "Window.h"

int Window::width = 0;
int Window::height = 0;

Window::Window(int width, int height)
{
	draw(width, height);
}

Window::~Window()
{
}
