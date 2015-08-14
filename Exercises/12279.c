/*
    read two integers representing time and duration
    output time of end of event
    input: 1245 345
    out: Start time is 1245. Duration is 345. End time is 1630.
 */

#include<stdio.h>

int main(void)
{
    int tim, dur;
    // StartHour, StartMinute, DurationHour, DurationMinute
    int shour, sminu, dhour, dminu;     
    // EndHour, EndMinute
    int ehour, eminu;
    printf("\nEnter start time and duration: ");
    scanf("%d %d",&tim, &dur);

    shour = tim/100;
    sminu = tim%100;
    dhour = dur/100;
    dminu = dur%100; 
    
    ehour = ((shour+dhour)%24)+((sminu+dminu)/60);
    eminu = (sminu+dminu)%60;
    
    printf("\nStart time is %d. Duration is %d. End time is %d%02d.\n",tim,dur,ehour,eminu);
    return 0;
}

