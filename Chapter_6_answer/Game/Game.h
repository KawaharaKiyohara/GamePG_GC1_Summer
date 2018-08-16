#pragma once
class GameCamera;
class Player;
class Background;

class Game : public IGameObject
{
public:
	Game();
	~Game();
	
	void Update() override;

	GameCamera* m_gameCamera = nullptr;
	Player* m_player = nullptr;
	Background* m_background = nullptr;
};

