#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_attr_getschedparam (const pthread_attr_t *__attr,
				    struct sched_param *__param) {
  return -1;
}
stub_warning(pthread_attr_getschedparam);
