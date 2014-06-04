#pragma once
#include <cocos2d.h>

#define WIN_SIZE CCDirector::sharedDirector()->getWinSize()

typedef enum{
	riverLeft,
	riverRight
}RiverAdr;//�ӵ���߻��ұ�

typedef enum{
	bank,
	boardLeft,
	boardRight
}AdrBoard;//�ڰ��ϣ����󣬴���

class Person :
	public cocos2d::CCNode
{
private:
	int adrID;//��ַ���1-6
	RiverAdr riverAdr;//�ں�������߻��ұ�
	AdrBoard adrBoard;//λ�ã��ڰ��ϻ��Ǵ�����ң�

	virtual void setInit() = 0;//��ʼվλ���
public:
	static Person* create(int adrID);
	bool init(int adrID); 

	virtual void TakeBoat() = 0;//�ϴ�
	virtual void GoAshore() = 0;//�´�
	
	virtual void AcrossRiver() = 0; //����
	virtual void ClickPerson(CCObject* pSender) = 0;//�����������

	RiverAdr GetRiverAdr();
	AdrBoard GetAdrBoard();

};