#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task1() {
	//1.	Ввести с клавиатуры два числа.Определить, что больше, разность квадратов
	//	или модуль квадрата разности этих чисел.Ответ вывести в виде сообщения

	int a = 0 + rand() % 100;
	int b = 0 + rand() % 100;

	printf("%d\n", a);
	printf("%d\n", b);

	int z = pow(a, 2) - pow(b, 2);
	printf("%d\n", z);
	int y = (a - b)*(a*b);
	printf("%d\n", y);
	if (z > y)
		printf("Разность больше\n");
	else
		printf("Разность меньше\n");
}

void task2() {
	//2.	Ввести с клавиатуры географическую долготу и широту места и определить, в каком полушарии оно находится(в восточном или западном).

	int S = -90 + rand() % 90;
	int D = -179 + rand() % 180;

	printf("Широта = ");
	printf("%d\n", S);

	printf("Долгота = ");
	printf("%d\n", D);

	if (S > 0)
		printf("Cеверный полюс\n");
	else if (S < 0)
		printf("Южный полюс\n");

	if ((D > 0) && (D < 180))
		printf("Восточное полушарие\n");
	else
		printf("Западное полушарие\n");
}
void task3() {/*1.	Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям
предоставляется 20 % скидка.Ввести продолжительность разговора и день недели(цифра от 1 до 7).*/
	int DN = 1 + rand() % 7;
	int PR = 1 + rand() % 120;
	printf("День недели:");
	printf("%d\n", DN);

	printf("Продолжительность разговора: %d \n", PR);

	int SP;

	if (DN == 6 || DN == 7)
	{
		SP = 3 * PR*0.8;
		printf("Стоимость переговора = ");
		printf("%d\n", SP);
	}
	else
	{
		SP = 3 * PR;
		printf("Стоимость переговора = ");
		printf("%d\n", SP);
	}
}
void task4()
{
	//2.	Вычислить стоимость покупки с учетом скидки.Скидка 5 % предоставляется,
	//	если сумма покупки превышает 500 тенге и 10 % , если больше 1000 тенге.
	int SP = 200 + rand() % 1500;

	int STP;

	if ((SP >= 500) && (SP < 1000)) {
		printf("Сумма покупки = %d\n", SP);
		STP = SP * 0.95;
		printf("Стоимость покупки = %d\n", STP);
	}
	else if (SP >= 1000){
		printf("Сумма покупки = %d\n", SP);
		STP = SP*0.9;
		printf("Стоимость покупки = %d\n", STP);
	}
	else
	{
		printf("Сумма покупки = %d\n", SP);
		printf("Стоимость покупки = %d\n", SP);
	}

}
void task5()
{
	//3.	Ввести с экрана число от 1 до 12. По номеру месяца выдать сообщение о времени года.
	//	Если пользователь введет недопустимое число, программа должна выдать сообщение об ошибке
	int M = -5 + rand() % 15;
	printf("%d\n", M);
	if ((M >=3)&&(M<=5))
		printf("Весна\n");
	else if ((M >=6)&&(M<=8))
		printf("Лето\n");
	else if ((M>=9)&&(M<=11) )
		printf("Осень\n");
	else if ((M == 12)||((M>=1 && (M<=2))))
		printf("Зима\n");
	else
		printf("Ошибка\n");

}
void task6()
{
	/*4.	Даны три числа a, b, c.Определить, имеется ли среди них хотя бы одна пара равных*/
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
		printf("Нету\n");


}
void task7() 
{
	//5.	Написать программу для определения времени суток по данному текущему времени и вывести
	//	сообщение(утро – с 6 до 12, день – с 12 до 18, вечер – с 18 до 24, ночь – с 0 до 6).
	int T = 0 + rand() % 24;
	printf("Часов:%d\n", T);

	if ((T >= 0) && (T < 6))
		printf("Ночь\n");
	else if ((T >= 6) && (T < 12))
		printf("Утро\n");
	else if ((T >= 12) && (T < 18))
		printf("День\n");
	else
		printf("Вечер\n");
}
void task9()
{
	//3.	Дано натуральное четырехзначное число.Выяснить, является ли оно палиндромом(читается одинаково слева направо и справа налево).
	int x;
	printf("Натуральное четырехзначное число = ");
	scanf_s("%d", &x);

	if ((x / 1000 == (x % 10)) && ((x / 100) % 10 == ((x %100)/10)))
		printf("Yes\n");
	else
		printf("No\n");
}
void task8()
{
	//2.	Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет
	//	к нему слово "копейка" в правильной форме.Например, 1 копейка, 5 копеек, 42 копейки
	int R = 1 + rand() % 99;
	printf("%d\n", R);

	if (R % 10 == 1 || R == 1)
		printf("Копейка\n");
	else if ((R % 10 >= 2 && R % 10 <= 4) || R == 2 || R == 3 || R == 4)
		printf("Копейки\n");
	else
		printf("Копеек\n");
}
void task10()
{
	int x;
	printf("Натуральное четырехзначное число = ");
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
	printf("Введите номер задания:");
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

	printf("Хотите продолжить?1/0\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;


	system("pause");
}
