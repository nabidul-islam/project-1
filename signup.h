void signup(void) {

    FILE *log;
    log = fopen("login.txt", "w");
    struct user_data l;

    
    printf("\t\t\t\t\t\t\t\t\tSIGN UP\n\n");

    printf("\t\t\t\t\t\t\tFirst Name : ");
    scanf("%s", &l.first_name);

    printf("\t\t\t\t\t\t\tLast Name : ");
    scanf("%s", &l.last_name);

    printf("\t\t\t\t\t\t\tUser Name : ");
    scanf("%s", &l.user_name);
    fprintf(log, "%s", l.user_name);

    printf("\t\t\t\t\t\t\tPassword : ");
    scanf("%s", &l.pass);
    fprintf(log, "%s", l.pass);
    
    fclose(log);

    system("clear");
    
    printf("\nRegistration Successfull!\n");
    printf("\nConfirming details.......\n");
    sleep(2);
    login();
}