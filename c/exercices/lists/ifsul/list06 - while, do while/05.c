#include <stdio.h>
#include <stdbool.h>

/**
 * Calculates the length of a string.
 * 
 * @param str The string to calculate the length of.
 * @return The length of the string.
 */
int strlen(char *str) {
  int i = 0;

  // '\0' is the null character
  while (str[i] != '\0') 
    i++;

  return i;
}


/**
 * Validates user information.
 * 
 * This function reads user information and validates it according to the following rules:
 * - Name: must have more than 3 characters.
 * - Age: must be between 0 and 150.
 * - Salary: must be greater than zero.
 * - Sex: must be 'f' or 'm'.
 * - Marital status: must be 's', 'c', 'v', or 'd'.
 * 
 * @param none
 * @return none
 * 
 * @note This function assumes that the user information is being read from the standard input.
 */
int main() {
  double age, salary;
  char name[50], genre, marital_status;
  bool hasErrors = false;

  printf("\nNome | Idade | Salario | Sexo | Estado Civil: \n");
  scanf("%s %d %lf %c %c", &name, &age, &salary, &genre, &marital_status);

  do {
    if(strlen(name) < 3) {
      hasErrors = true;
      printf("\nNome invalido! Digite novamente: ");
      scanf("%s", &name);
    }

    if(age < 0 || age > 150) {
      hasErrors = true;
      printf("\nIdade invalida! Digite novamente: ");
      scanf("%d", &age);
    }

    if(salary < 0) {
      hasErrors = true;
      printf("\nSalario invalido! Digite novamente: ");
      scanf("%lf", &salary);
    }

    if(genre != 'f' || genre != 'm') {
      hasErrors = true;
      printf("\nSexo invalido! Digite novamente: ");
      scanf("%c", &genre);
      fflush(stdin);
    }
    
    if(marital_status != 's' || marital_status != 'c' ||  marital_status != 'v' || marital_status != 'd') {
      hasErrors = true;
      printf("\nEstado civil invalido! Digite novamente: ");
      scanf("%c", &marital_status);
      fflush(stdin);
    }

    hasErrors = false;
  } while (hasErrors);

  return 0;
}