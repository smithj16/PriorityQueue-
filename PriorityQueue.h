#pragma once

#include <vector>
#include <iostream>
using namespace std; 

class PriorityQueue
{
public:
	PriorityQueue(bool choice);
	virtual ~PriorityQueue(); 

	int Size();
	void Push(double ValueofElement);
	double Top();
	bool empty(); 
	void Pop(); 

	friend void operator +=(PriorityQueue &queue, double ValueofElement);
	friend void operator -=(PriorityQueue &queue, int ValueofElement);

protected:
	bool Choice; 
	int SizeofVector; 
	vector<double> queue;

	
};