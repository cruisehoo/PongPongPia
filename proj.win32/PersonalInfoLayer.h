
#pragma once
#include <cocos2d.h>
#include "cocos2d.h"
#include"Equipment.h"
#include"StartScene.h"
#include "Role.h"
#include "UserData.h"
#include "GameScene.h"
#include"TipsLayer.h"
#include"ChallengeScene.h"
#include"ViewDataLayer.h";
#include"ViewEquipmentLayer.h"
#include"ViewProperyLayer.h"

typedef enum{
	view_data,
	view_equipment,
	view_property
}CurrentWindowType;

class PersonalInfoLayer :
	public cocos2d::CCLayer
{
public:
	static PersonalInfoLayer* create(CurrentWindowType type = view_data);
	bool init(CurrentWindowType type);

	static PersonalInfoLayer* createOtherInfor(Role* role);
	bool init(Role* role);

	bool isUseData;//true��ʾ���Լ��鿴�Լ��ġ�
	int roleType;
	Equipment equipment;

	CC_SYNTHESIZE(CurrentWindowType,currentWindow,CurrentWindow);
	//0��ʾ��ǰ��ʾ����Ϊ�鿴����
	//1��ʾ��ǰ��ʾ����Ϊ�鿴װ��
	//2��ʾ��ǰ��ʾ����Ϊ�鿴����
	CC_SYNTHESIZE(ViewDataLayer*,viewDataWindow,ViewDataWindow);
	CC_SYNTHESIZE(ViewEquipmentLayer*,viewEquipmentWindow,ViewEquipmentWindow);
	CC_SYNTHESIZE(ViewProperyLayer*,viewProperyindow,ViewProperyWindow);

protected:
	void getdata();
	void CreatViewDataWindow();//�����鿴���ϴ���
	void CreatViewDataWindow(Role* role);
	void CreatViewEquipmentWindow();//�����鿴װ������
	void CreatViewProperyWindow();//�����鿴���ߴ���

	void DrawBackground();//������
	void DrawBackTo();//�����Ͻǵķ��ذ�ť
	void DrawRole();//������
	void DrawWindow();//������
	void DrawViewData();//���鿴����
	void DrawViewEquipment();//���鿴װ��
	void DrawViewProperty();//���鿴����

	void DrawViewWindow();//���鿴���ϴ���

	void ClickBackTo(CCObject* pSender);//������ذ�ť
	void ClickViewData(CCObject* pSender);//����鿴����
	void ClickViewEquipment(CCObject* pSender);//����鿴װ��
	void ClickViewProperty(CCObject* pSender);//����鿴����

public:
	void operateAllSchedulerAndActions(cocos2d::CCNode* node, OperateFlag flag);
	virtual void removeFromParentAndCleanup();
	void displayOn(cocos2d::CCNode* node);
	bool ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	void registerWithTouchDispatcher();
	void ReDrawRole();
};

