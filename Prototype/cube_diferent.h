#pragma once

#include "game_object.h"

class Cube_Diferent : public Game_Object
{
public:
	Cube_Diferent(const char* id);
	~Cube_Diferent();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config, Input* input) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
};