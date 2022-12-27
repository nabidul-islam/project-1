#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "splash.h"
#include "login.h"
#include "menu.h"

int main (void)
{
    system("clear");
    splash();
    sleep(5);
    login();
    return 0;
}