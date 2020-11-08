#include <iostream>

using namespace std;

char Decision()
{
	char x = '1';
	do
	{
		cout << "Введите 1, если хотите активировать 1ый подраздел работы" << endl;
		cout << "Введите 2, если хотите активировать 2ый подраздел работы" << endl;
		cin >> x;
	} while (x != '1' && x != '2');
	return x;
}