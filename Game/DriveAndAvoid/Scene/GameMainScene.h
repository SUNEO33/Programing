#pragma once

#include "SceneBase.h"
#include "../Object/Player.h"
#include "../Object/Enemy.h"

class GameMainScene:public SceneBase
{
private:
	int high score;      //ハイスコア
	int back_ground;     //背景画像
	int barrier_image;    //バリア画像
	int mileage;          //走行距離
	int enemy_image[3];   //敵画像
	int enemy_count[3];   //通り過ぎた敵カウント
	Player* player;       //プレイヤー
	Enemy** enemy;        //敵
};

