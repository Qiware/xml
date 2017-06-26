#if !defined(__COMM_H__)
#define __COMM_H__

#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <stdbool.h>
#include <sys/stat.h>

/* 字串 */
typedef struct {
    char *str;                      /* 字串值 */
    size_t len;                     /* 字串长 */
} str_t;

typedef void* (*mem_alloc_cb_t)(void *pool, size_t len);
typedef void (*mem_dealloc_cb_t)(void *pool, void *p);

#endif /*__COMM_H__*/
