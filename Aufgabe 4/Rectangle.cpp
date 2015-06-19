/* Uebungen zu OOP, Aufgabe 4
Erstersteller: Jan Binder, Matthias Geckeler, Thomas Günter
E-Mail: jabi00@hs-esslingen.de, matthias.geckeler@stud.hs-esslinge.de, Thomas.Guenter@stud.hs-esslingen.de

Datum: 18.06.2015
Version: 1.0
Zeitaufwand: 0,5h

Aenderungshistorie:
-------------------
Durchgefuehrte Aenderung | Autor | Datum


-------------------------------------------------------
Programmbeschreibung:
---------------------
*/

#pragma once
#include "Rectangle.hpp"
#include <iostream>
#include <ostream>
using namespace std;

// Konstruktoren

Rectangle::Rectangle(Point &pkt1, Point &pkt2){
	this->pktA = pkt1;
	this->pktB = pkt2;
}

Rectangle::Rectangle(string &str){
	str = MyString::remove(str, ' ');

	// Eingabemuster für Rectangle: [(1.1),(2.2)/(3.3),(4.4)]
	string pktA = str.substr((str.find("[") +1) , (str.find("/")-1));
	string pktB = str.substr((str.find("/") +1) , (str.find("]")-1));

	Point tempPktA(pktA);
	Point tempPktB(pktB);

	this->pktA = tempPktA;
	this->pktB = tempPktB;
}

void Rectangle::print(bool)const {
	
	cout << "[";
	this->pktA.print(false);
	cout << " , ";
	this->pktB.print(false);
	cout << "]" << endl;

}