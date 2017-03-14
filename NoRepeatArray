#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
int main()
{
	srand((unsigned)time(NULL));
	std::vector<int> arr, arr2; //arr = array made to contain 1~36 , arr2 = array made to contain random integer
	int check = 0;
	for (int i = 0;i < 36;arr.push_back(++i));
	while (check < 36)
	{
		int random = rand() % 36;
		if (arr[random] != -1)
		{
			arr2.push_back(arr[random]), ++check, arr[random] = -1;
		}
	}
	for (int i = 0;i < 36;std::cout << arr2[i++] << std::endl); //prints result
}
