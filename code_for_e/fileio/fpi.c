#include <stdio.h>
/*
int main(void)
{
	FILE *fp = fopen("some_data.txt", "r");
	char c;

	if (fp == NULL)
	{
		printf("file open error ! \n");
		return 0;
	}

	while ((c = fgetc(fp)) != EOF)
		printf("%c", c);
	
	return 0;
}*/

int main(void)
{
	FILE *fp = fopen("some_data.txt", "r");
	char data[10];
	char c;

	if (fp == NULL)
	{
		printf("file open error ! \n");
		return 0;
	}
	
	fgets(data, 5, fp);
	printf("입력 받은 데이터 : %s \n", data);

	c = fgetc(fp);
	printf("그 다음에 입력 받은 문자 : %c \n", c);

	fseek(fp, -1, SEEK_CUR);

	c = fgetc(fp);
	printf("그렇다면 무슨 문자가 ? : %c \n", c);

	fclose(fp);
	return 0;
}
