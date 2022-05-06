#ifndef SPAWN_OBJECT_H
#define SPAWN_OBJECT_H

#include "../include/types.h"

void init_free_object_list(void);
void clear_object_lists(struct ObjectNode *objLists);
void unload_object(struct Object *obj);
void mark_obj_for_deletion(struct Object *obj);

#endif // SPAWN_OBJECT_H
