#include <stdio.h> //������������ ����/����� �� �����
#include <math.h> //���������� �������������� �������
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
	setlocale(LC_ALL, "Rus"); //����������� ������� ����������� �����������
	int a, b, sum, dif, mult;
	float div; //���� ����������

	printf("����� a: "); //����� �� �����
	scanf_s("%d", &a); //���� ������ � ����������

	printf("����� b: "); //����� �� �����
	scanf_s("%d", &b); //���� ������ � ����������

	sum = a * a + b * b;
	dif = a * a - b * b;
	mult = a * a * b * b;
	div = (double)(a * a) / (double)(b * b);

	printf("\n�����: %d", sum);
	printf("\n��������: %d", dif);
	printf("\n������������: %d", mult);
	printf("\n�������: %.2f", div);
}
