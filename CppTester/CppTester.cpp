// CppTester.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>

#include "../TestLib/LibInterface.h"

using std::cout;
using std::endl;

class Foo
{
public:
	Foo() : m_value(0) {}

	Foo(const int value) : m_value(value) {}

	int getValue() { return m_value; }

private:
	int m_value;
};

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Starting ..." << endl;

	CPPLibInterface::SimpleExportExample see;
	cout << "SimpleExportExample has value: " << see.getValue() << endl;

	Foo foo(111);
	cout << "foo has value: " << foo.getValue() << endl;

	cout << "Exiting ..." << endl;

	return 0;
}

