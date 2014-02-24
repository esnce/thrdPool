/* 
 * gcc main.c thrdPool.c -lpthread 
 * */

#include "thrdPool.h" 


void *process (void *arg); 

int main(void) 
{ 
    char    arg[128]; 

    pool_init(20);   
    pool_add_worker(process,"1"); 
    pool_add_worker(process,"2"); 
    pool_add_worker(process,"3"); 
    pool_add_worker(process,"4"); 
    pool_add_worker(process,"5"); 
    pool_add_worker(process,"6"); 
    pool_add_worker(process,"7"); 
    pool_add_worker(process,"8"); 
    pool_add_worker(process,"9"); 
    pool_add_worker(process,"10"); 
    pool_add_worker(process,"11"); 
    pool_add_worker(process,"12"); 
    pool_add_worker(process,"13"); 

    sleep(1); 
    pool_destroy(); 

    return 0; 
} 

void *process (void *arg) 
{ 
    printf("hello ==> %s\n",(char *)arg); 
}
