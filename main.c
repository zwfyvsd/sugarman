#include"headers.h"
#include"map.h"
#include"man.h"
#include"gvar.h"
#include"init.h"
#include"init_print.h"
#include"proceed.h"
#include"print.h"

int main(){
	init();
    init_print();
	while (1){
		proceed();
		print();
		printf("Press any key to the next stage.\n");
		getchar();
	}
	return 0;
}

