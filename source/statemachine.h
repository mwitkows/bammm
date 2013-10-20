/*
 * CS585
 *
 * Team Bammm
 * 	Alvaro Home
 * 	Matt Konstantinou
 * 	Michael Abramo
 * 	Bradley Crusco
 * 	Matt Witkowski
 *
 * Description:
 * StateMachine header file.
 *
 * Last Modified: Matthew Konstantinou
 *
 */

#ifndef STATEMACHINE_H_
#define STATEMACHINE_H_
#endif

#include <iostream>
#include "DynamicArray/dynamicarray.h"
#include "state.h"


#ifndef NULL
#define NULL (void *)0
#endif

using namespace std;
using namespace bammm;


class StateMachine
{
public:
	StateMachine();

	/*
	 * tick
	 * Pre-Condition-
	 * Post-Condition-
	 *
	 * Calls currentStates[i].setup() on every state in the array
	 * setup() updates states
	 */
	void tick(float dTime)
	{
		for(int i = 0; i < currentStates->getSize(); i++)
		{
			State thisState = currentStates->get(i);

			thisState.tick(time(NULL));
		}
	}

	/*
	 * switchState
	 *
	 * Pre-Condition-
	 * Post-Condition-
	 *
	 *PlayerController will be calling switchState
	 */
	void switchState(State * currentState, State * newState)
	{
		currentState->breakdown();
		currentState = newState;
		currentState->setup();
	}

	/*
	 * addState
	 * Pre-Condition-
	 * Post-Condition-
	 *
	 * Called from a Controller
	 * Adds currently running states to array
	 */
	void addState(State newState)
	{
		currentStates->add(newState);
	}

    /**
     * getCurrentStates
     * Pre-Condition-
     * Post-Condition-
     *
     * Called from Controller
     * Returns currently running states
     */
    DynamicArray<State> getCurrentStates()
    {
        return *currentStates;
    }

private:
	DynamicArray<State> * currentStates;

};
