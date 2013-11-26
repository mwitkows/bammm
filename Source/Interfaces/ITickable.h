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
 * ITickable header file.
 *
 */

#ifndef ITICKABLE_H_
#define ITICKABLE_H_

namespace bammm
{
	class ITickable
	{
		public:
			virtual ~ITickable();
			virtual void tick(float deltaTime)=0;
			virtual bool canDelete();
	};

	ITickable::~ITickable()
	{
	}

	bool ITickable::canDelete()
	{
	    return false;
	}
}

#endif