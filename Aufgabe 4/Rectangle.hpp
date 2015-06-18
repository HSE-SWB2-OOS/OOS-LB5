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
#include "OneDimObject.hpp"
#include "Ponit.hpp"

class Rectangle : public DrawingObject {

private:
	// Eigenschaften / Variablen
	Point pktA, pktB;

public:
	// Konstruktoren
	Rectangle(Point &, Point &);
	Rectangle(string &);

	// Instanzmethoden
	void print(bool) const;

};