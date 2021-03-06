/*#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LUCKY_NUMBER 7
#define MAX_WHITE_BALL 59
#define MAX_POWER_BALL 39


void checkwhiteballs(int balls[5], int control) 
{ 
    int last = balls[control]; 
 
    for (int i = 0; i < control; i++){ 
 
        if (last == balls[i]){ 
        balls[control] = whiteballs_computer_generated(); 
        break; 
        } 
    } 
}

int whiteballs_computer_generated()
{
return rand()%MAX_WHITE_BALL+1;
}
int powerball_computer_generated()
{
return rand()%MAX_POWER_BALL+1;
}


static int my_sort_func(const void* p1, const void* p2)
{
    int v1 = *((int *) p1);
    int v2 = *((int *) p2);
    if(v1 < v2)
    {
	return -1;
    }
    else if(v1 > v2)
    {
	return 0;
    }
	else
	{
		return 0;
	}
}


int calculate_result(int white_balls[5], int power_ball)
{
  for (int i=0; i<5; i++)
    {
      if ((white_balls[i] < 1) || (white_balls[i] > MAX_WHITE_BALL))
	{
	  return -1;
	}
    }
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 5a4d02c012a4a5e1eddf77935ccadb7c8268df9b
    
	// lottery ball numbers are always shown sorted
    qsort(white_balls, 5, sizeof(int), my_sort_func);
	// Here should be typed a function to calculate the probability
	
//	printf("Your sorted numbers: \n");

//	for (int i = 0; i < 5; i++) {
	//	printf("%d ", white_balls[i]);
	//}

	//printf("The power ball: %d \n", power_ball);

<<<<<<< HEAD
    return 0;
=======
    //return 0;
=======
  
  // lottery ball numbers are always shown sorted
  qsort(white_balls, 5, sizeof(int), my_sort_func);
  // Here should be typed a function to calculate the probability
  return 0;
>>>>>>> 929da4682aebe802d0cf910c50729ee24da3b867
}

void showing_results(int white_balls[5], int power_ball)
{
    printf("Your sorted numbers: \n");
    for (int i = 0; i < 5; i++){
        printf("%d ", white_balls[i]);
    }
    printf("The power ball: %d \n", power_ball);
>>>>>>> 5a4d02c012a4a5e1eddf77935ccadb7c8268df9b
}

void lottery_numbers_simulation(){

	int w_balls[5];
	int p_ball;
	int i, k;

	for(i = 1; i <= 5; i++)
		w_balls[i] = whiteballs_computer_generated();

	p_ball = powerball_computer_generated();

	for(i=1; i <= 5; i++){
		for(k=1; k<= 5; k++){
			if(i!=k){
				if(w_balls[i] == w_balls[k]){
					w_balls[i] = whiteballs_computer_generated();
				}
			}
		}
		printf("&d", w_balls[i]);
	}
}


int main(int argc, char** argv)
{
    int balls[6];
    int count_balls = 0;
    bool favourite = false; // this sould be a bool

    for (int i=1; i<argc;i++)
    {
        goto usage_error;
    }
    
	if (6 != count_balls)
	{
 
		for (int i = 0; i < 5; i++){
		balls[i] = whiteballs_computer_generated();
                checkwhiteballs(balls, i); 
		}
		balls[5] = powerball_computer_generated(); // Power ball
		printf("Your numbers are: ");
		for (int i = 0; i < 5; i++){
			printf("%d ", balls[i]);
		}
		printf("\nAnd the power ball:");
		printf(" %d\n", balls[5]);
	}
    // the powerball is always the last one given
    int power_ball = balls[5];
    lottery_numbers_simulation();
    int result = calculate_result(balls, power_ball);
    showing_results(balls,power_ball);
    // calculate result can return -1 if the ball numbers
    // are out of range
    
   
    if(result < 0)
    {
        goto usage_error;
    }
    
    
    if (LUCKY_NUMBER == power_ball)
    {
	    result = result * 2;
    }
    
    if(favourite)
    {
        result = result * 2;
    }

    printf("%d percent chance of winning\n", result);

    return 0;
    
	usage_error:
    printf("Usage: %s [-favourite] (5 white balls) power_ball\n", argv[0]);
    return -1;
}*/

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LUCKY_NUMBER 7
#define MAX_WHITE_BALL 59
#define MAX_POWER_BALL 39


