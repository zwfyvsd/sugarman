#include"headers.h"
#include"constant.h"
#include"map.h"
#include"man.h"
#include"init.h"
#include"init_print.h"
#include"proceed.h"
#include"print.h"

int main(){
    init();
    init_print();
    printf("Press any key to start.\n");
    getchar();
	while (1){
		proceed();
		print();
		printf("Press any key to the next stage.\n");
		getchar();
	}
	return 0;
}

