// Manuel J. Trujillo-Silva
// Roman Numeral to Number
#include <stdio.h>


int main()
{
	// Declare variables
	char rn_chord[6], num_chord[128];
	int num_out;

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


}
