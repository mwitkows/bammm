/*
 * CS585
 *
 * Team Bammm
 * 	Alvaro Home
 * 	Matt Konstantinou
 * 	Michael Abramo
 *
 * Description:
 * Actor header file.
 *
 * Last Modified: Michael Abramo
 *
 */

#include "../resources/vector3d.h"
#include "actor.h"
#include "../weapons/OrcishBlade.h"
#include <cmath>

namespace bammm
{

	class OrcActor: public Actor
	{

		private:

			int goldCount;

		public:

			OrcActor()
			{
				_name = "Orc";
				goldCount = rand() % 6;
				setMeleeWeapon(new OrcishBlade());
			}

			OrcActor(int gold)
			{
				_name = "Orc";
				goldCount = gold;
				setMeleeWeapon(new OrcishBlade());
			}

			inline int getGold()
			{
				return goldCount;
			}

	};

}
