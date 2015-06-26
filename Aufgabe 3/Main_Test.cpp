#include <iostream>
#include "MyList.hpp"
#include "Circle.hpp"

using namespace std;
int mainA() {
	Point p1(1, 1);
	Point p2(2, 2);
	Point p3(3, 3);
	Point p4(4, 4);
	cout << "Liste v1 erstellen ..." << endl;
	MyList v1;
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);

	v1.print();

	MyList v2;
	Point p5(5, 5);
	Circle c1(p5, 6);

	v2.print();

	//v1 = v1 + v2;
	v1 = v2;
	v1.print();

	if (!v1.empty()) {
		cout << "clear list" << endl;
		v1.clear();
	}

	v1.print();
	cout << "size:" << v1.size() << endl;

	getchar();

	return 0;
}