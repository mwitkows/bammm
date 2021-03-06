/*
 * CS585
 *
 * Team Bammm
 * 	Alvaro Home
 * 	Matt Konstantinou
 * 	Michael Abramo
 *	Matt Witkowski
 *	Bradley Crusco
 * Description:
 * GatherState header file.
 *
 */

#ifndef GATHERSTATE_H_
#define GATHERSTATE_H_

#include <iostream>
#include "State.h"

namespace bammm
{
	class GatherState: public State
	{
		private:
			int _successChance;
			int _amount;
			Actor* _target;

			/**
			 canMine
			 @Pre-Condition- No input
			 @Post-Condition- Returns true if the node contains ore.
			 */
			bool canGather();

		public:
			virtual ~GatherState();
			GatherState(Actor& actor);
			GatherState(Actor& actor, IStateCallback* stateMachine);

			/**
			 setup
			 @Pre-Condition- No input
			 @Post-Condition- Sets up the state
			 */
			void setup();

			/**
			 setAmount
			 @Pre-Condition- takes int
			 @Post-Condition- sets _amount
			 */
			void setAmount(int amount);

			/**
			 setTarget
			 @Pre-Condition- takes Actor
			 @Post-Condition- assigns _target
			 */
			void setTarget(Actor* target);

			/**
			 breakdown
			 @Pre-Condition- No input
			 @Post-Condition- Performs a breakdown on the state
			 */
			void breakdown();

			/**
			 tick
			 @Pre-Condition- Takes in a float deltaTime
			 @Post-Condition- Executes a tick of length deltaTime
			 */
			virtual void tick(float deltaTime);

			/**
			 switchState
			 @Pre-Condition- Takes in a string nextState
			 @Post-Condition- The current state is switched to the given nextState
			 */
			void switchState(string nextState);

			/**
			 toString
			 @Pre-Condition- No input
			 @Post-Condition- Returns a string representation of the state
			 */
			string toString();
	};
}

#endif
