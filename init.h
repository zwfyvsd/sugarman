void setup_map(){
	int setup_map_i,setup_map_j;
	for (setup_map_i=0;setup_map_i<size_x;setup_map_i++){
		for (setup_map_j=0;setup_map_j<size_y;setup_map_j++){
			map[setup_map_i][setup_map_j].sugar=10*(map[setup_map_i][setup_map_j].growth=rand()%max_sugar_growth);
            map[setup_map_i][setup_map_j].occupied=0;
		}
	}
	return;
}

void setup_loca(int setup_loca_man){
	sugarman[setup_loca_man].location.x=rand()%size_x;
	sugarman[setup_loca_man].location.y=rand()%size_y;
    map[sugarman[setup_loca_man].location.x][sugarman[setup_loca_man].location.y].occupied=1;
	return;
}

void setup_chara(int setup_chara_man){
	sugarman[setup_chara_man].characteristics.sight=rand()%max_sight;
        sugarman[setup_chara_man].characteristics.food_consumption=rand()%max_food_consumption;
        sugarman[setup_chara_man].characteristics.reproducing_speed=rand()%max_reproducing_speed;
	return;
}

void init(){
	int init_i;
    srand(time(0));
    setup_map();
    for (init_i=0;init_i<man_number;init_i++){
        setup_loca(init_i);
        setup_chara(init_i);
        sugarman[init_i].weight=0;
    }
	return;
}

