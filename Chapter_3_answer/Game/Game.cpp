#include "stdafx.h"
#include "Game.h"
#include "Title.h"

Game::Game()
{
}

Game::~Game()
{
}
void Game::Update()
{
	if (Pad(0).IsPress(enButtonSelect) == true) {
		//�Z���N�g�{�^���������ꂽ�B
		NewGO<Title>(0);
		DeleteGO(this);
	}
}
