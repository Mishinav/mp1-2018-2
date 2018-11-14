#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");
  int K[6], i = 0, Kol[5] = { 0 }, K2[100] = {0}, Sk[5], St[5];

	int n = 0, Obshaa = 0, Skida = 0, Kol1=0, Kol2=0, Kol3=0, Kol4=0, Kol5=0;


	K2[0] = 1;
	K2[1] = 1;
	K2[2] = 1;
	K2[3] = 1;
	K2[4] = 1;
	K2[5] = 1;



	K[0] = 1234;
	K[1] = 8063;
	K[2] = 5266;
	K[3] = 9203;
	K[4] = 2521;
	K[5] = 0;


	for (i = 0; i < 6; i++)
	{printf("%i ", K[i]);
	printf(" \n");
}

	printf("Укажите нужный вам штрих код\n");
	scanf_s("%i", &K2[i]);



	while (K2[i] != 0)
	{
		i++;
    printf("Если это все, введите ");
    printf("%i", 0);
    printf (", иначе введите следующий штрих-код \n");
		scanf_s("%i", &K2[i]);
		
	}



	i = 0;
	while (K2[i] != 0)
	{
		if (K2[i] == 1234)

			Kol1++;
		

		if (K2[i] == 8063)
		
			Kol2++;

		if (K2[i] == 5266)
			
			Kol3++;


		if (K2[i] == 9203)
		

			Kol4++;

		if (K2[i] == 2521)

			Kol5++;
		i++;

	}

	Kol[0] = Kol1;
	Kol[1] = Kol2;
	Kol[2] = Kol3;
	Kol[3] = Kol4;
	Kol[4] = Kol5;


	 
	
for (i = 0; i < 5; i++)
		   Sk[i] = rand() % 49 + 1;

    
	       St[0] = 314; //акрил
		   St[1] = 112; //гуаш
		   St[2] = 57; //акварель
		   St[3] = 242; //хна
		   St[4] = 163; // альбом а4


		   for (i = 0; i < 6; i++)
		   {
			   if (Kol[0] !=0) 
			   {
				   printf("Акрил ---- Стоимость за единицу - %i", St[0]);
				   printf("руб. ----- ");
				   printf("Количество - %i", Kol[i]);
				   printf(" ----- Общая стоимость - %i / n", (Kol[i] * St[0]));
				  
			   }

			   if (Kol[1] != 0)
			   {
				   printf("Гуашь ---- Стоимость за единицу - %i", St[1]);
				   printf("руб. ----- ");
				   printf("Количество - %i", Kol[i]);
				   printf(" ----- Общая стоимость - %i /n", (Kol[i] * St[1]));

			   }

			   if (Kol[2] != 0)
			   {
				   printf("Акварель ---- Стоимость за единицу - %i", St[2]);
				   printf("руб. ----- ");
				   printf("Количество - %i ", Kol[i]);
				   printf(" ----- Общая стоимость - %i / n", (Kol[i] * St[2]));

			   }

			   if (Kol[3] != 0)
			   {
				   printf("Хна ---- Стоимость за единицу - %i", St[3]);
				   printf("руб. ----- ");
				   printf("Количество - %i", Kol[i]);
				   printf(" ----- Общая стоимость - %i / n", (Kol[i] * St[3]));

			   }

			   if (Kol[4] != 0)
			   {
				   printf("Альбом формата А4 ---- Стоимость за единицу - %i", St[4]);
				   printf("руб. ----- ");
				   printf("Количество - %i", Kol[i]);
				   printf(" ----- Общая стоимость - %i / n", (Kol[i] * St[4]));

			   }


			   Obshaa = Obshaa + (Kol[i] * St[i]);
			   Skida = Skida + Sk[i] * (Kol[i] * St[i]);
		   }


		   printf("Общая стоимость товара - %i /n", Obshaa);
		   printf("Суммарная скидка - %i /n", Skida);
		   printf("Итоговая цена - %i /n", (Obshaa-Skida));
    }