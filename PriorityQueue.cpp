#include "PriorityQueue.h"

PriorityQueue::PriorityQueue(bool choice)
	:Choice(choice)
{
	//empty 
}

PriorityQueue::~PriorityQueue()
{
	//empty 
}

bool PriorityQueue::empty()
{
	return SizeofVector == 0;
}

int PriorityQueue::Size()
{
	return SizeofVector;
}

void PriorityQueue::Push(double ValueofElement)
{
	if (SizeofVector == 0) 
	{
		queue.push_back(ValueofElement);
		++SizeofVector;
	}

	else if (Choice == true) 
	{
		if (ValueofElement > queue.at(SizeofVector - 1)) 
		{									  
			queue.push_back(ValueofElement);
			++SizeofVector;
		}

		else
		{
			for (int i = 0; i < SizeofVector; ++i) 
			{
				if (ValueofElement < queue.at(i))
				{						 
					queue.insert(queue.begin() + i, ValueofElement);
					++SizeofVector;
					break;
				}
			}
		}
	}

	else if (Choice == false) 
	{
		if (ValueofElement < queue.at(SizeofVector - 1))
		{
			queue.push_back(ValueofElement);
			++SizeofVector;
		}
		else
		{
			for (int i = 0; i < SizeofVector; ++i)
			{
				if (ValueofElement > queue.at(i))
				{
					queue.insert(queue.begin() + i, ValueofElement);
					++SizeofVector;
					break;
				}
			}
		}
	}
}

double PriorityQueue::Top()
{
	return queue.at(0); 
}

void PriorityQueue::Pop()
{
	queue.erase(queue.begin()); 
	--SizeofVector;
}

void operator -=(PriorityQueue &queue, int value) 
{
	for (int i = 0; i < value; ++i)
	{
		queue.Pop();
	}
}

void operator +=(PriorityQueue &queue, double value) 
{
	queue.Push(value);
}
