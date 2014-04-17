// CppTester.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>

#include "../TestLib/LibInterface.h"

using std::cout;
using std::endl;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Starting ..." << endl;

	CPPLibInterface::SimpleExportExample see;
	cout << "SimpleExportExample has value: " << see.getValue() << endl;

	cout << "Exiting ..." << endl;

	return 0;
}

