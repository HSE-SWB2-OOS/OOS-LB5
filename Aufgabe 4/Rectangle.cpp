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

Rectangle::Rectangle(Point &pkt1 = Point(0,0), Point &pkt2 = Point(1,1)){
	this->pktA = pkt1;
	this->pktB = pkt2;
}

Rectangle::Rectangle(string &str){

}

void Rectangle::print(bool)const {
	
	cout << "[";
	pktA.print(false);
	cout << " , ";
	pktB.print(false);
	cout << "]" << endl;

}