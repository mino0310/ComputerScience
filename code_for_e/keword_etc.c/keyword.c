#include <stdio.h>

typedef struct HUMAN {
	int age;
	int height;
	int weight;
	int gender;
}HUMAN;

int Print_Status(HUMAN human);
int main(void)
{
	HUMAN Adam = {31, 182, 75, 0};
	HUMAN Eve = {27, 166, 48, 1};

	Print_Status(Adam);
	Print_Status(Eve);
	return 0;
}

int Print_Status(HUMAN human)
{
	if (human.gender == 0)
		printf("MALE \n");
	else
		printf("FEMALE \n");
	printf("AGE : %d / Height : %d / Weight : %d \n", human.age, human.height, human.weight);
	if (human.gender == 0 && human.height >= 180)
		printf("he is a winner!! \n");
	else if (human.gender == 0 && human.height < 180)
		printf("he is a loser!! \n");

	printf("------------------------------------\n");

	return 0;
}
