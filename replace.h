#ifndef _LIBTALLOC_REPLACE_H
#define _LIBTALLOC_REPLACE_H

#define TALLOC_BUILD_VERSION_MAJOR 2
#define TALLOC_BUILD_VERSION_MINOR 5
#define TALLOC_BUILD_VERSION_RELEASE 0

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <errno.h>
#include <inttypes.h>
#include <stdint.h>
#include <malloc.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stddef.h>
#include <dlfcn.h>
#include <limits.h>
#include <sys/param.h>
#include <stdbool.h>

#define memset_explicit memset

#endif
