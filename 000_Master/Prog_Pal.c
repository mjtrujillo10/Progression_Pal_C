// Manuel J. Trujillo-Silva
// Progression Pal

#include <stdio.h>


int main()
{
	// Declare variables
	char rn_chord[6], num_chord[128];
	int num_out, nex_ch_num;

	// Compared upper/lowercase RN variables
	char iv_low[] = "iv", iv_up[] = "IV", vi_low[] = "vi", vi_up[] = "VI", vii_low[] = "vii", vii_up[] = "VII";

	// Ask for input
	printf("What chord are you currently using?\n");
	scanf("%s", rn_chord);


	// Numeral to Number
	if (strcmp(rn_chord,"i") == 0)
	{
        num_out = -1;
	}
	else if (strcmp(rn_chord, "I") == 0)
	{
        num_out = 1;
	}
	else if (strcmp(rn_chord, "ii") == 0)
	{
        num_out = -2;
	}
	else if (strcmp(rn_chord, "II") == 0)
	{
        num_out = 2;
	}
	else if (strcmp(rn_chord, "iii") == 0)
	{
        num_out = -3;
	}
    else if (strcmp(rn_chord, "III") == 0)
	{
        num_out = 3;
	}
	else if (strcmp(rn_chord, "iv") == 0)
	{
        num_out = -4;
	}
    else if (strcmp(rn_chord, "IV") == 0)
	{
        num_out = 4;
	}
	else if (strcmp(rn_chord, "v") == 0)
	{
        num_out = -5;
	}
	else if (strcmp(rn_chord, "V") == 0)
	{
        num_out = 5;
	}
	else if (strcmp(rn_chord, "vi") == 0)
	{
        num_out = -6;
	}
	else if (strcmp(rn_chord, "VI") == 0)
	{
        num_out = 6;
	}
	else if (strcmp(rn_chord, "vii") == 0)
	{
        num_out = -7;
	}
	else if (strcmp(rn_chord, "VII") == 0)
	{
        num_out = 7;
	}
	else
	{
        num_out = 0;
		printf("ERROR: Input to num_out invalid.\n");
	}

    if (num_out != 0)
    {
        printf("\nCurrent value of num_out is %d.\n", num_out);
    }
    else
    {
        printf("\nERROR: Num_out error.\n");
    }
	//Circle Progression switch

	switch (num_out)
	{
		case 1:
		{
            nex_ch_num = 4;
            break;
		}
		case -1:
        {
            nex_ch_num = -4;
            break;
        }
		case 2:
		{
            nex_ch_num = -5;
            break;
		}
		case -2:
		{
            nex_ch_num = 5;
            break;
		}
		case 3:
		{
            nex_ch_num = 6;
            break;
		}
		case -3:
		{
            nex_ch_num = -6;
            break;
		}
		case 4:
		{
            nex_ch_num = -7
            ;
            break;
		}
		case -4:
		{
            nex_ch_num = 7;
            break;
		}
		case 5:
		{
            nex_ch_num = 1;
            break;
		}
		case -5:
		{
            nex_ch_num = -1;
            break;
		}
		case 6:
		{
            nex_ch_num = 2;
            break;
		}
		case -6:
		{
            nex_ch_num = -2;
            break;
		}
		case 7:
		{
            nex_ch_num = 3;
            break;
		}
        case -7:
        {
            nex_ch_num = -3;
            break;
        }

    }

    //Output
	printf("Your next chord should be a %d chord.\n", nex_ch_num);



}

