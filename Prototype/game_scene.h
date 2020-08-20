#pragma once

#include "scene.h"

class Game_Scene : public Scene
{
public:
	Game_Scene();
	~Game_Scene();

	virtual void update(const double seconds_to_simulate, Input* input) override;

private:
	bool _showOne = false;
	bool _showTwo = false;
	bool _showThree = false;
	bool _showFour = false;
	bool _showFive = false;
	bool _showDix = false;
};