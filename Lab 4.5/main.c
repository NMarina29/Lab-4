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

	sum = abs(a) + abs(b);
	dif = abs(a) - abs(b);
	mult = abs(a) * abs(b);
	div = abs((double)(a)) / abs((double)(b));

	printf("\n�����: %d", sum);
	printf("\n��������: %d", dif);
	printf("\n������������: %d", mult);
	printf("\n�������: %.2f", div);
}
