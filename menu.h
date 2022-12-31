void menu(void){
    int n;
    printf("\t\t\t\t\t\t\t\tSelect Your Theatre\n\n\n");

    printf("\t\t\t\t=======================================================================================\n");
    printf("\t\t\t\t||\t1) Bashundhara Shopping Mall, Panthapath                                     ||\n");
    printf("\t\t\t\t||\tShow Motion Limited Level 8, Bashundhara City 13/3 ka, Panthapath, Tejgaon   ||\n");
    printf("\t\t\t\t||\t                                                                             ||\n");
    printf("\t\t\t\t||\t2) Shimanto Shambhar, Dhanmondi 2                                            ||\n");
    printf("\t\t\t\t||\tShimanto Shamvar Road no 2, Dhanmondi, Dhaka 1203, Bangladesh.               ||\n");
    printf("\t\t\t\t||\t                                                                             ||\n");
    printf("\t\t\t\t||\t3) Star Cineplex, SKS Tower, Mohakhali                                       ||\n");
    printf("\t\t\t\t||\tSKS Tower, Mohakhali, Dhaka 1205, Bangladesh                                 ||\n");
    printf("\t\t\t\t||\t                                                                             ||\n");
    printf("\t\t\t\t||\t4) Star Cineplex, Sony Square                                                ||\n");
    printf("\t\t\t\t||\tLevel-4, Plot-1, Road-2, Block-D, Section-2, Mirpur, Dhaka-1216.             ||\n");
    printf("\t\t\t\t||\t                                                                             ||\n");
    printf("\t\t\t\t||\t5) Star Cineplex, Bangabandhu Military Museum                                ||\n");
    printf("\t\t\t\t||\tBangabandhu Military Museum, Bijoy Shoroni, Dhaka- 1215.                     ||\n");
    printf("\t\t\t\t||\t                                                                             ||\n");
    printf("\t\t\t\t||\t6) Star Cineplax, Bali Arcade                                                ||\n");
    printf("\t\t\t\t||\tLevel-9, Bali Arcade, 227 Nawab Sirajuddaula Road. Chawkbazar, Chattogram.   ||\n");
    printf("\t\t\t\t||\t                                                                             ||\n");
    printf("\t\t\t\t||\tPress 0 to exit the program!                                                 ||\n");
    printf("\t\t\t\t=======================================================================================\n\n");


    printf("\t\t\t\tChoose Your Theatre : ");
    scanf("%d", &n);

    system("clear");

    if(n == 1){
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre: Bashundhara Shopping Mall\n");
        submenu();
    } else if(n == 2){
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre: Shimanto Shambhar\n");
        submenu();
    } else if(n == 3){
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre: Star Cineplex, SKS Tower\n");
        submenu();
    } else if(n == 4){
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre: Star Cineplex, Sony Square\n");
        submenu();
    } else if(n == 5){
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre: Star Cineplex, BMM\n");
        submenu();
    } else if(n == 6){
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\tTheatre: Star Cineplax, Bali Arcade\n");
        submenu();
    } else if(n == 0){
        printf("Exiting program!\n");
        exit(EXIT_SUCCESS);
    } else {
        system("clear");
        printf("Wrong Input! try again...\n\n");
        menu();
    }
}