void checkwhiteballs(int balls[5], int control) 
{ 
    int last = balls[control]; 
 
    for (int i = 0; i < control; i++){ 
 
        if (last == balls[i]){ 
        balls[control] = whiteballs_computer_generated(); 
        break; 
        } 
    } 
}

int whiteballs_computer_generated()
{
return rand()%MAX_WHITE_BALL+1;
}
int powerball_computer_generated()
{
return rand()%MAX_POWER_BALL+1;
}


static int my_sort_func(const void* p1, const void* p2)
{
    int v1 = *((int *) p1);
    int v2 = *((int *) p2);
    if(v1 < v2)
    {
	return -1;
    }
    else if(v1 > v2)
    {
	return 0;
    }
	else
	{
		return 0;
	}
}


int calculate_result(int white_balls[5], int power_ball)
{
  for (int i=0; i<5; i++)
    {
      if ((white_balls[i] < 1) || (white_balls[i] > MAX_WHITE_BALL))
	{
	  return -1;
	}
    }
  
  // lottery ball numbers are always shown sorted
  qsort(white_balls, 5, sizeof(int), my_sort_func);
  // Here should be typed a function to calculate the probability
  return 0;
}


void lottery_numbers_simulation(){

	int w_balls[5];
	int p_ball;
	int i, j;

	for(i = 1; i <= 5; i++)
		w_balls[i] = whiteballs_computer_generated();

	p_ball = powerball_computer_generated();

	for(i=1; i <= 5; i++){
		for(j=1; j<= 5; j++){
			if(i!=j){
				if(w_balls[i] == w_balls[j]){
					w_balls[i] = whiteballs_computer_generated();
				}
			}
		}
		printf("&d", w_balls[i]);
	}
}

void showing_results(int white_balls[5], int power_ball)
{
    printf("The numbers of the white balls sorted: \n");
    for (int i = 0; i < 5; i++){
        printf("%d ", white_balls[i]);
    }
    printf("The power ball: %d \n", power_ball);
}


int main(int argc, char** argv)
{
    int balls[6];
    int count_balls = 0;
    bool favourite = false; // this sould be a bool

    for (int i=1; i<argc;i++)
    {
        goto usage_error;
    }
    
	if (6 != count_balls)
	{
 
		for (int i = 0; i < 5; i++){
		balls[i] = whiteballs_computer_generated();
                checkwhiteballs(balls, i); 
		}
		balls[5] = powerball_computer_generated(); // Power ball
		printf("Your numbers are: ");
		for (int i = 0; i < 5; i++){
			printf("%d ", balls[i]);
		}
		printf("\nAnd the power ball:");
		printf(" %d\n", balls[5]);
	}
    // the powerball is always the last one given
    int power_ball = balls[5];
    
	

    int result = calculate_result(balls, power_ball);
    
    // calculate result can return -1 if the ball numbers
    // are out of range
    
   
    if(result < 0)
    {
        goto usage_error;
    }
    
    
    if (LUCKY_NUMBER == power_ball)
    {
	    result = result * 2;
    }
    
    if(favourite)
    {
        result = result * 2;
    }

    printf("\n--- The lottery numbers ---\n");
    lottery_numbers_simulation();
    printf("%d percent chance of winning\n", result);

    return 0;
    
	usage_error:
    printf("Usage: %s [-favourite] (5 white balls) power_ball\n", argv[0]);
    return -1;
}
