#pragma once
class MapSite
{
public:
	MapSite();
	~MapSite();
	
	/**
	1.������뷿��,λ�ûᷢ���ı�
	2.���������,������ǿ��ŵ�,�������һ������;������ǹ��ŵ�,�������
	*/
	virtual void Enter() = 0;
};

