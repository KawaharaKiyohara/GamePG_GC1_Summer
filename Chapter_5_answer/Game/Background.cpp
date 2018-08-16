#include "stdafx.h"
#include "Background.h"


Background::Background()
{
	m_skinModelRender = NewGO<prefab::CSkinModelRender>(0);
	m_skinModelRender->Init(L"modelData/background/stage_00.cmo");
}


Background::~Background()
{
	DeleteGO(m_skinModelRender);
}
