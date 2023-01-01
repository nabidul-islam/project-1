void submenu(struct movie_tic_info m1) {
    int movie_num, year, month;
    printf("\t\t\t\t\t\t\t\tSelect Date \n\n");
    
    time_t t = time(NULL);
    struct tm time = * localtime( &t);
    month = time.tm_mon + 1;
    year = time.tm_year + 1900;
    printf("\t\t\t\t\t\t");
    for (int i = time.tm_mday; i <= time.tm_mday; i++) {
        if (i <= 31) {
            printf("%5d", time.tm_mday++);
        } else {
            break;
        }
        if (i == 7 || i == 14 || i == 21 || i == 28){
            printf("\n");
            printf("\t\t\t\t\t\t");
        }
    }
    printf("\n\n");
    printf("\t\t\t\t\t\t\tEnter Date : ");
    scanf("%d", &m1.movie_date);


    system("clear");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d/%d/%d\n", m1.movie_date, month , year);



    printf("\t\t\t\t\t\t\t\tSelect Movie\n\n\n");

    printf("\t\t\t\t================================================================================\n");
    printf("\t\t\t\t||\t1) Avatar: The Way of Water (3D)                                     ||\n");
    printf("\t\t\t\t||\t                                                                     ||\n");
    printf("\t\t\t\t||\t2) Avatar: The Way of Water (2D)                                     ||\n");
    printf("\t\t\t\t||\t                                                                     ||\n");
    printf("\t\t\t\t||\t3) Black Panther Wakanda Forever (2D)                                ||\n");
    printf("\t\t\t\t||\t                                                                     ||\n");
    printf("\t\t\t\t||\t4) Damal(2D)                                                         ||\n");
    printf("\t\t\t\t||\t                                                                     ||\n");
    printf("\t\t\t\t||\t5) Black Adam                                                        ||\n");
    printf("\t\t\t\t||\t                                                                     ||\n");
    printf("\t\t\t\t||\tPress 0 to exit the program!                                         ||\n");
    printf("\t\t\t\t================================================================================\n\n");

    printf("\t\t\t\tEnter your Choice : ");
    scanf("%d", &movie_num);

    if(movie_num == 1){
        system("clear");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d/%d/%d\n", m1.movie_date, month , year);
        strcpy(m1.movie_name, "Avatar: The Way of Water (3D)");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        submenu_footer(m1);
    }    
    else if(movie_num == 2){
        system("clear");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : Avatar: The Way of Water (2D)\n");
        strcpy(m1.movie_name, "Avatar: The Way of Water (2D)");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        submenu_footer(m1);
    }
    else if(movie_num == 3){
        system("clear");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : Black Panther Wakanda Forever (2D)\n");
        strcpy(m1.movie_name, "Black Panther Wakanda Forever (2D)");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        submenu_footer(m1);
    }   
    else if(movie_num == 4){
        system("clear");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        strcpy(m1.movie_name, "Damal(2D)");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        submenu_footer(m1);
    }
    else if(movie_num == 5){
        system("clear");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        strcpy(m1.movie_name, "Avatar: Black Adam");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        submenu_footer(m1);
    }
    else {
        printf("Wrong input!\n");
        sleep(2);
        system("clear");
        submenu(m1);
    }

    printf("\n");
    
}
