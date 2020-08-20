#pragma once
#include "triangle_mesh.h"

Triangle_Mesh::Triangle_Mesh()
	: Mesh("Mesh.Triangle")
{
	_verticies.insert(_verticies.end(), {-0.5f, 0.5f}); // v1
	_verticies.insert(_verticies.end(), {-0.5f, -0.5f});  // v2
	_verticies.insert(_verticies.end(), {0.5f, -0.5f});    // v3

	_texture_coordinates.insert(_texture_coordinates.end(), {0.0f, 1.0f});
	_texture_coordinates.insert(_texture_coordinates.end(), {1.f, 1.0f});
	_texture_coordinates.insert(_texture_coordinates.end(), {0.5f, 0.0f});
}
Triangle_Mesh::~Triangle_Mesh()
{
}