#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	for (int i = 1; i<5; i++)
	{
		cout << "������ ���� #1 =   " << i << endl;
		
		for (int f = 1; f < 5; f++)
		{
			cout << "������ ���� #2 = " << f << endl;
		}
	}
}