#ifndef SL_OBJECT_H
#define SL_OBJECT_H

#include "vm.h"

void
sl_init_object(sl_vm_t* vm);

void
sl_pre_init_object(sl_vm_t* vm);

SLVAL
sl_to_s(sl_vm_t* vm, SLVAL obj);

SLVAL
sl_to_s_no_throw(sl_vm_t* vm, SLVAL obj);

SLVAL
sl_inspect(sl_vm_t* vm, SLVAL obj);

char*
sl_to_cstr(sl_vm_t* vm, SLVAL obj);

SLVAL
sl_object_to_s(sl_vm_t* vm, SLVAL self);

SLVAL
sl_object_inspect(sl_vm_t* vm, SLVAL self);

void
sl_define_singleton_method(sl_vm_t* vm, SLVAL klass, char* name, int arity, SLVAL(*func)());

void
sl_define_singleton_method2(sl_vm_t* vm, SLVAL klass, SLID name, int arity, SLVAL(*func)());

void
sl_define_singleton_method3(sl_vm_t* vm, SLVAL object, SLID name, SLVAL method);

SLVAL
sl_get_ivar(sl_vm_t* vm, SLVAL object, SLID id);

SLVAL
sl_get_cvar(sl_vm_t* vm, SLVAL object, SLID id);

void
sl_set_ivar(sl_vm_t* vm, SLVAL object, SLID id, SLVAL val);

void
sl_set_cvar(sl_vm_t* vm, SLVAL object, SLID id, SLVAL val);

int
sl_eq(sl_vm_t* vm, SLVAL a, SLVAL b);

SLVAL
sl_singleton_class(sl_vm_t* vm, SLVAL object);

#endif
