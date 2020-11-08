#include <stdio.h>

/*
int main(void)
{
	FILE *fp = fopen("some_data.txt", "r+");
	char data[100];

	fgets(data, 100, fp);
	printf("현재 파일에 있는 내용 : %s \n", data);

	fseek(fp, 5, SEEK_SET);

	fputs("is nothing on this file", fp);

	fclose(fp);
	return 0;
}

int main(void)
{
	FILE *fp = fopen ("some_data.txt", "r+");
	char c;

	if (fp == NULL)
	{
		printf("파일 열기를 실패하였습니다. \n");
		return 0;
	}

	while ((c = fgetc(fp)) != EOF)
	{
		if (65 <= c && c <= 90)
		{
			fseek(fp, -1, SEEK_CUR);
			fputc(c + 32, fp);
		}
		else if (97 <= c && c <= 122)
		{
			fseek(fp, -1, SEEK_CUR);
			fputc(c - 32, fp);
		}
	}
	fclose(fp);
	return 0;
}*/

int main(void)
{
	FILE *fp = fopen("some_data.txt", "a");
	char c;
	if (fp == NULL)
	{
		printf("파일 열기를 실패하였습니다. \n");
		return 0;
	}
	fputs("IS ADDED HAHAHAHAH", fp);
	return 0;
}
