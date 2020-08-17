#include "game_scene.h"
#include "rectangle.h"

#include <glm/geometric.hpp>
#include <glm/vec3.hpp>
#include "input.h"

Game_Scene::Game_Scene()
	: Scene("Game")
{
	//Pointy_Head* pointy_head = new Pointy_Head("Game_Object.Pointy_Head");
	//_game_objects[pointy_head->id()] = pointy_head;

	Rectangle* rectangle = new Rectangle("Game_Object.Rectangle");
	_game_objects[rectangle->id()] = rectangle;
	//rectangle->translate(glm::vec3(0, 0, 0));
}

Game_Scene::~Game_Scene()
{

}

void Game_Scene::update(const double seconds_to_simulate, Input* input)
{
	if (input->is_button_state(Input::Button::FORWARD, Input::Button_State::DOWN))
	{
		_camera_position += _camera_forward * (float)seconds_to_simulate;
	}
	if (input->is_button_state(Input::Button::LEFT, Input::Button_State::DOWN))
	{
		_camera_position -= glm::cross(_camera_forward, _camera_up) * (float)seconds_to_simulate;
	}
	if (input->is_button_state(Input::Button::BACKWARD, Input::Button_State::DOWN))
	{
		_camera_position -= _camera_forward * (float)seconds_to_simulate;
	}
	if (input->is_button_state(Input::Button::RIGHT, Input::Button_State::DOWN))
	{
		_camera_position += glm::cross(_camera_forward, _camera_up) * (float)seconds_to_simulate;
	}

	Game_Object* rectangle = get_game_object("Game_Object.Rectangle");
	if (!rectangle)
	{
		std::cout << "RECTANGLE NOT FOUND" << std::endl;
	}
	else
	{
		std::cout << "RECTANGLE FOUND" << std::endl;
	}
}