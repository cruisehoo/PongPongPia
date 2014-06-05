//
//  PongPongPiaData.h
//  PongPongPiaData
//
//  Created by HuFan on 13-9-15.
//
//

#ifndef __PongPongPia__PongPongPiaData__
#define __PongPongPia__PongPongPiaData__
#include "cocos2d.h"
class PongPongPiaData : public cocos2d::CCObject
{
public:
    static PongPongPiaData* sharedPongPongPiaData();
    //CC_SYNTHESIZE(int , _gold, Gold);
    CC_SYNTHESIZE(bool, _isBeginner, IsBeginner);
    CC_SYNTHESIZE(float, _soundVolume, SoundVolume);
    CC_SYNTHESIZE(float, _musicVolume, MusicVolume);
    
    /**
     *	@brief	 �ڴ治��ʱ����
     */
    void purge();
    
    /**
     *	@brief	 �����ݴ��ڴ汣�浽�ⲿ�ļ���
     */
    void flush();
    
    /**
     *	@brief	 ��Gold�Ĳ���
     *
     *	@param 	delta 	����ֵ����
     */
    void alterGold(int delta);
    /**
     *	@brief	 ������Ϸ����ΪĬ����ֵ
     */
    void reset();
protected:
    PongPongPiaData();
    ~PongPongPiaData();
    bool init();
};

#endif /* defined(__PongPongPia__PongPongPiaData__) */
