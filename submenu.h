void submenu(void) {
    int date;
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
    printf("Enter Date : ");
    scanf("%d", &date);

    printf("Select Movie(5)");
    printf("\tAvatar: The Way of Water (3D)");
    printf("\tAvatar: The Way of Water (2D)");
    printf("\tBlack Panther Wakanda Forever (2D)");
    printf("\tDamal(2D)");
    printf("\tBlack Adam");


}