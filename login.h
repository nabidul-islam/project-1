void login(void){

    char user_name[100], 
    pass[100];

    FILE *log;
    log = fopen("login.txt", "r");

    char check[100];
    fscanf(log, "%s", check);

    FILE *log_check;
    log_check = fopen("check_user_pass.txt", "w");
    
    printf("\t\t\t\t\t\t\t\t\tLOG IN\n");
    printf("\n\n");

    printf("\t\t\t\t\t\t\tUser Name [ ");
    scanf(" %s", &user_name);
    fprintf(log_check ,"%s", user_name);

    printf("\n");

    printf("\t\t\t\t\t\t\tPassword [ ");
    scanf(" %s", &pass);
    fprintf(log_check ,"%s", pass);
    printf("\n");

    fclose(log_check);

    log_check = fopen("check_user_pass.txt", "r");

    char temp[100]; 
    fscanf(log_check, "%s", temp);

    while (fopen("login.txt", "r"))
    {
        if(strcmp(temp,check) == 0 && strcmp(temp,check)==0){
            printf("Login successfull\n");
            system("clear");
            break;

        } else {
            system("clear");
            printf("\t\t\t\t\t\t\tWrong Password or Username! \n\t\t\t\t\t\t\t\tPlease try again...\n\n");
            login();
            break;
        }
        
    }
    

    fclose(log_check);
    fclose(log);
}