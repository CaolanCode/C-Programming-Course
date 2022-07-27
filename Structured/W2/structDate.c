
#include <stdio.h>

typedef enum month{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sept, Oct, Nov, Dec} month;
typedef struct date{month m; int d;} date;
int total_days, i;

void printday(date* dt){
	switch(dt-> m){
		case Jan:
			printf("January %d", dt->d);
			total_days = 31;
			break;
		case Feb:
			printf("February %d", dt->d);
			total_days = 28;
			break;
		case Mar:
			printf("March %d", dt->d);
			total_days = 31;
			break;
		case Apr:
			printf("April %d", dt->d);
			total_days = 30;
			break;
		case May:
			printf("May %d", dt->d);
			total_days = 31;
			break;
		case Jun:
			printf("June %d", dt->d);
			total_days = 30;
			break;
		case Jul:
			printf("July %d", dt->d);
			total_days = 31;
			break;
		case Aug:
			printf("August %d", dt->d);
			total_days = 31;
			break;
		case Sept:
			printf("September %d", dt->d);
			total_days = 30;
			break;
		case Oct:
			printf("October %d", dt->d);
			total_days = 31;
			break;
		case Nov:
			printf("November %d", dt->d);
			total_days = 30;
			break;
		case Dec:
			printf("December %d", dt->d);
			total_days = 31;
			break;
		default:
			printf("An error has occurred");
	}
}

date* nextday(date* dt){
	if(dt->d==total_days){
		// last day of the month
		dt->d = (dt->d + 1) % total_days;
		// last month of the year
		dt->m = (dt->m + 1)%12;
	} else 
		// if day is not at the end of the month
		dt->d = dt->d + 1;
	return dt;
}

int main(){
	date date1 = {Jan, 1};
	date date2 = {Feb, 28};
	date date3 = {Mar, 14};
	date date4 = {Oct, 31};
	date date5 = {Dec, 31};
	date dates[] = {date1, date2, date3, date4, date5};

	for(i=0; i<5;i++){
		printf("Date is ");
		printday(&dates[i]);
		printf("\nNext day is ");
		nextday(&dates[i]);
		printday(&dates[i]);
		printf("\n\n");
	}
	return 0;
}
