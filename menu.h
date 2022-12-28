void menu(void){
    int n;
    printf("\t\t\t\t\t\t\t\tSelect Your Theatre\n\n\n");

    printf("1) Bashundhara Shopping Mall, Panthapath\n");
    printf("Show Motion Limited Level 8, Bashundhara City 13/3 ka, Panthapath, Tejgaon\n\n");

    printf("2) Shimanto Shambhar, Dhanmondi 2\n");
    printf("Shimanto Shamvar Road no 2, Dhanmondi, Dhaka 1203, Bangladesh.\n\n");

    printf("3) Star Cineplex, SKS Tower, Mohakhali\n");
    printf("SKS Tower, Mohakhali, Dhaka 1205, Bangladesh\n\n");

    printf("4) Star Cineplex, Sony Square\n");
    printf("Level-4, Plot-1, Road-2, Block-D, Section-2, Mirpur, Dhaka-1216.\n\n");

    printf("5) Star Cineplex, Bangabandhu Military Museum\n");
    printf("Bangabandhu Military Museum, Bijoy Shoroni, Dhaka- 1215.\n\n");

    printf("6) Star Cineplax, Bali Arcade\n");
    printf("Level-9, Bali Arcade, 227 Nawab Sirajuddaula Road. Chawkbazar, Chattogram.\n\n");

    printf("Press 0 to exit the program!\n");

    printf("Choose Your Theatre : ");
    scanf("%d", &n);

    system("clear");

    if(n == 1){
        printf("Bashundhara Shopping Mall, Panthapath\n");
    }

    else if(n == 2){
        printf("Shimanto Shambhar, Dhanmondi 2\n");
    }

    else if(n == 3){
        printf("Star Cineplex, SKS Tower, Mohakhali\n");
    }
    else if(n == 4){
        printf("Star Cineplex, Sony Square\n");
    }
    else if(n == 5){
        printf("Star Cineplex, Bangabandhu Military Museum\n");
    }
    else if(n = 6){
        printf("Star Cineplax, Bali Arcade\n");
    } 
    else if(n == 0){
        printf("Exiting program!\n")
        exit(EXIT_SUCCESS);
    } else {
        printf("Wrong Input!\n\n")
        menu();
    }
}