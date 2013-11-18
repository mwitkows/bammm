/*
 * CS585
 *
 * Team Bammm
 * 	Alvaro Home
 * 	Matt Konstantinou
 * 	Michael Abramo
 *	Matt Witkowski
 *  Bradley Crusco
 * Description:
 * RangedWeapon header file.
 *
 */

#ifndef RANGEDWEAPON_H_
#define RANGEDWEAPON_H_

#include "IWeaponType.h"

namespace bammm
{
	class Actor;

	class RangedWeapon
	{
		private:
			WeaponData* _weaponData;

		public:
			RangedWeapon();
			virtual ~RangedWeapon();

			/**
			 attack
			 @Pre-Condition- No input
			 @Post-Condition- Attack is executed
			 */
			virtual int attack();

			/**
			 canAttack
			 @Pre-Condition- No input
			 @Post-Condition- Returns true if weapon can attack
			 */
			virtual bool canAttack();

			/**
			 getRange
			 @Pre-Condition- No input
			 @Post-Condition- Returns the distance between the weapon user and their target
			 */
			virtual int getRange();
	};
}

#endif
