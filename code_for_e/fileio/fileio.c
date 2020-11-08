#include <stdio.h>

/*
int main(void)
{
	FILE *fp;
	fp = fopen("a.txt", "w");

	if (fp == NULL)
	{
		printf("write Error!!\n");
		return 0;
	}

	fputs("Hello World!!! \n", fp);

	fclose(fp);

	return 0;
}

int main(void)
{
	FILE *fp = fopen("a.txt", "r");
	char buf[20];
	if (fp == NULL)
	{
		printf("READ ERROR!! \n");
		return 0;
	}
	fgets(buf, 20, fp);
	printf("입력받은 내용 : %s \n", buf);
	fclose(fp);
	return 0;
}

int main(void)
{
	FILE *fp = fopen("a.txt", "r");
	char c;

	while ((c = fgetc(fp)) != EOF)
	{
		printf("%c", c);
	}
	fclose(fp);
	return 0;
}
int main(void)
{
	FILE *fp = fopen("a.txt", "r");
	int size = 0;

	while (fgetc(fp) != EOF)
		size++;
	printf("이 파일의 크기는 : %d bytes \n", size);
	fclose(fp);
	return 0;
}
int main(void)
{
	FILE *fp = fopen("a.txt", "r");
	fgetc(fp);
	fgetc(fp);
	fgetc(fp);
	fgetc(fp);
	fseek(fp, 0, SEEK_SET);
	printf("다시 파일 처음에서 입력 받는다면 : %c \n", fgetc(fp));
	fclose(fp);
	return 0;
}*/

int main(void)
{
	FILE *fp = fopen("a.txt", "w");
	fputs("Psi is an excellent C programmer", fp);
	fseek(fp, 0, SEEK_SET);
	fputs("is Psi", fp);
	fclose(fp);
	return 0;
}

