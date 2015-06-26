#include "MyData.hpp"
#include <iostream>

using namespace std;
#pragma once

class MyList
{
public:
	MyList();
	MyList(MyList & list);
	~MyList();

	class MyListElement;

	int listSize;
	MyListElement *first;
	MyListElement *last;

	void push_back(const MyData & content);
	void pop_back();
	MyData & front();
	MyData & back();
	void clear();
	bool empty();
	int size();
	void print();

	MyList & operator= (const MyList &list);
	MyList operator+ (const MyList &list);

	class MyListElement
	{
	public:
		MyListElement();
		~MyListElement();

		MyData *data;
		MyListElement *next;
		//void print(bool newLine) const;

	private:

	};

private:

};