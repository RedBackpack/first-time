#include<iostream>
using namespace std;

int main()
{
	int icount = 18;
	int *iptr = &icount;
	*iptr = 58;
	cout << icount << endl;
}