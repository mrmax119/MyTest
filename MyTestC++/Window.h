#pragma once
class Window
{
public:
	static int width, height;

	Window(int width, int height);

	void draw(int width, int height)
	{
		this->width = width;
		this->height = height;
	}

	int getWidth() { return width; }

	int getHeight() { return height; }

	~Window();
};
