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

	sum = a * a + b * b;
	dif = a * a - b * b;
	mult = a * a * b * b;
	div = (double)(a * a) / (double)(b * b);

	printf("\nСумма: %d", sum);
	printf("\nРазность: %d", dif);
	printf("\nПроизведение: %d", mult);
	printf("\nЧастное: %.2f", div);
}
