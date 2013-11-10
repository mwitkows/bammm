/*
 * Blackboard.h
 *
 *  Created on: Nov 9, 2013
 *      Author: bradley
 */

#ifndef BLACKBOARD_H_
#define BLACKBOARD_H_

#include "BlackboardRecord.h"

namespace bammm
{
	class Blackboard
	{
		private:
			DynamicArray<BlackboardRecord> _ListOfRecords;

		public:
			bool addRecord(EnumRecordType type, string subjectID);
			bool addRecord(EnumRecordType type, string subjectID, string targetID, float data);
			bool removeRecord(EnumRecordType);
			bool removeRecord(string subjectID);
			bool removeAll(EnumRecordType);
			int countRecords(EnumRecordType type);
			int countRecords(EnumRecordType type, string target);
			float getData(EnumRecordType type);
			float getData(EnumRecordType type, string target);
			//Functions to replace records?
	};
}


#endif /* BLACKBOARD_H_ */