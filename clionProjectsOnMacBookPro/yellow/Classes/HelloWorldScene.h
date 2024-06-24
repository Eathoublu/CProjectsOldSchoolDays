#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
//#include "Box2D/Box2D.h"

class HelloWorld : public cocos2d::Layer//cocos2d::Scene
{
    cocos2d::TMXTiledMap *_tileMap;
    cocos2d::Sprite * _player;
public:
    static cocos2d::Scene* createScene();
//protected:
//    b2World * _world;
//    cocos2d::Sprite * _ball;
    
//public:
//    static cocos2d::Scene * creatScene();
      virtual bool init();
//    
    virtual bool onTouchBegan(cocos2d::Touch *t,cocos2d::Event *e);
    virtual void onTouchMoved(cocos2d::Touch *t,cocos2d::Event *e);
    virtual void onTouchEnded(cocos2d::Touch *t,cocos2d::Event *e);
    
      CREATE_FUNC(HelloWorld);
    
    
    
    
    

 //   virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
 //   CREATE_FUNC(HelloWorld);
   //virtual void update(float dt);
    //void a(cocos2d::Ref * pSender);
    
    
};

#endif // __HELLOWORLD_SCENE_H__
