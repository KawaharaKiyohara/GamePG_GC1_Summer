#pragma once
class Player : public IGameObject
{
public:
	Player();
	~Player();
	prefab::CSkinModelRender* m_skinModelRender = nullptr;
};

