// I could not find the file on the C disk, maybe it's because there is no access to any folders, 
// so I searched on the disk E
// There are my efforts to do something that works according to the task here
// Without multithreading everything works right, but I couldn`t fully implement it with multithreading

#include <iostream> 
#include "function.hpp"

int main()
{
	try {
		path myPath = "E:";
		string myFile;
		cout << "Enter filename with an extension: ";
		cin >> myFile;
		path myfound;
		find_file(myPath, myFile, myfound);
		cout << myfound << endl;
		auto current_thread = myThreads->begin();
		while (current_thread != myThreads->end()) {
			current_thread->join();
			current_thread++;
		}
	}
	catch (...)
	{
		cout << "Some error with file" << endl;
	}
}