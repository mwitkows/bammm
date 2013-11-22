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
 * JSON cpp file.
 *
 */

#include <sstream>
#include <iostream>
#include "JSON.h"

using namespace std;

namespace bammm
{
	JSON::JSON()
	{
		_name = "empty";
		_type = JSON_OBJECT;
		_parent = NULL;
	}

	JSON::JSON(string newName){
		_name = newName;
		_type = JSON_OBJECT;
		_parent = NULL;
	}

	JSON::~JSON()
	{
		cout << "Deleting JSON \n";
	}

	string JSON::getName()
	{
		return _name;
	}

	JSON_TYPE JSON::getType()
	{
		return _type;
	}

	JSON JSON::getParent()
	{
		if (_parent == NULL)
		{
			cout << "Parent is null\n";
		}
		return *_parent;
	}

	void JSON::setName(string newName)
	{
		_name = newName;
	}

	void JSON::setType(JSON_TYPE newType)
	{
		_type = newType;
	}

	void JSON::setParent(JSON & newParent)
	{
		/*if(newParent == NULL){
			cout << "Error: Attempting to add NULL as a parent \n";
			return;
		}*/
		*_parent = newParent;
	}

	void JSON::addChild(JSON & newNode)
	{
/*		if(newNode == NULL){
			cout << "Error: Attempting to add NULL as a child \n";
			cout.flush();
			return;
		}*/
		cout << "Adding Child \n";
		_children.add(newNode.getName(), newNode);
	}

/*
 JSON JSON::getChild(string name)
 {
 if (this->_value != "empty")
 {
 cout << "Error retrieving child: " << this->getName()
 << " has no children. \n";
 return *this;
 }
 else
 {
 return this->_children.getValue(name);
 }
 }

 HashMap<JSON>* JSON::getChildren()
 {
 return &_children;
 }

 string JSON::getName()
 {
 return _name;
 }

 string JSON::getValue()
 {
 return _value;
 }

 JSON_TYPE JSON::getType()
 {
 return _type;
 }

 bool JSON::setParent(JSON newParent)
 {
 *_parent = newParent;
 return true;
 }

 bool JSON::setValue(string newValue)
 {
 this->_value = newValue;
 return true;
 }

 bool JSON::setValue(bool newValue)
 {
 if (this->_type != JSON_BOOL)
 {
 return false;
 }
 else
 {
 if (newValue == false)
 {
 this->_value = "false";
 }
 else
 {
 this->_value = "true";
 }
 return true;
 }
 }

 bool JSON::setValue(int newValue)
 {
 if (this->_type != JSON_INT)
 {
 return false;
 }
 else
 {
 The to_string() function is not recognized for me. Something wrong with compiler.
 stringstream stringStreamValue;
 stringStreamValue >> newValue;
 this->_value = stringStreamValue.str();
 return true;

 }
 }

 bool JSON::setValue(double newValue)
 {
 if (this->_type != JSON_DOUBLE)
 {
 return false;
 }
 else
 {
 The to_string() function is not recognized for me. Something wrong with compiler.
 stringstream stringStreamValue;
 stringStreamValue >> newValue;
 this->_value = stringStreamValue.str();
 return true;
 }
 }

 bool JSON::setName(string newName)
 {
 this->_name = newName;
 return true;
 }

 bool JSON::setType(JSON_TYPE newType)
 {
 this->_type = newType;
 return true;
 }

 void JSON::addChild(JSON & newNode)
 {
 cout << "addChild" << endl;
 this->_children.add(newNode._name, newNode);
 newNode.setParent(*this);
 cout << "addChild" << endl;
 }

 JSON& JSON::operator=(const JSON & rightHandSide)
 {
 this->_name = rightHandSide._name;
 this->_value = rightHandSide._value;
 this->_type = rightHandSide._type;
 this->_parent = rightHandSide._parent;
 this->_children = rightHandSide._children;

 return *this;
 }
 *
 string JSON::operator[](const string & index)
 {

 if (this->_value == "empty")
 {
 JSON temporary = this->getChild(index);
 return temporary[index];
 }
 else
 {
 return this->_value;
 }
 }*/
}

