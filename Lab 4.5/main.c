#include <stdio.h> //Осуществляет ввод/вывод на экран
#include <math.h> //Вычисление математических функций
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
	setlocale(LC_ALL, "Rus"); //Подключение функции корректного отображения
	int a, b, sum, dif, mult;
	float div; //Ввод переменных

	printf("Число a: "); //Вывод на экран
	scanf_s("%d", &a); //Ввод данных с клавиатуры

	printf("Число b: "); //Вывод на экран
	scanf_s("%d", &b); //Ввод данных с клавиатуры

	sum = abs(a) + abs(b);
	dif = abs(a) - abs(b);
	mult = abs(a) * abs(b);
	div = abs((double)(a)) / abs((double)(b));

	printf("\nСумма: %d", sum);
	printf("\nРазность: %d", dif);
	printf("\nПроизведение: %d", mult);
	printf("\nЧастное: %.2f", div);
}
