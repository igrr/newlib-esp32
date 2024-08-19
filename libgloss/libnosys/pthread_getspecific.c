#include "config.h"
#include "warning.h"
#include <pthread.h>

void *	pthread_getspecific (pthread_key_t __key) {
  return NULL;
}
stub_warning(pthread_getspecific);
