/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: droc6148
 */

#include "CTECList.h"

template<class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;

}

template<class Type>
CTECList<Type>::~CTECList()
{
	// TODO Auto-generated destructor stub
}

template<class Type>
Type CTECList<Type> :: removeFromFront()
{
	assert(this->size > 0);

	Type thingToRemove;
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	thingToRemove = this->head->getValue();
	this->head = newHead;

	size--;

	return thingToRemove;
}

template<class Type>
Type CTECList<Type> :: removeFromEnd()
{

}

template<class Type>
Type CTECList<Type> :: removeFromIndex(int index)
{
	assert(this->size > 0);
	assert(index >= 0 && index < size);

	Type thingToRemove;

	if(index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if(index == size-1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		for(int spot =0; spot < index+1; spot++)
		{

		}
	}

}

template<class Type>
	void CTECList<Type> :: calculateSize()
	{
		assert(size >= 0);

		int count = 0;
		if(head == nullptr)
		{
			size = count;
		}
		else
		{
			count++;
			ArrayNode<Type> * current = head;
			while(current->getNext() !=nullptr)
			{
				count++;
				current = current->getNext();
			}
			size = count;
		}

	}
