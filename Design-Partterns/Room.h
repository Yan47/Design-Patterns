#pragma once
#include "MapSite.h"
class Room :
	public MapSite
{
private:
	size_t _roomNumber; // �����
	MapSite* _sides[4]; // �����4��ǽ

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

