// Problem_1.cpp : ���ɮץ]�t 'main' �禡�C�{���|��ӳB�}�l����ε�������C
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
	std::cout << "�Ƨǫe = ";
	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i] << ' ';
	}
	std::cout << '\n';
	*/
	bubble_sort(numbers, size);
	
	std::cout << "�̤j��: " << numbers[size - 1] << '\n';
	
	std::cout << "�̤p��: " << numbers[0];
	
	/*
	std::cout << "�Ƨǫ� = ";
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

// ����{��: Ctrl + F5 �� [����] > [�Ұʦ�������] �\���
// �����{��: F5 �� [����] > [�Ұʰ���] �\���

// �}�l�ϥΪ�����: 
//   1. �ϥ� [����`��] �����A�s�W/�޲z�ɮ�
//   2. �ϥ� [Team Explorer] �����A�s�u���l�ɱ���
//   3. �ϥ� [��X] �����A�Ѿ\�իؿ�X�P��L�T��
//   4. �ϥ� [���~�M��] �����A�˵����~
//   5. �e�� [�M��] > [�s�W����]�A�إ߷s���{���X�ɮסA�άO�e�� [�M��] > [�s�W�{������]�A�N�{���{���X�ɮ׷s�W�ܱM��
//   6. ����n�A���}�Ҧ��M�׮ɡA�Ыe�� [�ɮ�] > [�}��] > [�M��]�A�M���� .sln �ɮ�

