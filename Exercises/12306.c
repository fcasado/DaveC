/*
    Exercise 12306: Given as input three integers representing a date
    as a day, month, year, print out the number day, month and year for
    the following day's date.
    cc 12306.c -o 12306
    20150817 fmc
 */
#include<stdio.h>
int main(void)
{
    int day, month, year, error=0;
    printf("\nInput date [dd mm yyyy]: ");
    scanf("%d %d %d", &day, &month, &year);
    printf("\nDate following %02d:%02d:%04d is",day,month,year);
    switch(month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                switch(day)
                    {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 11:
                        case 12:
                        case 13:
                        case 14:
                        case 15:
                        case 16:
                        case 17:
                        case 18:
                        case 19:
                        case 20:
                        case 21:
                        case 22:
                        case 23:
                        case 24:
                        case 25:
                        case 26:
                        case 27:
                        case 28:
                        case 29:
                        case 30:
                            day += 1;
                            break;
                        case 31:
                            if (month == 12){
                                day = 1;
                                month = 1;
                                if (year == 0)
                                    error = 1;
                                else if (year == -1)
                                    year += 2;
                                else
                                    year += 1;   
                            }else{
                                day = 1;
                                month += 1;
                            }
                            break;
                        default:
                            error = 1;
                            break;
                    }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                switch (day)
                    {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 11:
                        case 12:
                        case 13:
                        case 14:
                        case 15:
                        case 16:
                        case 17:
                        case 18:
                        case 19:
                        case 20:
                        case 21:
                        case 22:
                        case 23:
                        case 24:
                        case 25:
                        case 26:
                        case 27:
                        case 28:
                        case 29:
                            day += 1;
                            break;
                        case 30:
                            day = 1;
                            month += 1;
                            break;
                        default:
                            error = 1;
                            break;
                    }
                break;    
            case 2:
                if (year % 4 == 0 && ((year % 400 == 0) || !(year % 100 == 0)))
                {
                    switch (day)
                    {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 11:
                        case 12:
                        case 13:
                        case 14:
                        case 15:
                        case 16:
                        case 17:
                        case 18:
                        case 19:
                        case 20:
                        case 21:
                        case 22:
                        case 23:
                        case 24:
                        case 25:
                        case 26:
                        case 27:
                        case 28:
                            day += 1;
                            break;
                        case 29:
                            day = 1;
                            month += 1;
                            break;
                        default:
                            error = 1;
                            break;
                    }
                }else{
                    switch (day)
                    {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 11:
                        case 12:
                        case 13:
                        case 14:
                        case 15:
                        case 16:
                        case 17:
                        case 18:
                        case 19:
                        case 20:
                        case 21:
                        case 22:
                        case 23:
                        case 24:
                        case 25:
                        case 26:
                        case 27:
                            day += 1;
                            break;
                        case 28:
                            day = 1;
                            month += 1;
                            break;
                        default:
                            error = 1;
                            break;
                    }
                }
                break;
            default:
                error = 1;
                break;  
        }
    if (error || year == 0)
        printf("\nInvalid date\n");
    else
        printf(" %02d:%02d:%04d\n", day, month, year);
    return 0;
}
