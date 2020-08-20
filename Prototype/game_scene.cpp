#include "game_scene.h"

#include "input.h"

#include "rectangle.h"
#include "right_angle.h"
#include "hexagon.h"
#include "cubeSame.h"
#include "cube_diferent.h"



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
	//Hexagon* hexagon = new Hexagon("Game_Object.Hexagon");
	//_game_objects[hexagon->id()] = hexagon;

	//Press 4: Textured Cube Same side textures:
	//Cube_Same* cube_same = new Cube_Same("Game_Object.Cube_Same");
	//_game_objects[cube_same->id()] = cube_same;


	//Press 5: Textured Cube diferent side textures
	//Cube_Diferent* cube_diferent = new Cube_Diferent("Game_Object.Cube_Diferent");
	//_game_objects[cube_diferent->id()] = cube_diferent;

	//press 6: Textured something

}

Game_Scene::~Game_Scene()
{

}

void Game_Scene::update(const double, Input* input)
{
	Rectangle* rectangle = new Rectangle("Game_Object.Rectangle");
	Right_Angle* right_angle = new Right_Angle("Game_Object.Right_Angle");
	Hexagon* hexagon = new Hexagon("Game_Object.Hexagon");
	Cube_Same* cube_same = new Cube_Same("Game_Object.Cube_Same");
	Cube_Diferent* cube_diferent = new Cube_Diferent("Game_Object.Cube_Diferent");


	if (input->is_button_state(Input::Button::One, Input::Button_State::PRESSED))
	{
		remove_game_object("Game_Object.Right_Angle");
		remove_game_object("Game_Object.Hexagon");
		remove_game_object("Game_Object.Cube_Same");
		remove_game_object("Game_Object.Cube_Diferent");
		add_game_object(rectangle);
	}
	if (input->is_button_state(Input::Button::Two, Input::Button_State::PRESSED))
	{
		remove_game_object("Game_Object.Rectangle");
		remove_game_object("Game_Object.Hexagon");
		remove_game_object("Game_Object.Cube_Same");
		remove_game_object("Game_Object.Cube_Diferent");
		add_game_object(right_angle);
	}
	if (input->is_button_state(Input::Button::Three, Input::Button_State::PRESSED))
	{
		remove_game_object("Game_Object.Rectangle");
		remove_game_object("Game_Object.Right_Angle");
		remove_game_object("Game_Object.Cube_Same");
		remove_game_object("Game_Object.Cube_Diferent");
		add_game_object(hexagon);
	}
	if (input->is_button_state(Input::Button::Four, Input::Button_State::PRESSED))
	{
		remove_game_object("Game_Object.Rectangle");
		remove_game_object("Game_Object.Right_Angle");
		remove_game_object("Game_Object.Hexagon");
		remove_game_object("Game_Object.Cube_Diferent");
		add_game_object(cube_same);
	}
	if (input->is_button_state(Input::Button::Five, Input::Button_State::PRESSED))
	{
		remove_game_object("Game_Object.Rectangle");
		remove_game_object("Game_Object.Right_Angle");
		remove_game_object("Game_Object.Hexagon");
		remove_game_object("Game_Object.Cube_Same");
		add_game_object(cube_diferent);
	}
}