#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_setcanceltype (int __type, int *__oldtype) {
  return -1;
}
stub_warning(pthread_setcanceltype);
