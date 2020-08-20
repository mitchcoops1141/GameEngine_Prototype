#include "rectangle.h"
#include "textured_2D_shader_program.h"
#include "assets.h"
#include "masked_textured_2D_shader_program.h"


#define GLEW_STATIC
#include <glew.h>
#include <glm/vec3.hpp>

#include <vector>
#include <math.h>

Rectangle::Rectangle(const char* id)
	: Game_Object(id)
{
	_scale.x = 4;
	_scale.y = 4;
	_scale.z = 4;
}

Rectangle::~Rectangle()
{
}

void Rectangle::simulate_AI(const double, const Assets*, const Scene*, const Configuration*, Input*)
{
}

void Rectangle::render(const double, const Assets* assets, const Scene* scene, const Configuration* config)
{
	const Textured_2D_Shader_Program* program =
		(Textured_2D_Shader_Program*)assets->get_asset("Shader_Program.2D.Textured");
	const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.Square");
	const Texture* texture = (Texture*)assets->get_asset("Texture.Space");

	const glm::mat4x4 transformation = Game_Object::transformation(scene, config);

	program->render(config, mesh, texture, &transformation);
}
