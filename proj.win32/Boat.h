#pragma once
#include <cocos2d.h>
#include"Person.h"

#define WIN_SIZE CCDirector::sharedDirector()->getWinSize()

class Boat :
	public cocos2d::CCNode
{
private:
	RiverAdr riverAdr;//�ں�������߻��ұ�
public:
	static Person* create();
	bool init(); 

	virtual void AcrossRiver(); //����

	RiverAdr GetRiverAdr();
};