#include <stdio.h>

int main(void) {
 
 typedef struct Movies Movies;
 struct Movies {
   double rating;
   int boxoffice;
   char grade;
 };
 Movies movie1 = {4.5, 3, 'B'};
 printf("Movies1\n");
 printf("------\n");
 printf("Rating : %.1f\n", movie1.rating);
 printf("boxoffice : %i\n", movie1.boxoffice);
 printf("Movie Grade : %c", movie1.grade);

Movies ChefMax;
ChefMax.boxoffice = 2;
ChefMax.rating = 'D';

printf("ChefMax\n");
printf("Rating : %.1f\n", ChefMax.rating);
printf("boxoffice : %i\n", ChefMax.boxoffice);

}