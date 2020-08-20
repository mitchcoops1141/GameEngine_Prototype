#pragma once

#include "game_object.h"

class Rectangle : public Game_Object
{
public:
	Rectangle(const char* id);
	~Rectangle();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
};