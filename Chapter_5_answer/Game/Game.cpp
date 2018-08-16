#include "stdafx.h"
#include "Game.h"
#include "Title.h"
#include "GameCamera.h"
#include "Player.h"
#include "Background.h"

Game::Game()
{
	//�R���X�g���N�^�̓C���X�^���X���������ꂽ�Ƃ���
	//�����I�ɌĂ΂�����Ȋ֐��B
	m_gameCamera = NewGO<GameCamera>(0);	//��Ŕj������̂ŁAGameCamera�̃C���X�^���X�������o�ϐ��ɋL�����Ă����B
	m_player = NewGO<Player>(0);			//��Ŕj������̂ŁAPlayer�̃C���X�^���X�������o�ϐ��ɋL�����Ă����B
	m_background = NewGO<Background>(0);
}

Game::~Game()
{
	//�R���X�g���N�^�̓C���X�^���X���j�����ꂽ�Ƃ���
	//�����I�ɌĂ΂�����Ȋ֐��B
	DeleteGO(m_gameCamera);
	DeleteGO(m_player);
	DeleteGO(m_background);
}
void Game::Update()
{
	if (Pad(0).IsPress(enButtonSelect) == true) {
		//�Z���N�g�{�^���������ꂽ�B
		//Title�N���X�̃C���X�^���X�𐶐��B
		//�����Title�N���X�̃R���X�g���N�^���Ă΂��B
		NewGO<Title>(0);
		//Game�N���X�̃C���X�^���X��j���B
		//�����Game�N���X�̃f�X�g���N�^���Ă΂��B
		DeleteGO(this);
	}
}
