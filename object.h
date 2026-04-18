#ifndef OBJECT_H
#define OBJECT_H

#include "pes.h"

void compute_hash(const void *data, size_t len, ObjectID *id_out);
void object_path(const ObjectID *id, char *path_out, size_t path_size);
int  object_exists(const ObjectID *id);
int  object_write(ObjectType type, const void *data, size_t len, ObjectID *id_out);
int  object_read(const ObjectID *id, ObjectType *type_out, void **data_out, size_t *len_out);

#endif
