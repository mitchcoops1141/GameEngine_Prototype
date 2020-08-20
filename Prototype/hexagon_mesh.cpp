#include "hexagon_mesh.h"

Hexagon_Mesh::Hexagon_Mesh()
	: Mesh("Mesh.Hexagon")
{
	auto v1 = { 0.f, 0.f};
	auto v2 = { -0.5f, 0.f};
	auto v3 = { -0.25f, -0.5f};
	auto v4 = { 0.25f, -0.5f };
	auto v5 = { 0.5f, 0.f};
	auto v6 = { 0.25f, 0.5f};
	auto v7 = { -0.25f, 0.5f};

	//triangle 1
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v1);

	_texture_coordinates.insert(_texture_coordinates.end(), v2);
	_texture_coordinates.insert(_texture_coordinates.end(), v3);
	_texture_coordinates.insert(_texture_coordinates.end(), v1);

	//triangle 2:
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v1);

	_texture_coordinates.insert(_texture_coordinates.end(), v3);
	_texture_coordinates.insert(_texture_coordinates.end(), v4);
	_texture_coordinates.insert(_texture_coordinates.end(), v1);

	//triangle 3:
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), v1);
	_texture_coordinates.insert(_texture_coordinates.end(), v4);
	_texture_coordinates.insert(_texture_coordinates.end(), v5);

	//triangle 4:
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v5);
	_verticies.insert(_verticies.end(), v6);

	_texture_coordinates.insert(_texture_coordinates.end(), v1);
	_texture_coordinates.insert(_texture_coordinates.end(), v5);
	_texture_coordinates.insert(_texture_coordinates.end(), v6);

	//triangle 5:
	_verticies.insert(_verticies.end(), v7);
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v6);

	_texture_coordinates.insert(_texture_coordinates.end(), v7);
	_texture_coordinates.insert(_texture_coordinates.end(), v1);
	_texture_coordinates.insert(_texture_coordinates.end(), v6);

	//triangle 6:
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v7);

	_texture_coordinates.insert(_texture_coordinates.end(), v2);
	_texture_coordinates.insert(_texture_coordinates.end(), v1);
	_texture_coordinates.insert(_texture_coordinates.end(), v7);


}

Hexagon_Mesh::~Hexagon_Mesh()
{
}
