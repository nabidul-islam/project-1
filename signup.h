signup() {
    char first_name[20], 
    last_name[20],
    pass[100], 
    user_name[100];

    FILE *log;
    log = fopen("login.txt", "w");

    
    printf("\t\t\t\t\t\t\t\tSIGN UP\n");

    printf("\t\t\t\t\t\tFirst Name : ");
    scanf("%s",&first_name);
    fprintf(log ," %s", first_name);

    printf("\t\t\t\t\t\tLast Name : ");
    scanf("%s", &last_name);
    fprintf(log ," %s", last_name);

    printf("\t\t\t\t\t\tUser Name : ");
    scanf("%s", &user_name);
    fprintf(log ," %s", user_name);

    printf("\t\t\t\t\t\tPassword : ");
    scanf("%s", &pass);
    fprintf(log ," %s", pass);

    fclose(log);

    system("clear");
    
    printf("\nRegistration Successfull!\n");
    printf("\nConfirming details.......\nWelcome, %s!\n\n", first_name);
    login(user_name, pass);
}