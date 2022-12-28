void login(void){
    char check,
    first_name[20], 
    last_name[20], 
    email[100], 
    pass[100], 
    user_name[100];

    char user_name_check[100], 
    pass_check[100];

    printf("Do you have a account? (y or n)\n");
    scanf("%c", &check);

    if (check == 'y' || check == 'Y')
    {
        printf("User Name [ ");
        scanf("%s", &user_name_check);
        printf("\n");
        printf("Enter Password [ ");
        scanf("%s", &pass_check);
        printf("\n");
        if(user_name_check == user_name && pass_check == pass){
        printf("Login Sucessfully!\n");
        } else
            printf("wrong password\n");
    } else if (check == 'n' || check == 'N')
    {
        printf("\t\t\t\t\t\t\t\tSIGN UP\n");

        printf("\t\t\t\t\t\tFirst Name ");
        scanf("%s", &first_name);
        printf("\t\t\t\t\t\tLast Name ");
        scanf("%s", &last_name);
        printf("\t\t\t\t\t\tEmail ");
        scanf("%s", &email);
        printf("\t\t\t\t\t\tUser Name ");
        scanf("%s", &user_name);
        printf("\t\t\t\t\t\tPassword ");
        scanf("%s", &pass);
    }

}