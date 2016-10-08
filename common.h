#ifndef COMMON_H
#define COMMON_H

#include <stddef.h>
#include <stdint.h>

void *memset(void *p, int c, size_t count);
void *memcpy(void *dest, const void *src, size_t n);

int toupper(int c);
int tolower(int c);

size_t strlen(const char* str);
int strcmp(const char *s1, const char *s2);

int coerce_int(char *s, uint32_t *val);

void PANIC(char *err);

#endif
