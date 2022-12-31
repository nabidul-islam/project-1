void submenu(void) {
    struct movie_tic_info m1;
    int movie_num;
    printf("Select Date ");

    time_t t = time(NULL);
    struct tm time = * localtime( & t);
    //   printf("date - %d\n", time.tm_mday);  

    for (int i = time.tm_mday; i <= time.tm_mday; i++) {
        if (i <= 31) {
            printf("\t%d ", time.tm_mday++);
        } else {
            break;
        }
    }
    printf("\n");
    printf("Enter Date : ");
    scanf("%d", &m1.movie_date);

    printf("Select Movie\n");
    printf("1) Avatar: The Way of Water (3D)");
    printf("2) Avatar: The Way of Water (2D)");
    printf("3) Black Panther Wakanda Forever (2D)");
    printf("4) Damal(2D)");
    printf("5) Black Adam\n\n");

    printf("Enter your Choice : ");
    scanf("%d", &movie_num);

    if(movie_num == 1)
        printf("Avatar: The Way of Water (3D)");
    else if(movie_num == 2)
        printf("Avatar: The Way of Water (2D)");
    else if(movie_num == 3)
        printf("Black Panther Wakanda Forever (2D)");
    else if(movie_num == 4)
        printf("Damal(2D)");
    else if(movie_num == 5)
        printf("Black Adam\n\n");
    else {
        printf("Wrong input!\n");
        sleep(2);
        system("clear");
        submenu();
    }
    
    printf("Select Hall\n");
    printf("Hall 1");
    printf("Hall 2");
    printf("Hall 3");

    printf("Select Show Time");

    char seat_type[10];

    printf("Select Seat Type\n\n");
    printf("Regular\n BDT 400 Tk\n");
    printf("Premium\n BDT 450 Tk\n");
    printf("Enter your choose : ");
    scanf("%s", seat_type);

    printf("\n");

    int tic_quan;

    printf("Ticket Quantity\n Max 10 Tickets\n");
    scanf("%d", &tic_quan);

    printf("Select Seats\n\n");
    
    


}