// osclib.cpp : Defines the exported functions for the DLL application.
//

#include "Python.h"
#include "stdafx.h"
#include <utility>
#include "osclib.h"
#include <math.h>

#include <iostream>
#include <stdio.h>



using namespace std;


int kali(int a, int b)
{
	return a * b;
}

//double kali2(double x, double y)
//{
//	printf("%f", x);
//	return x;
//}

//PyObject *
//kali2(PyObject *a, PyObject *b)
float
kali2(float a, float b)
{
	//PyFloatObject hasil;
	//hasil = a * b;
	//int kembalian = *hasil;
	//return kembalian;
	//int* h;
	//float x, y;
	//x = 3.5f;
	//y = 2.1f;
	cout << "test fungsi dari c++ ss" << endl;
	//cout << x << end;

	//float y[2];
	float x;
	x = 23.2f;
	float c = x * b + a;
	printf("testlah %f", b);
	cout << endl;
	printf("testlah2 %f", x);
	cout << endl;
	printf("hasilnya %f", c);
	cout << endl;



	//return Py_BuildValue("f", x);
	return c;
}


//
//PyObject 
//kali3(float a, PyObject b)
//{
//	//PyFloatObject hasil;
//	//hasil = a * b;
//	//int kembalian = *hasil;
//	//return kembalian;
//	//int* h;
//	//float x, y;
//	//x = 3.5f;
//	//y = 2.1f;
//
//
//	printf("hasil kali3 ialah %f", a);
//	double dd;
//	dd = 5.2;
//
//
//	//return Py_BuildValue("f", a);
	//PyObject *po;
	//po = PyFloat_FromDouble(c);
//	PyObject po;
//	//po = new PyObject();
//	po = PyFloat_FromDouble(dd);
//	return po;
//	//return PyFloat_FromDouble(dd);
//	//return Py_BuildValue("d", dd);
//	//return Py_RETURN_NONE;
//}





double *
kali4(double a, double b)
{
	cout << "test fungsi dari c++ ss" << endl;

	double x;
	x = 23.2f;
	double c = x * b + a;
	printf("testlah %f", b);
	cout << endl;
	printf("testlah2 %f", x);
	cout << endl;
	printf("hasilnya %f", c);
	cout << endl;


	return &c;
	//return g;
}

double 
kali5(double a, double b)
{
	cout << "test fungsi dari c++ ss" << endl;

	double c = a * b;
	printf("a =  %f", a);
	cout << endl;
	printf("b =  %f", b);
	cout << endl;
	printf("result = %f", c);
	cout << endl;


	return c;
	//return g;
}


int loopAll(int max)
{
	int n = 0;
	for (int i = 0; i < max; i++)
	{
		n = 10 * 10 + n;
	}
	return n;
}





//#define LIBDLL extern C __declspec(dllexport)
//
//
//LIBDLL int kali(int a, int b)
//{
//	return a * b;
//}


//int kali(int a, int b)
//{
//	return a * b;
//}



// ----------------------------- My Lib Data -----------------------------
double getMaxSpeed(double force, double airDensity, double drag, double frontalArea)
{

	double h;
	h = 5.3f;

	return h;
}
// -----------------------------------------------------------------------

