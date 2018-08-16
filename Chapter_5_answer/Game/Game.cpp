#include "stdafx.h"
#include "Game.h"
#include "Title.h"
#include "GameCamera.h"
#include "Player.h"
#include "Background.h"

Game::Game()
{
	//コンストラクタはインスタンスが生成されたときに
	//自動的に呼ばれる特殊な関数。
	m_gameCamera = NewGO<GameCamera>(0);	//後で破棄するので、GameCameraのインスタンスをメンバ変数に記憶しておく。
	m_player = NewGO<Player>(0);			//後で破棄するので、Playerのインスタンスをメンバ変数に記憶しておく。
	m_background = NewGO<Background>(0);
}

Game::~Game()
{
	//コンストラクタはインスタンスが破棄されたときに
	//自動的に呼ばれる特殊な関数。
	DeleteGO(m_gameCamera);
	DeleteGO(m_player);
	DeleteGO(m_background);
}
void Game::Update()
{
	if (Pad(0).IsPress(enButtonSelect) == true) {
		//セレクトボタンが押された。
		//Titleクラスのインスタンスを生成。
		//これでTitleクラスのコンストラクタが呼ばれる。
		NewGO<Title>(0);
		//Gameクラスのインスタンスを破棄。
		//これでGameクラスのデストラクタが呼ばれる。
		DeleteGO(this);
	}
}
