#include "game_scene.h"

#include "input.h"

#include "rectangle.h"
#include "right_angle.h"
#include "hexagon.h"
#include "cubeSame.h"
#include "cube_diferent.h"
#include "pyramid.h"



Game_Scene::Game_Scene()
	: Scene("Game")
{
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
	Pyramid* pyramid = new Pyramid("Game_Object.Pyramid");


	if (input->is_button_state(Input::Button::One, Input::Button_State::PRESSED))
	{
		remove_game_object(right_angle->id());
		delete right_angle;
		remove_game_object(hexagon->id());
		delete hexagon;
		remove_game_object(cube_same->id());
		delete cube_same;
		remove_game_object(cube_diferent->id());
		delete cube_diferent;
		remove_game_object(pyramid->id());
		delete pyramid;

		add_game_object(rectangle);
	}
	if (input->is_button_state(Input::Button::Two, Input::Button_State::PRESSED))
	{
		remove_game_object(rectangle->id());
		delete rectangle;
		remove_game_object(hexagon->id());
		delete hexagon;
		remove_game_object(cube_same->id());
		delete cube_same;
		remove_game_object(cube_diferent->id());
		delete cube_diferent;
		remove_game_object(pyramid->id());
		delete pyramid;

		add_game_object(right_angle);
	}
	if (input->is_button_state(Input::Button::Three, Input::Button_State::PRESSED))
	{
		remove_game_object(rectangle->id());
		delete rectangle;
		remove_game_object(right_angle->id());
		delete right_angle;
		remove_game_object(cube_same->id());
		delete cube_same;
		remove_game_object(cube_diferent->id());
		delete cube_diferent;
		remove_game_object(pyramid->id());
		delete pyramid;

		add_game_object(hexagon);
	}
	if (input->is_button_state(Input::Button::Four, Input::Button_State::PRESSED))
	{
		remove_game_object(rectangle->id());
		delete rectangle;
		remove_game_object(right_angle->id());
		delete right_angle;
		remove_game_object(hexagon->id());
		delete hexagon;
		remove_game_object(cube_diferent->id());
		delete cube_diferent;
		remove_game_object(pyramid->id());
		delete pyramid;

		add_game_object(cube_same);
	}
	if (input->is_button_state(Input::Button::Five, Input::Button_State::PRESSED))
	{
		remove_game_object(rectangle->id());
		delete rectangle;
		remove_game_object(right_angle->id());
		delete right_angle;
		remove_game_object(hexagon->id());
		delete hexagon;
		remove_game_object(cube_same->id());
		delete cube_same;
		remove_game_object(pyramid->id());
		delete pyramid;

		add_game_object(cube_diferent);
	}
	if (input->is_button_state(Input::Button::Six, Input::Button_State::PRESSED))
	{
		remove_game_object(rectangle->id());
		delete rectangle;
		remove_game_object(right_angle->id());
		delete right_angle;
		remove_game_object(hexagon->id());
		delete hexagon;
		remove_game_object(cube_same->id());
		delete cube_same;
		remove_game_object(cube_diferent->id());
		delete cube_diferent;

		add_game_object(pyramid);
	}
}