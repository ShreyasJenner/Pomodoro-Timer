//working pomodoro timer with support for audio
//both mp3 and wav files supported
//support for quitting program with keyboard or pausing timer is not present

#include <iostream>
#include <unistd.h>		
#include "Python.h"		

int main()
{
	std::cout << "∞\n";
	
	int min{}, sec{0};
	std::cin >> min;
	
	while(min!=0 || sec!=0)
	{
		if(sec<=0)
		{
			std::cout << '\r' << min << ":" << sec << sec;
			std::cout.flush();
			sec=59;
			min--;
		}
		else
		{
			std::cout << '\r' << min << ":" << sec;
			std::cout.flush();
			sec--;
		}
		std::cout << '\r' << std::string(5,' ');
		sleep(1);
	}
	std::cout << '\r';	

	Py_Initialize();
	FILE* file = fopen("file_path_of_python_file", "r");
	PyRun_SimpleFile(file, "file_path_of_python_file");
	
	Py_Finalize();	
	return 0;
}
