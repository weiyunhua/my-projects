#ifndef __THREAD_H__
#define __THREAD_H__

#include <pthread.h>


extern int th_new (pthread_t* tid
                   , const char* name
                   , pthread_attr_t* attr
                   , void* (*func)(void*)
                   , void* parm);

#define pthread_create(tid, name, attr, func, parm)  th_new(tid, name, attr, func, parm)


#endif //__THREAD_H__