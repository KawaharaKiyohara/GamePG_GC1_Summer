/*!
 *@brief	main.cpp
 */
#include "stdafx.h"
#include "settings.h"

//
//WinMain�֐�
//Windows�v���O�����̃��C���֐��B
//
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
	//tkEngine2�̏������p�����[�^��ݒ肷��B
	SInitParam initParam;
	SetupTkEngineInitParam(initParam, hInstance, nCmdShow);

	//�G���W�����������B
	if (Engine().Init(initParam) == true) {
		//�Q�[�����[�v�����s�B
		Engine().RunGameLoop();
	}
	//�G���W���̏I�������B
	Engine().Final();

	return 0;
}

