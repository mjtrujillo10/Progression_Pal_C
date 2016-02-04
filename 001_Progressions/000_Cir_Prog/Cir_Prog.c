// Manuel J. Trujillo-Silva
// Circle Progression
#include <stdio.h>
int main()
{
	//Declare variables
	int CUR_CHORD_NUM, NEX_CHORD_NUM;

	//Request input
	printf("What chord are you currently using? (input should be 1 through 7)\n");
	scanf("%d", &CUR_CHORD_NUM);

	//Circle Progression switch

	switch (CUR_CHORD_NUM)
	{
		case 1:
		{
		NEX_CHORD_NUM = 4;
		break;
		}
		case 2:
		{
		NEX_CHORD_NUM = 5;
		break;
		}
		case 3:
		{
		NEX_CHORD_NUM = 6;
		break;
		}
		case 4:
		{
		NEX_CHORD_NUM = 7;
		break;
		}
		case 5:
		{
		NEX_CHORD_NUM = 1;
		break;
		}
		case 6:
		{
		NEX_CHORD_NUM = 2;
		break;
		}
		case 7:
		{
		NEX_CHORD_NUM = 3;
		break;
		}

	}

	//Output
	printf("Your next chord should be a %d chord.\n", NEX_CHORD_NUM);


}
