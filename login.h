void login(char user_name[100], char pass[100]){

    char user_name_check[100], 
    pass_check[100];

    FILE *log;
    log = fopen("login.txt", "r");
    


    printf("\t\t\t\t\t\t\t\tLOG IN\n");
    printf("\n\n");

    printf("\t\t\t\t\t\tUser Name [ ");
    scanf("%s", &user_name_check);
    printf("\n");

    printf("\t\t\t\t\t\tPassword [ ");
    scanf("%s", &pass_check);
    printf("\n");  

    
    
}