#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <pthread.h> 
#include <assert.h> 
  
void pool_init (int max_thread_num); 
int  pool_add_worker (void *(*process) (void *arg), void *arg); 
int  pool_destroy (); 
