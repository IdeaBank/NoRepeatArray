#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>

int main()
{
	srand(time(NULL));
	std::vector<int> vec, vec2;
	int v_size;
	std::cin >> v_size;
	for (int i = 0; i < v_size; i++)
	{
		vec.push_back(i);
	}
	for (int i = 0; i < v_size; i++)
	{
		int random = rand() % vec.size();
		vec2.push_back(vec[random]);
		vec.erase(vec.begin() + random);
	}
}
