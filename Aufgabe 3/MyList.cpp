#include "MyList.hpp"

// Standart Konstruktor
MyList::MyList()
{
	this->first = new MyListElement();
	this->first = nullptr;
	this->last = first;

	this->listSize = 0;

}

MyList::MyList(MyList & list)
{
	this->listSize = 0;
	MyListElement *temp = new MyListElement;
	temp = list.first;
	
	for (int i = 0; i < list.listSize; i++)
	{
		push_back(*(temp->data));
		temp = temp->next;
	}
}

// Standart Destruktor
MyList::~MyList()
{
	clear();
	
}

// Methode im ein Element der Liste hinzufügen zu können.
void MyList::push_back(const MyData & content)
{
	MyListElement *temp = new MyListElement;
	
	temp->data = content.clone();
	temp->next = nullptr;

	if (this->listSize == 0)
	{
		this->first = temp;
		this->last = temp;
	}
	else
	{
		this->last->next = temp;
		this->last = this->last->next;
	}

	this->listSize++;
}

// Methode um das Elementen am Ende der Liste zu löschen.
void MyList::pop_back()
{
	MyListElement *temp = new MyListElement;
	temp = first;

	for (int i = 0; i < this->listSize - 1; i++)
	{
		temp = temp->next;
	}

	temp->next = nullptr;
	this->last = temp;
	this->listSize--;
}

// Methode um das erste Element der Liste auszugeben.
MyData & MyList::front()
{
	return *this->first->data;
}

// Methode um das lestzt Element der Liste auszugeben.
MyData & MyList::back()
{
	return *this->last->data;
}

// Methode um alle Element aus der Liste zu löschen.
void MyList::clear()
{
	MyListElement *temp = new MyListElement;
	

	while (this->first != nullptr)
	{
		temp = this->first;
		this->first = temp->next;
		delete temp->data;
		delete temp;
		
		this->listSize--;
	}

}

// Methode um abzufragen ob die Liste leer ist oder nicht.
bool MyList::empty()
{
	if (this->first == nullptr)
		return true;
	else
		return false;
}
	
// Methode um abzufragen wieviel Elemente sich in der Liste befinden.
int MyList::size()
{
	return this->listSize;
}

// Methode um den Inhalt der Liste auszugben.
void MyList::print()
{
	MyListElement *temp = new MyListElement;
	temp = first;

	for (int i = 0; i < this->listSize; i++)
	{
		temp->data->print();
		temp = temp->next;
	}
}

MyList & MyList::operator= (const MyList &list)
{
	clear();

	MyListElement *temp = new MyListElement;
	temp = list.first;
	
	for (int i = 0; i < list.listSize; i++)
	{
		push_back(*(temp->data));
		temp = temp->next;
	}
	
	return *this;
}

MyList MyList::operator+ (const MyList &list)
{
	MyList *myl = new MyList();
	
	*myl = *this;

	MyListElement *temp = new MyListElement;
	temp = list.first;

	for (int i = 0; i < list.listSize; i++)
	{
	 	myl->push_back(*(temp->data));
		temp = temp->next;
	}

	return *myl;
}

// Ab hier Klasse MyListElement
MyList::MyListElement::MyListElement()
{
}

MyList::MyListElement::~MyListElement()
{
}