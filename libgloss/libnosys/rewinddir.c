#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"
#include <dirent.h>

void rewinddir(DIR *dirp)
{
    errno = ENOSYS;
    return;
}
stub_warning(rewinddir)
