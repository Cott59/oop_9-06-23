#pragma once

class Node
{
private:
	int _data;

public:
	Node(int data);
	~Node();
	Node* next;
	Node* prev;

	int GetData();


};