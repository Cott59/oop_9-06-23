#include<iostream>
#include<vector>
#include<string>

#include"List.h"




int main() {

	List list;
	list.AddHead(10);
	list.AddTail(20);
	list.AddHead(15);
	list.AddHead(55);
	list.ShowListFromHead();
	std::cout << "\n\n";
	//list.ShowListFromTeil();
	//std::cout << "\n\n";
	//std::cout << list.FindElement(2) << '/n';
	list.DeleteElement(2);
	list.ShowListFromHead();
	





	return 0;
}