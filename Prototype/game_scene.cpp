#include "game_scene.h"

#include "pointy_head.h"
#include "blocky_boy.h"
#include "airplane.h"
#include "crazy_crate.h"
#include "rectangle.h"
#include "right_angle.h"
#include "hexagon.h"

Game_Scene::Game_Scene()
	: Scene("Game")
{
	//Press 1: textured rectangle
	//Rectangle* rectangle = new Rectangle("Game_Object.Rectangle");
	//_game_objects[rectangle->id()] = rectangle;

	//Press 2: Textured Right angle triangle
	//Right_Angle* right_angle = new Right_Angle("Game_Object.Right_Angle");
	//_game_objects[right_angle->id()] = right_angle;

	//Press 3: Textured Hexagon:
	Hexagon* hexagon = new Hexagon("Game_Object.Hexagon");
	_game_objects[hexagon->id()] = hexagon;

	//Press 4: Textured Cube Same side textures:


	//Press 5: Textured Cube diferent side textures

	//press 6: Textured something

	//Crazy_Crate* crazy_crate = new Crazy_Crate("Game_Object.Crate");
	//_game_objects[crazy_crate->id()] = crazy_crate;
}

Game_Scene::~Game_Scene()
{

}

void Game_Scene::update(const double)
{
}