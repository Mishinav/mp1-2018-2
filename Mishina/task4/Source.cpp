#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
	int K[6], i, Kol[5] = { 0 }, K2[6] = { 0 }, Sk[5], St[5];
	
	int n=0, Obshaa=0, Skida=0;

	
	
	K[0] = 1234;
	K[1] = 8063;
	K[2] = 5266;
	K[3] = 9203;
	K[4] = 2521;
	K[5] = 0000;


for (i = 0; i < 5; i++)
		printf("%i ", K[i]);
       printf(" /n");

	printf("������� ������� ������ �����-��� � ���-�� ������. ��� ��������� ������� ��������� �����-��� /n");

	i = -1;
while ((i != 5) || (K[i] != 0000));
	   {
	    i++;
		scanf_s("%i", &K2[i]);
		scanf_s("%i", &Kol[i]);
		
	   }
	 
	
for (i = 0; i < 5; i++)
		   Sk[i] = rand() % 49 + 1;

    
	       St[0] = 314; //�����
		   St[1] = 112; //����
		   St[2] = 57; //��������
		   St[3] = 242; //���
		   St[4] = 163; // ������ �4

for (i = 0; i < 5; i++)
         if ((K2[i] != 0000) || (K2[i] != 0)) n = n + 1;

		 

		   for (i = 0; i < n; i++)
		   {
			   if (K2[i] == 1234) 
			   {
				   printf("����� ---- ��������� �� ������� - %i", St[0]);
				   printf("���. ----- ");
				   printf("���������� - %i", Kol[i]);
				   printf(" ----- ����� ��������� - %i / n", (Kol[i] * St[0]));
				  
			   }

			   if (K2[i] == 8063)
			   {
				   printf("����� ---- ��������� �� ������� - %i", St[1]);
				   printf("���. ----- ");
				   printf("���������� - %i", Kol[i]);
				   printf(" ----- ����� ��������� - %i /n", (Kol[i] * St[1]));

			   }

			   if (K2[i] == 5266)
			   {
				   printf("�������� ---- ��������� �� ������� - %i", St[2]);
				   printf("���. ----- ");
				   printf("���������� - %i ", Kol[i]);
				   printf(" ----- ����� ��������� - %i / n", (Kol[i] * St[2]));

			   }

			   if (K2[i] == 9203)
			   {
				   printf("��� ---- ��������� �� ������� - %i", St[3]);
				   printf("���. ----- ");
				   printf("���������� - %i", Kol[i]);
				   printf(" ----- ����� ��������� - %i / n", (Kol[i] * St[3]));

			   }

			   if (K2[i] == 2521)
			   {
				   printf("������ ������� �4 ---- ��������� �� ������� - %i", St[4]);
				   printf("���. ----- ");
				   printf("���������� - %i", Kol[i]);
				   printf(" ----- ����� ��������� - %i / n", (Kol[i] * St[4]));

			   }


			   Obshaa = Obshaa + (Kol[i] * St[i]);
			   Skida = Skida + Sk[i] * (Kol[i] * St[i]);
		   }


		   printf("����� ��������� ������ - %i /n", Obshaa);
		   printf("��������� ������ - %i /n", Skida);
		   printf("�������� ���� - %i /n", (Obshaa-Skida));
    }