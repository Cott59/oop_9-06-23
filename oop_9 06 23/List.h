#pragma once
#include"Node.h"


class List
{

private:
	Node* _head;
	Node* _tail;
	int _size;

	bool AddMain(Node* node);

public:
	List();

	void AddTail(int data);

	void AddHead(int data);

	void ShowListFromHead();
	void ShowListFromTeil();

	void DeleteAll();

	void DeleteElement(int index);

	Node* FindElement(int index);


};