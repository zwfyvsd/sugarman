void init_print(){
    int init_print_i,init_print_j;
    printf("===Sugar map===\n");
    for (init_print_i=0;init_print_i<size_x;init_print_i++){
        for (init_print_j=0;init_print_j<size_y;init_print_j++){
            printf("%d ",map[init_print_i][init_print_j].sugar);
        }
        printf("\n");
    }
    printf("\n");
    for (init_print_i=0;init_print_i<man_number;init_print_i++){
        printf("===Sugar man %d===\n",init_print_i);
        printf("Location: (%d, %d)\n",sugarman[init_print_i].location.x,sugarman[init_print_i].location.y);
        printf("Characteristics: \n");
        printf("    Sight: %d\n",sugarman[init_print_i].characteristics.sight);
        printf("    Food consumption: %d\n",sugarman[init_print_i].characteristics.food_consumption);
        printf("    Reproducing speed : %d\n\n",sugarman[init_print_i].characteristics.reproducing_speed);
    }
    printf("############\n\n\n");
    return;
}

