#include "stdafx.h"
#include "GameCamera.h"


GameCamera::GameCamera()
{
}


GameCamera::~GameCamera()
{
}

bool GameCamera::Start()
{
	MainCamera().SetPosition({ 0.0f, 70.0f, 200.0f});
	MainCamera().SetTarget({ 0.0f, 70.0f, 0.0f });
	MainCamera().Update();
	return true;
}