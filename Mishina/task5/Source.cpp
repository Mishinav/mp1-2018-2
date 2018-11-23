#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <stdlib.h>  
#include <io.h>  
#include <time.h>  
#include <string.h> 
#include <time.h> 


int a;

void quickSortR(u a, long N) 
	

{
	long i = 0, j = N - 1; 		
	int temp, p;

	p = a[N >> 1];		

	do 
	{
		while (a[i] < p) i++;
		while (a[j] > p) j--;

		if (i <= j)
		{
			temp = a[i]; a[i] = a[j]; a[j] = temp;
			i++; j--;
		}
	} while (i <= j);


	if (j > 0) quickSortR(a, j);
	if (N > i) quickSortR(a + i, N - i);
}


main

{
	   clock_t t1,t2;

		char file_names[10000][32];
		unsigned long file_sizes[10000];
		int tmp, x;
		char flag;

		struct _finddata_t c_file;
		intptr_t hFile;
		char path[200];
		char buffer[30];
		long i, j;
        int metod, k;
		int count = 0;
		double tt1, tt2,tt3;
		

		printf("Выберите способ сортировки, указав его порядковый номер \n");

		printf("1. Сортировка пузырьком \n");
		printf("2. Сортировка вставками \n");
		printf("3. Сортировка Хуевая \n");
		printf("4. Выход \n");

		scanf_s("&d", &metod);

		while (metod != 4)
		{

			gets_s(path, 260);
			strcat(path, "*");

			printf("Введите путь \n");
			scanf_s("%s", path);

			if ((hFile = _findfirst("c:\\temp\\*.*", &c_file)) == -1L)
				printf("Файл с именем *.c не найден \n");
			else

			{

				printf("Listing of .c files\n\n");
				printf("Размер файла\n", ' ');
				printf("--— —--\n", ' ');
				do {
					strncpy(file_names[count], c_file.name, 32);
					file_sizes[count] = c_file.size;
					printf("%-12.12s %10u\n", file_names[count], file_sizes[count]);
					count++;
				} while (_findnext(hFile, &c_file) == 0);
				_findclose(hFile);
				printf("\ncount of files: %d\n", count);
			}

			for (i = 0; i < count; i++)
				for (j = (count - 1); j > i; j--)
					if (file_sizes[j] > file_sizes[j - 1])
					{
						k = file_sizes[j];
						file_sizes[j] = file_sizes[j - 1];
						file_sizes[j - 1] = k;
						strncpy(path, file_names[j], 32);
						strncpy(file_names[j], file_names[j - 1], 32);
						strncpy(file_names[j - 1], path, 32);
					}
			for (i = 0; i < count; i++)
				printf("%-12.12s %10u\n", file_names[i], file_sizes[i]);






			if (metod == 1)
			{
				t1 = clock();

				do
				{
					flag = 0;
					for (i = 1; i < count; i++)
					{
						if (file_sizes[i] < file_sizes[i - 1])
						{
							tmp = file_sizes[i];
							file_sizes[i] = file_sizes[i - 1];
							file_sizes[i - 1] = tmp;
							flag = 1;
						}
					}
				} while (flag);


				count = 0;

				printf("Listing of .c files\n\n");
				printf("FILE         DATE %24c   SIZE\n", ' ');
				printf("----         ---- %24c   ----\n", ' ');
				do
				{

					ctime_s(buffer, _countof(buffer), &c_file.time_write);
					if (count <= 20)
						printf("%-12.12s %.24s  %10ld\n", c_file.name, buffer, file_sizes);
					count++;
				} while (_findnext(hFile, &c_file) == 0);
				_findclose(hFile);
				printf("\ncount of files: %d", count);

				t2 = clock();
				double tt1 = double abc(t1 - t2) / CLOCKS_PER_SE;
				printf("%e", tt1);
			}



			if (metod == 2)
			{
				t1 = clock();

				for (i = 0; i < count; i++)
				{
					x = file_sizes[i];
					for (j = i - 1; j >= 0 && file_sizes[j] > x; j--)
						file_sizes[j + 1] = file_sizes[j];

					file_sizes[j + 1] = x;
				}

				count = 0;

				printf("Listing of .c files\n\n");
				printf("FILE         DATE %24c   SIZE\n", ' ');
				printf("----         ---- %24c   ----\n", ' ');
				do
				{

					ctime_s(buffer, _countof(buffer), &c_file.time_write);
					if (count <= 20)
						printf("%-12.12s %.24s  %10ld\n", c_file.name, buffer, file_sizes);
					count++;
				} while (_findnext(hFile, &c_file) == 0);
				_findclose(hFile);
				printf("\ncount of files: %d", count);

				t2 = clock();
				double tt2 = double abc(t1 - t2) / CLOCKS_PER_SE;
				printf("%e", tt2);
			}



			if (metod == 3)
			{
				t1 = clock();

				printf("Listing of .c files\n\n");
				printf("FILE         DATE %24c   SIZE\n", ' ');
				printf("----         ---- %24c   ----\n", ' ');
				do
				{

					ctime_s(buffer, _countof(buffer), &c_file.time_write);
					if (count <= 20)
						printf("%-12.12s %.24s  %10ld\n", c_file.name, buffer, quickSortR(u* file_sizes, long count));
					count++;
				} while (_findnext(hFile, &c_file) == 0);
				_findclose(hFile);
				printf("\ncount of files: %d", count);

				t2 = clock();
				double tt3 = double abc(t1 - t2) / CLOCKS_PER_SE;
				printf("%e", tt3);
			}

		}
		break;
}



	