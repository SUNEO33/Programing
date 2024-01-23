#pragma once

#include "SceneBase.h"
#include "../Object/Player.h"
#include "../Object/Enemy.h"

class GameMainScene:public SceneBase
{
private:
	int high score;      //�n�C�X�R�A
	int back_ground;     //�w�i�摜
	int barrier_image;    //�o���A�摜
	int mileage;          //���s����
	int enemy_image[3];   //�G�摜
	int enemy_count[3];   //�ʂ�߂����G�J�E���g
	Player* player;       //�v���C���[
	Enemy** enemy;        //�G
};

