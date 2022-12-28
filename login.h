login(){

    char user_name_check[100], 
    pass_check[100];

    FILE *log;
    log = fopen("login.txt", "r");
    
    char check[100];

    printf("\t\t\t\t\t\t\t\tLOG IN\n");
    printf("\n\n");

    printf("\t\t\t\t\t\tUser Name [ ");
    scanf(" %s", &user_name_check);
    printf("\n");

    printf("\t\t\t\t\t\tPassword [ ");
    scanf(" %s", &pass_check);
    printf("\n");

    if(strcmp(user_name_check, user_name) && strcmp(pass_check, pass)){
        printf("login successfull\n");
    } else {
        printf("wrong password or username!");
    }

    fclose(log);
    
}