#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date *today) {
    scanf("%d", &(*today).year);
    scanf("%d", &(*today).month);
    scanf("%d", &(*today).day);

}

struct date advanceDay(struct date today){
    if ((today.month==1 || today.month==3 || today.month==5 || today.month==7 || today.month==8 || today.month==10) && today.day==31){
        today.day=1;        
        today.month =today.month +1;
    }else if ((today.month==4 || today.month==6 || today.month==9 || today.month==11) && today.day==30){
        today.day=1;        
        today.month =today.month + 1;
    }else if(today.month==2 && today.day==28){
        today.day=1;        
        today.month =today.month + 1;
    }else if(today.month==12 && today.day==31){
        today.day=1;        
        today.month = 1;
        today.year = today.year +1;
    }else{
        today.day=today.day + 1;
    }
return today;
}



void printDate(struct date today) {
    printf("%02d/%02d/%d\n", today.month, today.day, today.year);
}