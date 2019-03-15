#include "CircleList.h"
#include <iostream>
#include <stdarg.h>

using namespace std;

class Program
{
public:
	static void Run()
	{
		CircleList list1 = TestAdd();
		wcout << L"TestForEach :";
		TestForEach(list1);
		wcout << L"TestIncrement :";
		TestIncrement(list1);
		wcout << L"TestCopying : ";
		CircleList list2(list1);
		TestForEach(list2);
		wcout << L"TestInialization : ";
		CircleList list3{ 3,6,7,8,5 };
		TestForEach(list3);
	}

private:
	static CircleList TestCreation()
	{
		CircleList list;
		return list;
	}

	static CircleList TestAdd()
	{
		auto list = CircleList();
		list.Add(1);
		list.Add(2);
		list.Add(3);
		list.Add(4);
		list.Add(5);
		return list;
	}

	static void TestIncrement(CircleList& list)
	{
		for (auto it : list)
		{
			wcout << it << " ";
		}

		std::cout << std::endl;
	}

	static void TestForEach(CircleList& list)
	{
		for (auto i : list)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}
};

int main()
{
	Program::Run();


	std::cin.get();

	return 0;
}
