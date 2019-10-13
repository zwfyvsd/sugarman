void search_sugar(int search_sugar_man){
    struct{
        int left;
        int right;
        int top;
        int bottom;
    }search_sugar_boundary;
    struct{
        int x;
        int y;
    }search_sugar_location;
    int search_sugar_i,search_sugar_j;
    search_sugar_boundary.left=((sugarman[search_sugar_man].location.x-sugarman[search_sugar_man].characteristics.sight)>0)?(sugarman[search_sugar_man].location.x-sugarman[search_sugar_man]. characteristics.sight):0;
    search_sugar_boundary.right=((sugarman[search_sugar_man].location.x+sugarman[search_sugar_man]. characteristics.sight+1)<size_x)?(sugarman[search_sugar_man].location.x+sugarman[search_sugar_man]. characteristics.sight+1):size_x;
    search_sugar_boundary.top=((sugarman[search_sugar_man].location.y-sugarman[search_sugar_man].characteristics.sight)>0)?(sugarman[search_sugar_man].location.y-sugarman[search_sugar_man]. characteristics.sight):0;
    search_sugar_boundary.bottom=((sugarman[search_sugar_man].location.y+sugarman[search_sugar_man].characteristics.sight+1)<size_y)?(sugarman[search_sugar_man].location.y+sugarman[search_sugar_man]. characteristics.sight+1):size_y;
    map[sugarman[search_sugar_man].location.x][sugarman[search_sugar_man].location.y].occupied=0;
    search_sugar_location.x=sugarman[search_sugar_man].location.x;
    search_sugar_location.y=sugarman[search_sugar_man].location.y;
    for (search_sugar_i=search_sugar_boundary.left;search_sugar_i<search_sugar_boundary.right;search_sugar_i++){
        for (search_sugar_j=search_sugar_boundary.top;search_sugar_j<search_sugar_boundary.bottom;search_sugar_j++){
            if ((((search_sugar_i-sugarman[search_sugar_man].location.x)*(search_sugar_i-sugarman[search_sugar_man].location.x)+(search_sugar_j-sugarman[search_sugar_man].location.y)*(search_sugar_j-sugarman[search_sugar_man].location.y))<=(sugarman[search_sugar_man].characteristics.sight*sugarman[search_sugar_man].characteristics.sight))&&(map[search_sugar_i][search_sugar_j].occupied==0)&&(map[search_sugar_i][search_sugar_j].sugar>=map[search_sugar_location.x][search_sugar_location.y].sugar)){
                search_sugar_location.x=search_sugar_i;
                search_sugar_location.y=search_sugar_j;
            }
        }
    }
    sugarman[search_sugar_man].location.x=search_sugar_location.x;
    sugarman[search_sugar_man].location.y=search_sugar_location.y;
    map[sugarman[search_sugar_man].location.x][sugarman[search_sugar_man].location.y].occupied=1;
    return;
}

void proceed(){
    int proceed_i,proceed_j;
    for (proceed_i=0;proceed_i<man_number;proceed_i++){
        search_sugar(proceed_i);
        sugarman[proceed_i].weight+=map[sugarman[proceed_i].location.x][sugarman[proceed_i].location.y].sugar-sugarman[proceed_i].characteristics.food_consumption;
        map[sugarman[proceed_i].location.x][sugarman[proceed_i].location.y].sugar=0;
    }
    for (proceed_i=0;proceed_i<size_x;proceed_i++){
        for (proceed_j=0;proceed_j<size_y;proceed_j++){
            map[proceed_i][proceed_j].sugar+=map[proceed_i][proceed_j].growth;
        }
    }
    return;
}
