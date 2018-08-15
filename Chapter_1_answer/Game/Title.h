#pragma once
class Title : public IGameObject
{
public:
	Title();
	~Title();
	bool Start() override;
	prefab::CSpriteRender* m_spriteRender = nullptr;
};

