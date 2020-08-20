#pragma once

#include <map>
#include <string>
#include <vector>

class Game_Object;
class Input;

class Scene
{
public:
	Scene(const char* id);
	~Scene();

	virtual void update(const double seconds_to_simulate, Input* input) = 0;

	Game_Object* get_game_object(const char* id) const;
	std::vector<Game_Object*> get_game_objects() const;

	void add_game_object(Game_Object* game_object);
	void remove_game_object(std::string id);

	const char* id() const;

protected:
	std::map<std::string, Game_Object*> _game_objects;
	const char*                         _id;
};