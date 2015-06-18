#pragma once
#include <iostream>
#include <string>
#include "DrawingObject.hpp"
#include "Ponit.hpp"
#include "Circle.hpp"
#include "Polygonline.hpp"
#include "Rectangle.hpp"
using namespace std;


int main() {
	DrawingObject * objects[20];
	int anzahl = 0;
	cout << "Wieviele Objekte wollen Sie einlesen?" << endl; cout << "Anzahl: ";
	cin >> anzahl;
	string *strArray = new string[anzahl];

	// Anleitung ausgeben
	cout << "Bitte geben Sie Ihre Objekte ein:" << endl;
	cout << "Bitte beachten Sie folgende Schreibweisen: " << endl;
	cout << "Punkt        (x.y,x.y)" << endl;
	cout << "Kreis       <(x.y,x.y),x.y>" << endl;
	cout << "Linie       |(x.y,x.y),(x.y,x.y) , ...." << endl;
	cout << "Rechteck    [(x.y,x.y),(x.y,x.y)]" << endl;

	// Objekte einlesen
	for (int i = 0; i<anzahl; i++){
	// einzelnes Objekt einlesen
		cout << "Bitte geben Sie Ihr " << i + 1 << ". Objekt ein: ";
		fflush(stdin);
		getline(cin, strArray[i]);
	}

	// Objekte Identifizieren und anlegen

	for (int i = 0; i < anzahl; i++){
		string temp = strArray[i].substr(0, 1);
		
		if (temp == "("){
			objects[i] = new Point(strArray[i]);
		}
		else
			if (temp == "<"){
				objects[i] = new Circle(strArray[i]);
			}
			else
				if (temp == "|"){
					objects[i] = new Polygonline(strArray[i]);
				}
				else
					if (temp == "["){
						objects[i] = new Rectangle(strArray[i]);
					}

	}

	// Objekte ausgeben
	for (int i = 0; i<anzahl; i++) {
		objects[i]->print(true);
	}
	fflush(stdin);
	cin.get();
	return 0;
}