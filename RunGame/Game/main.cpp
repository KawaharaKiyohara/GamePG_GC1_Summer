/*!
 *@brief	main.cpp
 */
#include "stdafx.h"
#include "settings.h"

//
//WinMain関数
//Windowsプログラムのメイン関数。
//
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
	//tkEngine2の初期化パラメータを設定する。
	SInitParam initParam;
	SetupTkEngineInitParam(initParam, hInstance, nCmdShow);

	//エンジンを初期化。
	if (Engine().Init(initParam) == true) {
		//ゲームループを実行。
		Engine().RunGameLoop();
	}
	//エンジンの終了処理。
	Engine().Final();

	return 0;
}

