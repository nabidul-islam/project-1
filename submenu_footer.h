
void submenu_footer(struct movie_tic_info m1){

    // select hall part
    
    printf("\t\t\t\t\t\t\tSelect Hall\n\n");

    
    printf("\t\t\t\t\t\t\t1) Hall 1\n");
    printf("\t\t\t\t\t\t\t2) Hall 2\n");
    printf("\t\t\t\t\t\t\t3) Hall 3\n\n");
    printf("\t\t\t\t\t\tPress 0 to exit the program! \n\n");

    int movie_hall_n;
    printf("\t\t\t\t\t\t\tEnter your Choice : ");
    scanf("%d", &movie_hall_n);

    if (movie_hall_n == 1)
    {
        system("clear");
        strcpy(m1.movie_hall, "Hall 1");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHall    : %s\n", m1.movie_hall);
    } 
    else if(movie_hall_n == 2){
        system("clear");
        strcpy(m1.movie_hall, "Hall 2");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHall    : %s\n", m1.movie_hall);
    }
    else if(movie_hall_n == 3){
        system("clear");
        strcpy(m1.movie_hall, "Hall 3");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHall    : %s\n", m1.movie_hall);
    } 
    else if(movie_hall_n == 0){
        system("clear");
        printf("Exiting program!\n");
        sleep(1);
        exit(EXIT_SUCCESS);
    } 
    
    else{
        system("clear");
        printf("\t\t\t\t\t\t\t\tWrong Input!");
        submenu_footer(m1);
    }
    
    // select show time part

    printf("\t\t\t\t\t\t\tSelect Show Time\n\n");
    printf("\t\t\t\t\t\t\t1) 11:10 AM\n");
    printf("\t\t\t\t\t\t\t2) 03:15 PM\n");
    printf("\t\t\t\t\t\t\t3) 07:00 PM\n\n");
    printf("\t\t\t\t\t\tPress 0 to exit the program! \n\n");


    int show_time;
    printf("\t\t\t\t\t\t\tEnter your Choice : ");
    scanf("%d", &show_time);
    


    if (show_time == 1)
    {
        system("clear");
        strcpy(m1.movie_time, "11:10 AM");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHall    : %s\n", m1.movie_hall);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTime    : %s\n", m1.movie_time);
    } 
    else if(show_time == 2){
        system("clear");
        strcpy(m1.movie_time, "03:15 PM");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHall    : %s\n", m1.movie_hall);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTime    : %s\n", m1.movie_time);
    }
    else if(show_time == 3){
        system("clear");
        strcpy(m1.movie_time, "07:00 PM");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHall    : %s\n", m1.movie_hall);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTime    : %s\n", m1.movie_time);
    } 
    else if(show_time == 0){
        system("clear");
        printf("Exiting program!\n");
        sleep(1);
        exit(EXIT_SUCCESS);
    } 
    
    else{
        system("clear");
        printf("\t\t\t\t\t\t\t\tWrong Input!");
        submenu_footer(m1);
    }

    // select seat type part

    int seat_type;

    printf("\t\t\t\t\t\t\t\tSelect Seat Type\n\n");

    printf("\t\t\t\t\t\t\t1) Regular  BDT 400 Tk\n");
    printf("\t\t\t\t\t\t\t2) Premium BDT 450 Tk\n\n");
    printf("\t\t\t\t\t\tPress 0 to exit the program! \n\n");
    printf("\t\t\t\t\t\t\tEnter your choose : ");

    scanf("%d", &seat_type);

    if (seat_type == 1)
    {
        system("clear");
        strcpy(m1.movie_seat_type, "Regular");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHall    : %s\n", m1.movie_hall);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTime    : %s\n", m1.movie_time);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tSeatType: %s\n", m1.movie_seat_type);
    } 
    else if(seat_type == 2){
        system("clear");
        strcpy(m1.movie_seat_type, "Premium");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre : %s\n", m1.movie_theatre);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate    : %d\n", m1.movie_date);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMovie   : %s\n", m1.movie_name);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHall    : %s\n", m1.movie_hall);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTime    : %s\n", m1.movie_time);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tSeat Type : %s\n", m1.movie_seat_type);
    }
    else if(seat_type == 0){
        system("clear");
        printf("Exiting program!\n");
        sleep(1);
        exit(EXIT_SUCCESS);
    } 
    
    else{
        system("clear");
        printf("\t\t\t\t\t\t\t\tWrong Input!");
        submenu_footer(m1);
    }

    printf("\n");

    // ticket quantity

    int tic_quan;

    printf("\t\t\t\t\t\t\t\tTicket Quantity\n Max 10 Tickets\n");
    printf("\t\t\t\t\t\t\tEnter Quantity : ");
    scanf("%d", &tic_quan);

    system("clear");

    // Select Seats part

    printf("\t\t\t\t\t\t\t\tSelect Seats\n\n");
    printf("\t\t\t\t==============================================================================\n");
    printf("\t\t\t\t||-------------------------------Premium---------------------------------||\n");
    printf("\t\t\t\t||[n16][n15][n14][n13][n12][n11][n10][n9][n8][n7][n6][n5][n4][n3][n2][n1]||\n");
    printf("\t\t\t\t||[m12][m11]          [m10][m9][m8][m7][m6][m5][m4]          [m3][m2][m1]||\n");
    printf("\t\t\t\t||[i12][i11]          [i10][i9][i8][i7][i6][i5][i4]          [i3][i2][i1]||\n");
    printf("\t\t\t\t||[y12][y11]          [y10][y9][y8][y7][y6][y5][y4]          [y3][y2][y1]||\n");
    printf("\t\t\t\t||[z12][z11]          [z10][z9][z8][z7][z6][z5][z4]          [z3][z2][z1]||\n");
    printf("\t\t\t\t||-------------------------------Regular---------------------------------||\n");
    printf("\t\t\t\t||                    [h10][h9][h8][h7][h6][h5][h4]          [h3][h2][h1]||\n");
    printf("\t\t\t\t||                    [g10][g9][g8][g7][g6][g5][g4]          [g3][g2][g1]||\n");
    printf("\t\t\t\t||                    [f10][f9][f8][f7][f6][f5][f4]          [f3][f2][f1]||\n");
    printf("\t\t\t\t||                    [e10][e9][e8][e7][e6][e5][e4]          [e3][e2][e1]||\n");
    printf("\t\t\t\t||[d12][d11]          [d10][d9][d8][d7][d6][d5][d4]          [d3][d2][d1]||\n");
    printf("\t\t\t\t||[c12][c11]          [c10][c9][c8][c7][c6][c5][c4]          [c3][c2][c1]||\n");
    printf("\t\t\t\t||[b12][b11]          [b10][b9][b8][b7][b6][b5][b4]          [b3][b2][b1]||\n");
    printf("\t\t\t\t||[a12][a11]          [a10][a9][a8][a7][a6][a5][a4]          [a3][a2][a1]||\n");
    printf("\t\t\t\t||----------------------------THEATER SCREEN-----------------------------||\n");
    printf("\t\t\t\t===============================================================================\n");

    if(seat_type == 1){
        printf("\t\t\t\tSelect from regular seats.\n");
        printf("\t\t\t\tYou select %d Ticket, \n\t\t\t\t\tEnter %d Seats.\n", tic_quan, tic_quan);
        printf("\t\t\t\tEnter your choice : ");
        scanf("%s", m1.seats);
    }

    system("clear");

    char name[10];
    char number[12];
    printf("\t\t\t\t\t\t\t\t\tTicket For");
    printf("\n\n");

    printf("\t\t\t\t\t\t\t Name   : ");
    scanf("%s", name);
    printf("\n");
    printf("\t\t\t\t\t\t\t Number : ");
    scanf("%s", number);

    printf("\n\n");
    printf("Plase wait!!\n");
    printf("Confirming details.......\n");
    sleep(2);
    
    system("clear");

    // Tickets Summary part

    printf("\t\t\t\t\t\t\t\tTickets Summary\n\n\n");
    printf("\t\t\t\t===================================================\n");
    printf("\t\t\t\tName    : %s\n", name);
    printf("\t\t\t\tNumber  : %s\n", number);
    printf("\t\t\t\tTheatre : %s\n", m1.movie_theatre);
    printf("\t\t\t\tDate    :\n", m1.movie_date);
    printf("\t\t\t\tMovie   : %s\n", m1.movie_name);
    printf("\t\t\t\tHall    : %s\n", m1.movie_hall);
    printf("\t\t\t\tTime    : %s\n", m1.movie_time);
    printf("\t\t\t\tSeat Type : %s\n", m1.movie_seat_type);
    printf("\t\t\t\tTicket Quantity : %d\n", tic_quan);
    printf("\t\t\t\tSeats : %s\n", m1.seats);
    printf("\t\t\t\t===================================================\n\n");

    int suma;
    printf("Type 1 to comfirm your tictets.\n");
    printf("Type 2 to cencel the ticket.\n");
    printf("Type 0 to Exit the program!\n");

    scanf("%d", &suma);

    if (suma == 1)
    {
        printf("Confirming Tickets.......\n");
        sleep(1);
        printf("Your ticket is Confirmed\n");
        system("clear");
        printf("Thanks for using our softwere..\n");
        menu();
        
    } 
    else if(suma == 2){
        system("clear");
        printf("Try another movie....\n");
        sleep(1);
        menu();
        
    }
    else if(suma == 0){
        system("clear");
        printf("Exiting program!\n");
        sleep(1);
        exit(EXIT_SUCCESS);
    } 
    
    else{
        system("clear");
        printf("\t\t\t\t\t\t\t\tWrong Input!");
        submenu_footer(m1);
    }


}