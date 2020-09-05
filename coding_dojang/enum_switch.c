#include <stdio.h>

enum LuxSkill {
	LightBinding = 1,
	PrismaticBarrier,
	LucentSingularity,
	FinalSpark
};

int main(void)
{
	enum LuxSkill skill;

	skill = LightBinding;

	switch (skill)
	{
	case LightBinding:
		printf("LightBinding\n");
		break ;
	case PrismaticBarrier:
		printf("PrismaticBarrier");
		break;
	case LucentSingularity:
		printf("LucentSingularity");
		break;
	case FinalSpark:
		printf("Final Spark");
		break;
	default:
		break;
	}

	return 0;
}
