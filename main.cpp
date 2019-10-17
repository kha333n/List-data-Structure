#include <iostream>
#include "List.h"
using namespace std;

int main(int argc, char *argv[])
{
	List list;
	list.add(5);
	list.add(7);
	list.add(12);
	list.add(3);
	list.add(13);
	list.add(52);
	list.add(711);
	list.add(33);
	list.start();
	while (list.next())
	{
		cout << "List Element: " << list.get() << endl;
	}
}