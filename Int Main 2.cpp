#include "PriorityQueue.h"
#include <iostream>

using namespace std; 

int main()
{
	int answer; 
	cout << "How would you like to sort the queue? " << endl; 
	cout << "1. low to high " << endl; 
	cout << "2. high to low " << endl; 
	cin >> answer; 
	cout << " " << endl; 

	if (answer == 1)
	{ 
		PriorityQueue queue(true);

		queue.Push(1.8); 
		queue.Push(3.2);  
		queue.Push(8.1);
		queue.Push(10.0);
		queue.Push(4.8); 
		queue.Push(1.7); 

		queue += 5; 
		queue += 1;

		queue -= 1; 

		int current_size = queue.Size(); 
										
		for (int i = 0; i < current_size; ++i) 
		{
			std::cout << queue.Top() << std::endl; 
			queue.Pop();							  
		}
	}

	else
	{
		PriorityQueue queue(false); 

		queue.Push(3.0); 
		queue.Push(4.0); 
		queue.Push(11.3);
		queue.Push(6);
		queue.Push(7.1); 
		queue.Push(1); 

		queue += 3; 
		queue += 2;

		queue -= 2; 

		int current_size = queue.Size();
										
		for (int i = 0; i < current_size; ++i) 
		{
			cout << queue.Top() << endl; 
			queue.Pop();							  
		}
	}


	system("pause");
	return 0;
}