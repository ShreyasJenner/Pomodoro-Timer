//working pomodoro timer with support for audio
//only problem is that prompt after the timer is over doesn't print immediately
//support for quitting app with keyboard press needs to be created

#include <iostream>
#include <unistd.h>		//to call sleep
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
	FILE* file = fopen("/home/god/code/pomodoro/pomo/test.py", "r");
	PyRun_SimpleFile(file, "/home/god/code/pomodoro/pomo/test.py");
	
	Py_Finalize();	
	return 0;
}
