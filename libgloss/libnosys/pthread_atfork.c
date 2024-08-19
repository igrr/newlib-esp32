#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_atfork (void (*prepare)(void), void (*parent)(void),
                   void (*child)(void)) {
  return -1;
}
stub_warning(pthread_atfork);
