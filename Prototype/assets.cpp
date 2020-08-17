#include "assets.h"
#include "shader.h"
#include "texture.h"
#include "colored_2D_shader_program.h"
#include "triangle_mesh.h"
#include "square_mesh.h"
#include "textured_2D_shader_program.h"
#include "textured_3D_shader_program.h"
#include "masked_textured_2D_shader_program.h"
#include "colored_3D_shader_program.h"
#include "cube_mesh.h"

#define GLEW_STATIC
#include <glew.h>

#include <iostream>

Assets::Assets()
{
	Triangle_Mesh* traingle_mesh = new Triangle_Mesh();
	_assets.insert({ traingle_mesh->id(), traingle_mesh });

	Shader* colored_2D_vertex_shader = new Shader("Shader.Colored.2D.Vertex", "Shaders/colored.2D.vertex_shader.glsl", Shader::Type::Vertex);
	_assets.insert({ colored_2D_vertex_shader->id(), colored_2D_vertex_shader });

	Shader* colored_2D_fragment_shader = new Shader("Shader.Colored.2D.Fragment", "Shaders/colored.2D.fragment_shader.glsl", Shader::Type::Fragment);
	_assets.insert({ colored_2D_fragment_shader->id(), colored_2D_fragment_shader });

	Colored_2D_Shader_Program* colored_2D_program = new Colored_2D_Shader_Program(colored_2D_vertex_shader, colored_2D_fragment_shader);
	_assets.insert({ colored_2D_program->id(), colored_2D_program });

	Square_Mesh* square_mesh = new Square_Mesh();
	_assets.insert({ square_mesh->id(), square_mesh });

	Shader* textured_2D_vertex_shader = new Shader("Shader.Textured.2D.Vertex", "Shaders/textured.2D.vertex_shader.glsl", Shader::Type::Vertex);
	_assets.insert({ textured_2D_vertex_shader->id(), textured_2D_vertex_shader });

	Shader* textured_2D_fragment_shader = new Shader("Shader.Textured.2D.Fragment", "Shaders/textured.2D.fragment_shader.glsl", Shader::Type::Fragment);
	_assets.insert({ textured_2D_fragment_shader->id(), textured_2D_fragment_shader });

	Textured_2D_Shader_Program* textured_2D_program = new Textured_2D_Shader_Program(textured_2D_vertex_shader, textured_2D_fragment_shader);
	_assets.insert({ textured_2D_program->id(), textured_2D_program });

	Shader* masked_textured_2D_fragment_shader = new Shader("Shader.Masked_Textured.2D.Fragment", "Shaders/masked_textured.2D.fragment_shader.glsl", Shader::Type::Fragment);
	_assets.insert({ masked_textured_2D_fragment_shader->id(), masked_textured_2D_fragment_shader });

	Masked_Textured_2D_Shader_Program* masked_textured_2D_program = new Masked_Textured_2D_Shader_Program(textured_2D_vertex_shader, masked_textured_2D_fragment_shader);
	_assets.insert({ masked_textured_2D_program->id(), masked_textured_2D_program });

	Shader* colored_3D_vertex_shader = new Shader("Shader.Colored.3D.Vertex", "Shaders/colored.3D.vertex_shader.glsl", Shader::Type::Vertex);
	_assets.insert({ colored_3D_vertex_shader->id(), colored_3D_vertex_shader });

	Shader* colored_3D_fragment_shader = new Shader("Shader.Colored.3D.Fragment", "Shaders/colored.2D.fragment_shader.glsl", Shader::Type::Fragment);
	_assets.insert({ colored_3D_fragment_shader->id(), colored_3D_fragment_shader });

	Colored_3D_Shader_Program* colored_3D_program = new Colored_3D_Shader_Program(colored_3D_vertex_shader, colored_3D_fragment_shader);
	_assets.insert({ colored_3D_program->id(), colored_3D_program });

	Cube_Mesh* cube_mesh = new Cube_Mesh();
	_assets.insert({ cube_mesh->id(), cube_mesh });

	Shader* textured_3D_vertex_shader = new Shader("Shader.Textured.3D.Vertex", "Shaders/textured.3D.vertex_shader.glsl", Shader::Type::Vertex);
	_assets.insert({ textured_3D_vertex_shader->id(), textured_3D_vertex_shader });

	Shader* textured_3D_fragment_shader = new Shader("Shader.Textured.3D.Fragment", "Shaders/textured.3D.fragment_shader.glsl", Shader::Type::Fragment);
	_assets.insert({ textured_3D_fragment_shader->id(), textured_3D_fragment_shader });

	Textured_3D_Shader_Program* textured_3D_program = new Textured_3D_Shader_Program(textured_3D_vertex_shader, textured_3D_fragment_shader);
	_assets.insert({ textured_3D_program->id(), textured_3D_program });

	Texture* space_texture = new Texture("Texture.Space", "Assets/texture.space.png");
	_assets.insert({ space_texture->id(), space_texture });
}

Assets::~Assets()
{
}

const Asset* Assets::get_asset(const char* id) const
{
	if(_assets.find(id) == _assets.end())
	{
		std::cout << "Attempted to find an asset that was not loaded. ID: " << id << std::endl;
		exit(1);
	}

	return _assets.find(id)->second;
}