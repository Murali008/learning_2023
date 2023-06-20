#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} TimePeriod;

TimePeriod getTimePeriod() {
    TimePeriod period;
    
    printf("Enter the time period (hours minutes seconds): ");
    scanf("%d %d %d", &(period.hours), &(period.minutes), &(period.seconds));
    
    return period;
}

TimePeriod calculateTimeDifference(TimePeriod start, TimePeriod end) {
    TimePeriod difference;
    
    
    int startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endTimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;
    int diffInSeconds = endTimeInSeconds - startTimeInSeconds;
    
    
    difference.hours = diffInSeconds / 3600;
    difference.minutes = (diffInSeconds % 3600) / 60;
    difference.seconds = (diffInSeconds % 3600) % 60;
    
    return difference;
}

int main() {
    TimePeriod startTime, endTime, difference;
    
    printf("Enter the start time period:\n");
    startTime = getTimePeriod();
    
    printf("\nEnter the end time period:\n");
    endTime = getTimePeriod();
    
    difference = calculateTimeDifference(startTime, endTime);
    
    printf("\nTime difference: %d hours %d minutes %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);
    
    return 0;
}