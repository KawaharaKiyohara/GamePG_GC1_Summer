#include "stdafx.h"
#include "Player.h"


Player::Player()
{
	m_skinModelRender = NewGO<prefab::CSkinModelRender>(0);
	m_skinModelRender->Init(L"modelData/unityChan.cmo");
}
Player::~Player()
{
	DeleteGO(m_skinModelRender);
}
void Player::Update()
{
	m_moveSpeed.x = Pad(0).GetLStickXF() * 6.0f;
	m_moveSpeed.z = Pad(0).GetLStickYF() * 6.0f;
	m_position += m_moveSpeed;
	m_skinModelRender->SetPosition(m_position);
}
