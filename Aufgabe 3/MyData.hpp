#pragma once

class MyData
{
public:
	virtual ~MyData(){}
	
	virtual MyData * clone() const = 0;
	virtual void print(bool = true) const = 0;
	
	// virtualer Zuweisungsoperator
	virtual MyData & operator=(const MyData &)
	{
		return *this;
	}
	
private:

};
