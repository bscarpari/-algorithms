#include <stdio.h>
#include <string.h>

int main() {
	int employee_number, kids_number, monthly_worked_hours;
	float hour_value, salary = 0, bonusSalary;
	char haveKids[1];
	
	printf("\nWhat's your employee number? ");
	scanf("%i", &employee_number);	
		
	printf("\nWhat's your hour value? ");
	scanf("%f", &hour_value);
	
	printf("\nHow many hours you worked in this month? ");
	scanf("%i", &monthly_worked_hours);
	
	printf("\nDo you have childrens above of 14 years (y/n)? ");
	scanf("%s", &haveKids);	
	
	if(strcmp(haveKids, "y") == 0) {
		float bonusValue;

		printf("\nHow many childrens do you have? ");
		scanf("%i", &kids_number);

		salary = (monthly_worked_hours * hour_value);
		
		bonusValue = salary * (0.10 * kids_number);
		
		salary = salary + bonusValue;
	} else {
		salary = monthly_worked_hours * hour_value;
	}
	
	printf("\nYour salary is: %2.f", salary);
	
	return 0;
}

