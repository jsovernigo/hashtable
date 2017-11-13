#ifndef __GSOVERNIGO_HASHTABLE_H__
#define __GSOVERNIGO_HASHTABLE_H__

#include <stdlib.h>
#include <inttypes.h>

struct hashtable;

struct hashtable* create_hashtable(size_t size, uint64_t (*hash)(char* key));

void destroy_hashtable(struct hashtable* table, void (*destroy)(void*));

uint64_t djb2_hash(char* key);

void* put_entry(struct hashtable* table, char* key, void* data);

void* get_entry(struct hashtable* table, char* key);

void* unput_entry(struct hashtable* table, char* key);

#endif
