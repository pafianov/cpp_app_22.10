// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include<iostream>
#include<math.h>
#include<Windows.h>
using namespace std;

void exponention(int x, int y, int res) //Піднесення до степеня 
{
	
	for (size_t i = 1; i < y; i++)
	{
		res = x * res;
	}
	cout << "Res = " << res << endl;
}
void range_sum(int x,int y,int res) //повертає суму чисел із діапазону між ними
{
	for (size_t i = x; i <= y; i++)
	{
		res += i;
	}
	cout << "Sum = " << res << endl;
}

int main() 
{
	
	return 0;
}
