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
		//セレクトボタンが押された。
		NewGO<Title>(0);
		DeleteGO(this);
	}
}
