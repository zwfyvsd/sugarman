typedef struct{
	int x;
	int y;
}loca;

typedef struct{
	int sight;
	int food_consumption;
	int reproducing_speed;
}chara;

typedef struct{
	loca location;
	chara characteristics;
	int weight;
}man;

man sugarman[man_number];

