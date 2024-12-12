#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "main.h"

int main()
{
    while(1){
        char ch;
        printf("appuyer sur une touche \n");
        ch = getch();
        printf("vous avez appuyer sur la touche  %c\n", ch);
        Sleep(1);

        if(ch == 'z'){
            // Move backward (old position)
        } 
        if(ch == 'q'){
            // Move to the left
        }
        if(ch == 'd'){
            // Move to the right
        }
        if(ch  == 'l'){
            // Return to the main menu
            //break;
        }
    }
    
}