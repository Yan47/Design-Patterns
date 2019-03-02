#pragma once
#include "MapSite.h"
class Room :
	public MapSite
{
private:
	size_t _roomNumber; // 房间号
	MapSite* _sides[4]; // 房间的4面墙

public:
	Room(size_t roomNumber) :_roomNumber(roomNumber) {}
	~Room();

	void SetSide(Direction, MapSite* mapSite);
	void GetSide(Direction) const;
	virtual void Enter() override;
};

enum Direction
{
	North,
	South,
	East,
	West
};

