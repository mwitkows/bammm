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
 * Inventory header file.
 *
 */

#ifndef INVENTORY_H_
#define INVENTORY_H_

#include "../Resources/Constant.h"
class DynamicArray;
class Item;
using namespace std;

namespace bammm
{
	class Inventory
	{
		private:
			DynamicArray<Item*> _inventory;
			uint _slots;
			uint _usedSlots;

		public:
			Inventory();
			Inventory(uint slots);
			bool addItem(Item* item);
			uint addItem(Item* item, uint amount);
			bool removeItem(Item* item);
			uint removeItem(Item* item, uint amount);
			bool contains(Item* item);
			bool contains(Item* item, uint amount);
			void setSlots(uint slots);
			uint getSlots();
			uint getUsedSlots();
	};
}

#endif
