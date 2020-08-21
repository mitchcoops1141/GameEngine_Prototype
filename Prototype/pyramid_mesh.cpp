#include "pyramid_mesh.h"
#include "pyramid.h"

Pyramid_Mesh::Pyramid_Mesh()
	: Mesh("Mesh.Pyramid")
{
	auto v1 = { 0.f, 0.5f, 0.f };
	auto v2 = { -0.5f, -0.5f, -0.5f };
	auto v3 = { -0.5f, -0.5f, 0.5f };
	auto v4 = { 0.5f, -0.5f, 0.5f };
	auto v5 = { 0.5f, -0.5f, -0.5f };


	auto tl = { 0.0f, 0.0f };
	auto tr = { 1.0f, 0.0f };
	auto br = { 1.0f, 1.0f };
	auto bl = { 0.0f, 1.0f };
	auto t  = { 0.5f, 0.f };



	// Front Face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v4);

	_texture_coordinates.insert(_texture_coordinates.end(), t);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);

	// Right Face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), t);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);

	// Back Face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v5);
	_verticies.insert(_verticies.end(), v2);

	_texture_coordinates.insert(_texture_coordinates.end(), t);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);

	// Left Face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v3);

	_texture_coordinates.insert(_texture_coordinates.end(), t);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);

	// Bottom Face
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);

}

Pyramid_Mesh::~Pyramid_Mesh()
{
}