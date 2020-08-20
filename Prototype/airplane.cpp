#include "airplane.h"
#include "textured_2D_shader_program.h"
#include "assets.h"
#include "masked_textured_2D_shader_program.h"


#define GLEW_STATIC
#include <glew.h>

#include <vector>
#include <math.h>

Airplane::Airplane(const char* id)
	: Game_Object(id)
{
}
Airplane::~Airplane()
{
}
void Airplane::simulate_AI(const double, const Assets*, const Scene*, const Configuration*)
{
}
void Airplane::render(const double, const Assets* assets, const Scene* scene, const Configuration* config)
{
	const Textured_2D_Shader_Program* program = 
		(Textured_2D_Shader_Program*)assets->get_asset("Shader_Program.2D.Textured");
	const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.Square");
	const Texture* texture = (Texture*)assets->get_asset("Sprite.Airplane");

	const glm::mat4x4 transformation = Game_Object::transformation(scene, config);

	program->render(config, mesh, texture, &transformation);
}