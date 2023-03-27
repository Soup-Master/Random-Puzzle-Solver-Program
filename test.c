// Import all the needed libraries
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// The main fucntion that runs when you launch the program
int main(void)
{
    // Define all needed variables
    srand(time(NULL));
    int boc10 = 10;
    int boc7 = 0;
    int boc3 = 0;
    int move = 0;
    bool loop = false;

    // Repeat until the solution is found
    while(boc10 != 5 && boc7 != 5)
    {
        // Set other variables and loop
        loop = true;
        while(loop)
        {
            // Choose randomly a bocal to move, 10, 7 or 3
            move = rand() % 3;

            // If bocal 10 chosed an not empty
            if(move == 0 && boc10 != 0)
            {
                while(loop)
                {
                    move = rand() % 2;

                    // if move to bocal 7 and can pour
                    if(move == 0 && boc7 < 7)
                    {
                        while(boc7 < 7 && boc10 > 0)
                        {
                            boc7++;
                            boc10--;
                        }
                        move = 3;
                        loop = false;
                    }

                    // if move to bocal 3 and can pour
                    else if(move == 1 && boc3 < 3)
                    {
                        while(boc3 < 3 && boc10 > 0)
                        {
                            boc3++;
                            boc10--;
                        }
                        move = 3;
                        loop = false;
                    }

                }
            }

            // If bocal 7 chosed and not empty
            else if(move == 1 && boc7 != 0)
            {
                while(loop)
                {
                    move = rand() % 2;

                    // if move to bocal 10 and can pour
                    if(move == 0 && boc10 < 10)
                    {
                        while(boc10 < 10 && boc7 > 0)
                        {
                            boc10++;
                            boc7--;
                        }
                        move = 3;
                        loop = false;
                    }

                    // if move to bocal 3 and can pour
                    if(move == 1 && boc3 < 3)
                    {
                        while(boc3 < 3 && boc7 > 0)
                        {
                            boc3++;
                            boc7--;
                        }
                        move = 3;
                        loop = false;
                    }
                }
            }

            // If bocal 3 chosed and not empty
            else if(move == 2 && boc3 != 0)
            {
                while(loop)
                {
                    move = rand() % 2;
                    
                    // if move to bocal 10 and can pour
                    if(move == 0 && boc10 < 10)
                    {
                        while(boc10 < 10 && boc3 > 0)
                        {
                            boc10++;
                            boc3--;
                        }
                        move = 3;
                        loop = false;
                    }

                    // if move to bocal 7 and can pour
                    if(move == 1 && boc7 < 7)
                    {
                        while(boc7 < 7 && boc3 > 0)
                        {
                            boc7++;
                            boc3--;
                        }
                        move = 3;
                        loop = false;
                    }
                }
            }
        }
        // Print the changes each time the loop end
        printf("\n%d, %d, %d", boc10, boc7, boc3);
    }
    if(boc10 == 5)
    {
        boc7 = 5;
        boc3 = 0;
    }
    else
    {
        boc10 = 5;
        boc3 =0;
    }
    printf("\n%d, %d, %d\n", boc10, boc7, boc3);
    return 0;
}
