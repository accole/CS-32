//main.cpp
//---------
//Adam Cole
//004912373
//Discusssion 1E
//---------

#include "City.h"
#include "Flatulan.h"
#include "Game.h"
#include "Player.h"
#include "History.h"
#include "globals.h"

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
using namespace std;

int main()
{
	// Create a game
	// Use this instead to create a mini-game:   Game g(3, 4, 2);
	Game g(7, 8, 25);

	// Play the game
	g.play();
}