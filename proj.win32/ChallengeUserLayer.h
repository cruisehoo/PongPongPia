#pragma once
#include <cocos2d.h>
#include "GameScene.h"
#include"Equipment.h"
#include"StartScene.h"
#include "Role.h"
#include "UserData.h"

#include"TipsLayer.h"

#define WIN_SIZE CCDirector::sharedDirector()->getWinSize()

class ChallengeUserLayer :
	public cocos2d::CCLayer
{
public:
	static ChallengeUserLayer* create(Role* role,CCPoint position);
	bool init(Role* role,CCPoint position);

	void CreatTipLayer();

	CC_SYNTHESIZE(CCString,username,Username);
	CC_SYNTHESIZE(int,level,Level);
	CC_SYNTHESIZE(int,honor,Honor);
	CC_SYNTHESIZE(CCPoint,position,ThisPosition);
	CC_SYNTHESIZE(bool,showTip,ShowTip);
	CC_SYNTHESIZE(TipsLayer*,tipLayer,TipLayer);
	CC_SYNTHESIZE(Role*,role,Role);

	void removeFromParentCallback(CCObject* pSender);

protected:
	void drawBackground();//������
	void DrawHeadSculpture();//��ͷ��
	void DrawUserName();//д����
	void DrawLevel();//д�ȼ�
	void DrawHonor();//д����ֵ
	void DrawPK();//��PK

	void ClickBackground(CCObject* pSender);//�����������
	void ClickHeadSculpture(CCObject* pSender);//���ͷ��
	void ClickLevel(CCObject* pSender);//����ȼ�����
	void ClickPK(CCObject* pSender);//���PK����

	std::string intToString(int n);
public:
	void operateAllSchedulerAndActions(cocos2d::CCNode* node, OperateFlag flag);
	virtual void removeFromParentAndCleanup();
	void displayOn(cocos2d::CCNode* node);
};

