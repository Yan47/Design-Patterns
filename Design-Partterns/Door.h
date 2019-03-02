#pragma once
#include "MapSite.h"
#include "Room.h"
class Door :
	public MapSite
{
public:
	Door(Room*, Room*);
	~Door();

	virtual void Enter() override;
};

