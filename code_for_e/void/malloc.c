#include <stdio.h>
#include <stdlib.h>

/*
int main(int argc, char **argv)
{
	int SizeOfArray;
	int *arr;

	printf("만들고 싶은 배열의 원소의 수: ");
	scanf("%d", &SizeOfArray);

	arr = (int *)malloc(sizeof(int) * SizeOfArray);

	free(arr);
	return 0;
}*/
/*
int main(int argc, char **argv)
{
	int student; // 입력 받고자 하는 학생 수
	int i, input;
	int *score; // 학생들의 수학점수 변수
	int sum = 0; // 총점

	printf("학생의 수는? : ");
	scanf("%d", &student);

	score = (int *)malloc(student *sizeof(int));

	for (i = 0; i < student; i++)
	{
		printf("학생 %d의 점수 : ", i);
		scanf("%d", &input);

		score[i] = input;
	}

t	for (i = 0; i <student; i++)
	{
		sum += score[i];
	}
	printf("전체 학생 평균 점수 : %d \n", sum / student);
	free(score);
	return 0;
}*/

/*
int main(int argc, char **argv)
{
	int i;
	int x, y;
	int **arr;

	printf("arr[x][y]를 만들 것입니다. \n");
	scanf("%d %d", &x, &y);

	arr = (int **)malloc(sizeof(int *) * x);

	for (i = 0; i < x; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * y);
	}

	printf("생성 완료! \n");

	for (i = 0; i < x; i++)
		free(arr[i]);
	free(arr);
	
	return 0;
}*/
void get_average(int **arr, int numStudent, int numSubject);
int main(int argc, char **argv)
{
	int i, j, input, sum = 0;
	int subject, students;
	int **arr;

	printf("과목 수: ");
	scanf("%d", &subject);
	printf("학생 수: ");
	scanf("%d", &students);

	arr = (int **)malloc(sizeof(int *) *subject);

	for (i = 0; i < subject; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * students);
	}

	for (i = 0; i <subject; i++)
	{
		printf("과목 %d의 점수 --------- \n", i);

		for (j = 0; j < students; j++)
		{
			printf("학생 %d 점수 입력 : ", j);
			scanf("%d", &arr[i][j]);
		}
	}

	get_average(arr, students, subject);

	for (i = 0; i < subject; i++)
		free(arr[i]);
	free(arr);

	return 0;
}

void get_average(int **arr, int numStudent, int numSubject)
{
	int i, j, sum;

	for (i = 0; i < numSubject; i++)
	{
		sum = 0;
		for (j = 0; j < numStudent; j++)
		{
			sum += arr[i][j];
		}
		printf("과목%d 평균점수 : %d \n", i, sum / numStudent);
	}
}
