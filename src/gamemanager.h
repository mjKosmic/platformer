#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include"input.h"
#include"player.h"
#include"physics.h"
#include"world.h"

class GameManager
{
	float gravity;

	public:
	
	Player *player;
	World *world;
	
	//ctor
	GameManager();
	//dtor
	~GameManager();
	
	void initGame();
	void updateGame();
	void renderGame(SDL_Renderer *renderer);
	void destroyGame();
	
	


};


#endif