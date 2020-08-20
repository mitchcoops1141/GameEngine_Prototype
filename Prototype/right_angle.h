#pragma once

#include "game_object.h"

class Right_Angle : public Game_Object
{
public:
	Right_Angle(const char* id);
	~Right_Angle();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config, Input*) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
};