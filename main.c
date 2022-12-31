#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>


struct user_data
{
    char first_name[100];
    char last_name[100];
    char user_name[30];
    char pass[20];

};

struct movie_tic_info
{
    char movie_name[100];
    int movie_date;
    char movie_hall[30];
    char movie_time[20];
};


#include "splash.h"
#include "welcome.h"
#include "login.h"
#include "signup.h"
#include "menu.h"
#include "submenu.h"



int main (void)
{
    system("clear");

    splash();
    sleep(2);
    system("clear");

    welcome();

    printf("\n\n");
    int e = 0;
    while (e <= 4)
    {
        printf("\t\t\t\t\t\tPress 1 to SIGN IN!\n");
        printf("\t\t\t\t\t\tPress 2 to SIGN UP!\n");
        printf("\t\t\t\t\t\tPress 3 to Exit!\n");

        int check;
        printf("\n\n\t\t\t\t\t\tEnter your Choose > ");
        scanf("%d", &check);

        if(check == 1){
            system("clear");
            login();
            break;
        } else if(check == 2){
            system("clear");
            signup();
            break;
        } else if(check == 3){
            printf("\n\n\t\t\t\t\t\tExiting program!\n\n");
            exit(EXIT_SUCCESS);
        } else {
            system("clear");
            printf("\t\t\t\t\t\tWorng input!\n\t\t\t\t\t\t\ttry again....\n\n");
        }
    }

    
    system("clear");
    
    printf("\n");
    menu();

    return 0;
}