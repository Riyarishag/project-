#include<stdio.h>
void main()
{
        int month;
        printf("\nenter a month number: ");
        scanf("%d",&month);

        switch(month)
        {
        case 1:
                printf("\n The Number of days in a month 1 are 31");
                break;

        case 2:
                printf("\n The Number of days in a month 2 are 28");
                break;

        case 3:
                printf("\n The Number of days in a month 3 are 31");
		break; 		
	case 4:
                printf("\n The Number of days in a month 4 are 30");
                break;

        case 5:
                printf("\n The Number of days in a month 5 are 31");
                break;
        case 6:
                printf("\n The Number of days in a month 6 are 30");
                break;
        case 7:
                printf("\n The Number of days in a month 7 are 31");
                break;
	case 8:
		printf("\n The number of days in a month 8 are 31");
                break;

        case 9:
                printf("\n The Number of days in a month 9 are 30");
                break;

        case 10:
                printf("\n The Number of days in a month 10 are 31");
                break;
        case 11:
                printf("\n The Number of days in a month 11 are 30");
                break;
        case 12:
                printf("\n The Number of days in a month 12 are 31");
                break;
	default:
		printf("\n Enter the valid month number from 1 to 12 only");
		break;
	}
}

