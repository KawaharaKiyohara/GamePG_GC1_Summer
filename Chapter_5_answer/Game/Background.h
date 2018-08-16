#pragma once
class Background : public IGameObject
{
public:
	Background();
	~Background();
	
	prefab::CSkinModelRender* m_skinModelRender = nullptr;
};

