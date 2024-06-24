#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "Box2D/Box2D.h"
USING_NS_CC;
static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}


#include "HelloWorldScene.h"
//创建场景
Scene* HelloWorld::createScene()
{
    //创建一个自释放的场景对象
    auto scene = Scene::create();
    //创建一个自释放的画面层对象
    auto layer = HelloWorld::create();
    //把创建的画面层添加到场景中
    //一个场景可以添加多个画面层
    scene->addChild(layer);
    //返回这个创建的场景
    return scene;
}

// 场景初始化方法
bool HelloWorld::init()
{
    auto _player = Sprite::create("/Users/eathoublu/Downloads/1.png");
    _player->setPosition(0,0);
    this->addChild(_player,2);
    setTouchEnabled(true);
    setTouchMode(Touch::DispatchMode::ONE_BY_ONE);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return true;
}

bool HelloWorld::onTouchBegan(Touch *t, Event *e){
    log("onTouchB");
    return true;
}
void HelloWorld::onTouchMoved(Touch *t, Event *e){
    log("onTouchM");
}
void HelloWorld::onTouchEnded(Touch *t, Event *e){
    log("onTouchE");
    Vec2 touchLocation = t->getLocation();
    Vec2 playPos = _player->getPosition();
    Vec2 diff = touchLocation - playPos;
    if(fabs(diff.x)>fabs(diff.y)){
        if(diff.x>0){
        playPos.x += _tileMap->getTileSize().width;
        _player->runAction(FlipX::create(false));
    }else{
        playPos.x -= _tileMap->getTileSize().width;
        _player->runAction(FlipX::create(true));
    }
    }else{
        if(diff.y>0){
            playPos.y += _tileMap->getTileSize().height;
            _player->runAction(FlipX::create(false));
        }else{
            playPos.y -= _tileMap->getTileSize().height;
            _player->runAction(FlipX::create(true));
        }
    }
    _player->setPosition(playPos);
    
}




//int x=0,y=0;
//void HelloWorld::update(float dt){
//    auto ghost = Sprite::create("/Users/eathoublu/Downloads/yellow/proj.ios_mac/ios/Icon-50.png");
//    addChild(ghost,151);
//
//
//
//
//}


//void HelloWorld::update(float dt){//该函数是重写函数，需要在头文件里面进行定义。
//  _world->Step(0.03f,8,10);
// auto body = _world->GetBodyList();
//    _ball->setPosition(body->GetPosition().x*32.0f,body->GetPosition().y*32.0f);


//}

//退出按钮事件

//auto g = Sprite::create("/Users/eathoublu/Downloads/1.png");
//g->setPosition(100,100);
//void HelloWorld::update(float dt){
//    auto g = this->getChildByTag(123);
//    printf("haha\n");
//    //  g->setPosition(g->getPosition()+Vec2(2,-2));
//    //  addChild(g,154);
//    
//    
//}



void HelloWorld::menuCloseCallback(Ref* pSender)
{
    //当是wp8或者winrt平台的时候
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
    MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif
    //结束Director
    Director::getInstance()->end();
    //当是ios平台的时候退出
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}

class imageScene:public Layer{
public:
    static Scene* createScene();
    
    CREATE_FUNC(imageScene);
    
    
    
    
};
