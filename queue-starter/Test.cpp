#include "Test.h"
#include <iostream>


using namespace std;

Test::Test()
{
}

Test::~Test()
{
}

void Test::run()
{
	createEmpty();
	enqueueNotEmpty();
	enqueuePeak();
	enqueueDequeueEmpty();
	emptyQueueOnHeap();
	enqueueTwicePeek();
	enqueueTwiceDequeuePeek();
	enqueueTwicePeekOp();
	enqueueNegativeInt();
	enqueueTwiceDequeueTwiceEmpty();
	dequeueEmpty();
	enqueueOnHeap();
}


void Test::createEmpty()
{
	Queue q;
	std::cout<<"\nTest 1: Newly created queue is empty: ";
	if(q.isEmpty())
		std::cout<<"PASS";
	else
		std::cout<<"FAIL";
}


void Test::enqueueNotEmpty()
{
	Queue q;
	q.enqueue(1);
	std::cout<<"\nTest 2: Enqueue a value makes the queue not empty: ";
	if(q.isEmpty())
		std::cout<<"FAIL";
	else
		std::cout<<"PASS";
}

void Test::enqueuePeak()
{
	Queue q;
	q.enqueue(17);
	std::cout<<"\nTest 3: Enqueue 12 on empty queue then peekFront returns 12: ";
	if(q.peekFront() == 12)
		std::cout<<"PASS";
	else
		std::cout<<"FAIL";
}


void Test::enqueueDequeueEmpty()
{
	Queue q;
	q.enqueue(1);
	q.dequeue();
	std::cout<<"\nTest 4: Enqueue then dequeue result in empty queue: ";
	if(q.isEmpty())
		std::cout<<"PASS";
	else
		std::cout<<"FAIL";
}

void Test::emptyQueueOnHeap()
{
	Queue* q = new Queue;
	std::cout<<"\nTest 5: Create queue on heap is empty: ";
	if(q->isEmpty())
		std::cout<<"PASS";
	else
		std::cout<<"FAIL";
}

void Test::enqueueTwicePeek()
{
	Queue q;
	q.enqueue(7);
	q.enqueue(12);
	std::cout<<"\nTest 6: Enqueue 7 then 12 and peekFront returns 7: ";
	if(q.peekFront() == 7)
		std::cout<<"PASS";
	else
		std::cout<<"FAIL";
}

void Test::enqueueTwiceDequeuePeek()
{
	Queue q;
	q.enqueue(7);
	q.enqueue(12);
	q.dequeue();
	std::cout<<"\nTest 7: Enqueue 7 then 12 and dequeue and peekFront returns 12: ";
	if(q.peekFront() == 12)
		std::cout<<"PASS";
	else
		std::cout<<"FAIL";
}

void Test::enqueueTwicePeekOp()
{
	Queue q;
	q.enqueue(7);
	q.enqueue(12);
	std::cout<<"\nTest 8: Enqueue 7 then 12 and peekFront does not return 12: ";
	if(q.peekFront() == 12)
		std::cout<<"FAIL";
	else
		std::cout<<"PASS";
}


void Test::enqueueNegativeInt()
{
	Queue q;
	q.enqueue(-7);
	std::cout<<"\nTest 9: Enqueue negative number is possible: ";
	if(q.peekFront() == -7)
		std::cout<<"PASS";
	else
		std::cout<<"FAIL";
}

void Test::enqueueTwiceDequeueTwiceEmpty()
{
	Queue q;
	q.enqueue(5);
	q.enqueue(-16);
	q.dequeue();
	q.dequeue();
	std::cout<<"\nTest 10: Enqueue twice then dequeue twice is empty: ";
	if(q.isEmpty())
		std::cout<<"PASS";
	else
		std::cout<<"FAIL";
}


void Test::dequeueEmpty()
{
	Queue q;
	std::cout<<"\nTest 11: Dequeue empty queue throws exception: ";
	try 
	{
		q.dequeue();
		std::cout<<"FAIL";
	}
	catch (...)
	{
		std::cout<<"PASS";
	}
	
}

void Test::enqueueOnHeap()
{
	Queue* q = new Queue;
	q->enqueue(12);
	std::cout<<"\nTest 12: Enqueue on heap is not empty: ";
	if(q->isEmpty())
		std::cout<<"FAIL";
	else
		std::cout<<"PASS";
}





