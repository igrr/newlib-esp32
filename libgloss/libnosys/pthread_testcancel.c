#include "config.h"
#include "warning.h"
#include <pthread.h>

void 	pthread_testcancel (void) {
  return;
}
stub_warning(pthread_testcancel);
