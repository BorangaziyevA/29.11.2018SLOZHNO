#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task1() {
	//1.	������ � ���������� ��� �����.����������, ��� ������, �������� ���������
	//	��� ������ �������� �������� ���� �����.����� ������� � ���� ���������

	int a = 0 + rand() % 100;
	int b = 0 + rand() % 100;

	printf("%d\n", a);
	printf("%d\n", b);

	int z = pow(a, 2) - pow(b, 2);
	printf("%d\n", z);
	int y = (a - b)*(a*b);
	printf("%d\n", y);
	if (z > y)
		printf("�������� ������\n");
	else
		printf("�������� ������\n");
}

void task2() {
	//2.	������ � ���������� �������������� ������� � ������ ����� � ����������, � ����� ��������� ��� ���������(� ��������� ��� ��������).

	int S = -90 + rand() % 90;
	int D = -179 + rand() % 180;

	printf("������ = ");
	printf("%d\n", S);

	printf("������� = ");
	printf("%d\n", D);

	if (S > 0)
		printf("C������� �����\n");
	else if (S < 0)
		printf("����� �����\n");

	if ((D > 0) && (D < 180))
		printf("��������� ���������\n");
	else
		printf("�������� ���������\n");
}
void task3() {/*1.	�������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������
��������������� 20 % ������.������ ����������������� ��������� � ���� ������(����� �� 1 �� 7).*/
	int DN = 1 + rand() % 7;
	int PR = 1 + rand() % 120;
	printf("���� ������:");
	printf("%d\n", DN);

	printf("����������������� ���������: %d \n", PR);

	int SP;

	if (DN == 6 || DN == 7)
	{
		SP = 3 * PR*0.8;
		printf("��������� ���������� = ");
		printf("%d\n", SP);
	}
	else
	{
		SP = 3 * PR;
		printf("��������� ���������� = ");
		printf("%d\n", SP);
	}
}
void task4()
{
	//2.	��������� ��������� ������� � ������ ������.������ 5 % ���������������,
	//	���� ����� ������� ��������� 500 ����� � 10 % , ���� ������ 1000 �����.
	int SP = 200 + rand() % 1500;

	int STP;

	if ((SP >= 500) && (SP < 1000)) {
		printf("����� ������� = %d\n", SP);
		STP = SP * 0.95;
		printf("��������� ������� = %d\n", STP);
	}
	else if (SP >= 1000){
		printf("����� ������� = %d\n", SP);
		STP = SP*0.9;
		printf("��������� ������� = %d\n", STP);
	}
	else
	{
		printf("����� ������� = %d\n", SP);
		printf("��������� ������� = %d\n", SP);
	}

}
void task5()
{
	//3.	������ � ������ ����� �� 1 �� 12. �� ������ ������ ������ ��������� � ������� ����.
	//	���� ������������ ������ ������������ �����, ��������� ������ ������ ��������� �� ������
	int M = -5 + rand() % 15;
	printf("%d\n", M);
	if ((M >=3)&&(M<=5))
		printf("�����\n");
	else if ((M >=6)&&(M<=8))
		printf("����\n");
	else if ((M>=9)&&(M<=11) )
		printf("�����\n");
	else if ((M == 12)||((M>=1 && (M<=2))))
		printf("����\n");
	else
		printf("������\n");

}
void task6()
{
	/*4.	���� ��� ����� a, b, c.����������, ������� �� ����� ��� ���� �� ���� ���� ������*/
	int a = 0 + rand() % 10;
	int b = 0 + rand() % 10;
	int c = 0 + rand() % 10;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	if (a == b) {
		printf("%d\n", a);
		printf("%d\n", b);
	}
	else if (a == c) {
		printf("%d\n", a);
		printf("%d\n", c);
	}
	else if (b == c) {
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else if ((a == b) && (b == c)) {
		printf("%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else
		printf("����\n");


}
void task7() 
{
	//5.	�������� ��������� ��� ����������� ������� ����� �� ������� �������� ������� � �������
	//	���������(���� � � 6 �� 12, ���� � � 12 �� 18, ����� � � 18 �� 24, ���� � � 0 �� 6).
	int T = 0 + rand() % 24;
	printf("�����:%d\n", T);

	if ((T >= 0) && (T < 6))
		printf("����\n");
	else if ((T >= 6) && (T < 12))
		printf("����\n");
	else if ((T >= 12) && (T < 18))
		printf("����\n");
	else
		printf("�����\n");
}
void task9()
{
	//3.	���� ����������� �������������� �����.��������, �������� �� ��� �����������(�������� ��������� ����� ������� � ������ ������).
	int x;
	printf("����������� �������������� ����� = ");
	scanf_s("%d", &x);

	if ((x / 1000 == (x % 10)) && ((x / 100) % 10 == ((x %100)/10)))
		printf("Yes\n");
	else
		printf("No\n");
}
void task8()
{
	//2.	�������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 99 ���������
	//	� ���� ����� "�������" � ���������� �����.��������, 1 �������, 5 ������, 42 �������
	int R = 1 + rand() % 99;
	printf("%d\n", R);

	if (R % 10 == 1 || R == 1)
		printf("�������\n");
	else if ((R % 10 >= 2 && R % 10 <= 4) || R == 2 || R == 3 || R == 4)
		printf("�������\n");
	else
		printf("������\n");
}
void task10()
{
	int x;
	printf("����������� �������������� ����� = ");
	scanf_s("%d", &x);

	int y = (x %100)/10;
	int z = x % 10;
	printf("%d\n", y);
	printf("%d\n", z);
}
void main() {
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task;
	char flag;

start:
	printf("������� ����� �������:");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1:task1(); break;
	case 2:task2(); break;
	case 3:task3(); break;
	case 4:task4(); break;
	case 5:task5(); break;
	case 6:task6(); break;
	case 7:task7(); break;
	case 8:task8(); break;
	case 9:task9(); break;
	case 10:task10(); break;
	default:
		break;
	}

	printf("������ ����������?1/0\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;


	system("pause");
}
