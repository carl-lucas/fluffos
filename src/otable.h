#ifndef OTABLE_H
#define OTABLE_H

/*
 * otable.c
 */
void init_otable PROT((void));
void enter_object_hash PROT((object_t *));
void remove_object_hash PROT((object_t *));
object_t *lookup_object_hash PROT((char *));
int show_otable_status PROT((outbuffer_t *, int));

#endif