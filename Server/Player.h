#pragma once
#include "GameObject.h"

class Player: public GameObject
{
	using Super = GameObject;
public:
	Player();
	virtual ~Player();

public:
	GameSessionRef session;
};

