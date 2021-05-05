#include <stdio.h>
#include <cs50.h>

int main(void) {

    int S, E, Y;
    do {
        S = get_int("Start size:");
        }
        while (S < 9);
    
    do {
        E = get_int("End size:");
        }    
         while (E <= S);
        
    for (Y=0; E>S; Y++)  {
        S = S+(S/3)-(S/4);
                          }
    
    printf("Years: %i\n", Y);
    
}
