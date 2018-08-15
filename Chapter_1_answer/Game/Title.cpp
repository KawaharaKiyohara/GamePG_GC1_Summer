#include "stdafx.h"
#include "Title.h"


Title::Title()
{
}


Title::~Title()
{
}
bool Title::Start()
{
	m_spriteRender = NewGO<prefab::CSpriteRender>(0);
	m_spriteRender->Init(L"sprite/title.dds", 1280.0f, 720.0f);
	return true;
}