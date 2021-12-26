// Functions and recursions

#include <stdio.h>
void display(); /* Function Prototype */

int main()
{
    int a;
    printf("Initializing display function\n");
    display(); /* Function Call */  // order of execution will be preserved
    printf("Display function finished its work\n");
    return 0;
}

void display(){ /* Function Definition */
    printf("This is display\n");
}