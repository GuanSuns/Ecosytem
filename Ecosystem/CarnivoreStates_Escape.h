#ifndef CARNIVORE_STATES_ESCAPE_H
#define CARNIVORE_STATES_ESCAPE_H

#include "BasicState.h"
#include "InfoDispatchMachine.h"
#include "Vector2D.h"
#include "Random.h"

#include <cmath> 
#include <iostream>

class Carnivore;

class CarnivoreStates_Escape : public BasicState
{
public:
	CarnivoreStates_Escape();
	~CarnivoreStates_Escape();

public:
	static CarnivoreStates_Escape* Instance();

	virtual void Enter(Creature*);
	virtual void Execute(Creature*);
	virtual void Resume(Creature*);
	virtual void Exit(Creature*);

private:
	inline int getDistance(Location&, Location&);
	inline int getMin(int, int);

};

#endif

