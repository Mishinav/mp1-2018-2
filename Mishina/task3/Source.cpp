#include <stdio.h>
#include <math.h>
#include <cstdlib>
void main()

int n, x1, x2, x3, x4, x5, x ;
float n1, n2, n3, n4, n5;

printf(" ������� ���������� ���� � �����, �� 2 �� 5\n");
scanf("%i", &n);
while ((n >= 2) && (n <= 5))
{
	printf(" ���������� ���� � ����� �� 2 �� 5\n");
	scanf("%i", &n);
}
switch (n)
{
case 2: 
{ n1 = 1 + rand() % 9;
  n2 = rand() % 9;
  while (n1 == n2)
  {
	  n1 = 1 + rand() % 9;
	  n2 = rand() % 9;
  }
	printf(" ������� 2-������� ����� � ���������������� �������\n");
	scanf("%i", &x);
	while ((x>99) && (x<10))
	{
		printf(" ���������� ���� � ����� - 2 \n");
		scanf("%i", &x);
	}

	x1 = x / 10;
	x2 = x - x1 * 10;
	while (x1==x2)
	{
		printf(" ����� �� ������ �����������\n");
		scanf ("%i", &x);
	}

	if (n1 == x1) if (n2 == x2) printf("�� �������� �����"); else 

}









}