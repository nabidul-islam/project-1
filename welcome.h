void welcome(void){

    int x, y;
    char text1[] = "\n\n\t\t\t\t\t\t\t Welcome ";
    char text2[] = "\n\t\t\t\t\t\t\t    To ";
    char text3[] = "\n\t\t\t\t\t\tMovie_Ticket_Booking_System ";

    printf("\n\n");
    for (x = 0; text1[x] != NULL; x++) {
        printf("%c", text1[x]);
        for (y = 0; y <= 9999999; y++){}
    }

    printf("\n");
    for (x = 0; text2[x] != NULL; x++) {
        printf("%c", text2[x]);
        for (y = 0; y <= 9999999; y++){}
    }

    printf("\n");
    for (x = 0; text3[x] != NULL; x++) {
        printf("%c", text3[x]);
        for (y = 0; y <= 9999999; y++){}
    }
    printf("\n\n");
}