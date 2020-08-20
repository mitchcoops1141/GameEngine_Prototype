#include "cubeSame.h"
#include "colored_3D_shader_program.h"
#include "textured_3D_shader_program.h"
#include "assets.h"
#include "mesh.h"

#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>
#include <glm/gtx/transform.hpp>

#define GLEW_STATIC
#include <glew.h>

#include <vector>
#include <math.h>

Cube_Same::Cube_Same(const char* id)
	: Game_Object(id)
{
}

Cube_Same::~Cube_Same()
{
}

void Cube_Same::simulate_AI(const double, const Assets*, const Scene*, const Configuration*, Input*)
{
}

void Cube_Same::render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config)
{
	static double total_time = 0;
	total_time += seconds_to_simulate;

	_rotation.x = (float)total_time;
	_rotation.y = (float)total_time;
	_rotation.z = (float)total_time;

	const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.Cube");
	glm::mat4 trans = transformation(scene, config);
	const Textured_3D_Shader_Program* program = (Textured_3D_Shader_Program*)assets->get_asset("Shader_Program.3D.Textured");
	const Texture* texture = (Texture*)assets->get_asset("Texture.Dirt_Block");
	program->render(config, mesh, texture, &trans);
}
