// �F�|.cpp : ���ɮץ]�t 'main' �禡�C�{���|��ӳB�}�l����ε�������C
//

#include <iostream>

#define THE_ODD_NUMBER 19

void printStar(int width)
{
    int i, j, k, l, m;

    for (i = width; i >= -width; i -= 2)
    {
        if (i == -1)
            continue;

        if (i >= 0)
            k = i;
        else
            k = i * -1;

        l = width - k + 1;
        l -= 2;

        if (l >= 0)
            for (m = 0; m < l; m += 2)
                std::cout << ' ';

        for (j = 0; j < k; j++)
        {
            std::cout << '*';
        }

        std::cout << std::endl;
    }

}

int main()
{
    // std::cout << "Hello World!\n";

    printStar(THE_ODD_NUMBER);

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

