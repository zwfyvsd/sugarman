void print(){
    int print_i,print_j;
    printf("===Sugar map===\n");
    for (print_i=0;print_i<size_x;print_i++){
        for (print_j=0;print_j<size_y;print_j++){
            printf("%d ",map[print_i][print_j].sugar);
        }
        printf("\n");
    }
    printf("\n");
    for (print_i=0;print_i<man_number;print_i++){
        printf("===Sugar man %d===\n",print_i);
        printf("Location: (%d, %d)\n",sugarman[print_i].location.x,sugarman[print_i].location.y);
        printf("Weight: %d\n\n",sugarman[print_i].weight);
    }
    printf("============\n\n\n");
    return;
}

