const man_number=10;

const max_sight=7;
const max_speed=5;
const max_food_conxumption=10;
const max_reproducing_speed=3;

typedef struct{
	int x;
	int y;
}loca;

typedef struct{
	int sight;
	int speed;
	int food_consumption;
	int reproducing_speed;
}chara;

typedef struct{
	loca location;
	chara characteristics;
	int weight;
}man;

