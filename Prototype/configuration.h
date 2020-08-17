#pragma once

struct Configuration
{
	bool wireframe = false;

	int screen_width  = 1600;
	int screen_height = 800;
	int y_units       = 5;
	int z_units       = 10;
	float fov		  = 45.f;

	enum class Projection
	{
		Orthographic,
		Perspective

	};
	Projection projection = Projection::Perspective;
};