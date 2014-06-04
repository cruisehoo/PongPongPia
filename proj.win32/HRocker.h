#ifndef RockerPro_HRocker_h
#define RockerPro_HRocker_h

#ifndef HRocker_H
#define HRocker_H
#include "cocos2d.h"

using namespace cocos2d;

class HRocker : public CCLayer {

public :
    /* ʹ�÷���
     *    ��һ������aPoint��ҡ�����ĵ������
     *    �ڶ�������aRadius: ҡ�˵İ뾶
     *    ������������aJsSprite :ҡ�˵�ͼƬ��Դ����
     *    ���ĸ�������aJsBg: ҡ�˱���ͼƬ��Դ����
     *    �����������isFollowRole���Ƿ���ҡ����Զ�����û�������
     */
    //��ʼ�� aPoint��ҡ������ aRadius��ҡ�˰뾶 aJsSprite��ҡ�˿��Ƶ� aJsBg��ҡ�˱��� isFollowRole�Ƿ���ҡ����Զ�����û�������
    static HRocker*  HRockerWithCenter(CCPoint aPoint, float aRadius, CCSprite* aJsSprite, CCSprite* aJsBg, bool _isFollowRole);

    //����ҡ��
    void Active();

    //���ҡ��
    void Inactive();

	CCPoint getDirection();

	float getVelocity();

private:
    /* ��ʼ������
     *    ��һ������aPoint��ҡ�����ĵ������
     *    �ڶ�������aRadius: ҡ�˵İ뾶
     *    ������������aJsSprite :ҡ�˵�ͼƬ��Դ����
     *    ���ĸ�������aJsBg: ҡ�˱���ͼƬ��Դ����
     *    �����������isFollowRole���Ƿ���ҡ����Զ�����û�������
     */
    //��ʼ�� aPoint��ҡ������ aRadius��ҡ�˰뾶 aJsSprite��ҡ�˿��Ƶ� aJsBg��ҡ�˱��� isFollowRole�Ƿ���ҡ����Զ�����û�������
    HRocker * initWithCenter(CCPoint aPoint, float aRadius, CCSprite* aJsSprite, CCSprite* aJsBg, bool _isFollowRole);

    CCPoint centerPoint;//ҡ������

    CCPoint currentPoint;//ҡ�˵�ǰλ��

    bool active;//�Ƿ񼤻�ҡ��

    float radius;//ҡ�˰뾶

    CCSprite *jsSprite;

    bool isFollowRole;//�Ƿ�����û����

    void  updatePos(float dt);

    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent);
    CREATE_FUNC(HRocker);
};
#endif

#endif