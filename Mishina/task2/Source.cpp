#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	int a, x, y, n, min, max;
	char r;
	


	min = 1;
	max = 1000;
	n = 1;

	printf("�������� �����: 1 - ��������� ���������� �����, 2 - �� ����������� �����\n");
	scanf("%i", &a);


	while ((a != 1) || (a != 2))
	{
		printf("����� ������ 1 ��� 2: 1 - ��������� ���������� �����, 2 - �� ����������� �����. �������� ��� ���\n");
		scanf("%i", &a);
	}



	if (a == 1) {

		srand(0);
		x = 1 + rand() % 100;

		printf("�������� ����� ����� ����� 1 � 1000\n");
		scanf("%i", &y);


		while (x != y) {

			if (x < y) printf("���������� ����� ������ \n", &y); else
				printf("���������� ����� ������ \n", &y);
			scanf("%i", &y);
			n = n + 1;
		}

		printf("�� �������� ����� - ", &x);
		printf("������� ", n);
	}

	else {
		printf("������� ����� ����� � �������� ����� 1 � 1000\n");
		scanf("%i", &y);
		 

		while ((y < 1) || (y > 1000)) {
			printf("����� ������ ���� ����� � � �������� ����� 1 � 1000. ������� ��� ���\n");
			scanf("%i", &y);
		}

		r = '>';

		while (r!='=') {
			x = min + rand() % max;
			printf("��� ����� %i", x);
			printf("?  ������� ��������� ������� ��������� ����� ����� � ������\n");
			scanf("%ch", &r);
			   while ((r!='=') && (r!= '>') && (r!= '<')) 
			   {
				   printf("����� ��������� - ��� >, <, =. ������� ��� ��� \n");
				   scanf("%ch", &r);
			   }
			   switch (r)
			   {
			   case '>': { x = min + rand() % (x - 1); max = x - 1; break; }
			   case '<': {x = (x + 1) + rand() % max; min = x + 1; break; }
			   case '=': break;
			   }
			   n = n + 1;
		}
		printf("��������� ������� ����� - ", &y);
		printf("������� ", n);
	}



}