#pragma once
class MapSite
{
public:
	MapSite();
	~MapSite();
	
	/**
	1.如果进入房间,位置会发生改变
	2.如果进入门,如果门是开着的,会进入另一个房价;如果门是关着的,你会碰壁
	*/
	virtual void Enter() = 0;
};

