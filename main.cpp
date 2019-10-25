#include <iostream>
#include "List.cpp"
#include <string>
using namespace std;

auto main(int argc, char* argv[]) -> int  // NOLINT(bugprone-exception-escape)
{
	List<string> strlist;
	strlist.add("Welcome");
	strlist.add("to");
	strlist.add("the");
	strlist.add("World");
	strlist.add("of");
	strlist.add("Programming.");
	strlist.start();
	while (strlist.next())
	{
		cout << strlist.get() << " ";
	}
	cout << endl;
	List<char> charlist;
	charlist.add('c');
	charlist.add('d');
	charlist.add('e');
	charlist.add('g');
	charlist.add('a');
	charlist.remove();
	charlist.start();
	while (charlist.next())
	{
		cout  << "List Element: " << charlist.get() << endl;
	}
	List<int> list;
	list.add(5);
	list.add(3);
	list.add(2);
	list.start();
	while (list.next())
	{
		cout << "List Element: " << list.get() << endl;
	}
	List<double> flist;
	flist.add(4.5);
	flist.add(7.67);
	
	flist.add(7.7);
	flist.start();
	while (flist.next())
	{
		cout << "List Element: " << flist.get() << endl;
	}
	cout << "List lengths: " << endl;
	cout << strlist.length() << endl << charlist.length() <<endl <<list.length() << endl <<flist.length();
}
