#include "config.h"
#include "warning.h"
#include <pthread.h>

void	pthread_exit (void *__value_ptr) {
    while(1) ;
}
stub_warning(pthread_exit);
