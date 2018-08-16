#include "stdafx.h"
#include "Star.h"


Star::Star()
{
	m_skinModelRender = NewGO<prefab::CSkinModelRender>(0);
	m_skinModelRender->Init(L"modelData/star/star.cmo");
}


Star::~Star()
{
}
void Star::Update()
{
	//Starに座標を伝える。
	m_skinModelRender->SetPosition(m_position);
}