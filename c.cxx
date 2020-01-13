//Running Pything form c++
//To Compile: g++ c.cxx -o c -I /usr/include/python3.7/ -lpython3.7m
#include <iostream>
#include <Python.h>
int main()
	{
		Py_Initialize();
		std::cout<<"Hello world from c++"<<std::endl;
		
		PyObject *obj= Py_BuildValue("s", "p.py");
		FILE *file = _Py_fopen_obj(obj, "r+");
		PyRun_SimpleFile(file, "p.py");
		Py_Finalize();

		return 0;		
	}
