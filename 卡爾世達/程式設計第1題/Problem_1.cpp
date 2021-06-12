// Problem_1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

#define SIZE 5

void process(int *p, int len)
{
	std::cout << "process:\n";
	for (int i = 0; i < len; i++)
	{
		std::cout << "hello " << p[i] << '\n';
	}
}

void bubble_sort(int array[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

int main()
{
    // std::cout << "Hello World!\n";
    
	int size = SIZE;
	
	// Declare an array of integers to be allocated on the stack;
	int numbers[size];
	
	// Assign a value to each subsequent element
	// (numbers[0] is the first element in the array.) 
	for (int i = 0; i < size; i++)
	{
		std::cin >> numbers[i];
	}
	
	// process(numbers, size);
	
	/*
	std::cout << "排序前 = ";
	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i] << ' ';
	}
	std::cout << '\n';
	*/
	bubble_sort(numbers, size);
	
	std::cout << "最大值: " << numbers[size - 1] << '\n';
	
	std::cout << "最小值: " << numbers[0];
	
	/*
	std::cout << "排序後 = ";
	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i] << ' ';
	}
	std::cout << '\n';
	*/
	
	/*
	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i];
	}
    */
    
    return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

