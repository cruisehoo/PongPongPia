#pragma once
#include <cocos2d.h>
#include"Person.h"
#define WIN_SIZE CCDirector::sharedDirector()->getWinSize()

class Pastor :
	public Person
{
private:
	virtual void setInit();//��ʼվλ���
public:
	static Pastor* create(int adrID);
	bool init(int adrID); 

	virtual void TakeBoat();//�ϴ�
	virtual void GoAshore();//�´�

	virtual void AcrossRiver() ; //����

	virtual void ClickPerson(CCObject* pSender);//�����������

	void KillPastor();//ɱ��ʦ

};