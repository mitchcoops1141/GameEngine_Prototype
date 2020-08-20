#pragma once

#include "game_object.h"

class Blocky_Boy : public Game_Object
{
public:
	Blocky_Boy(const char* id);
	~Blocky_Boy();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
private:
	float _total_time_s;

};
