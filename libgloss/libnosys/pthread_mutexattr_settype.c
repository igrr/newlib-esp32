#include "config.h"
#include "warning.h"
#include <pthread.h>

int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind) {
  return -1;
}
stub_warning(pthread_mutexattr_settype);
