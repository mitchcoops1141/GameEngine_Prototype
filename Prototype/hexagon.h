#pragma once

#include "game_object.h"

class Hexagon : public Game_Object
{
public:
	Hexagon(const char* id);
	~Hexagon();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
};