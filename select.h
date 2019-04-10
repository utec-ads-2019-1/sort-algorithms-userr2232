#ifndef SELECT_H
#define SELECT_H

#include "sort.h"

class SelectSort : public Sort {       
    public:
        SelectSort(void *elements, size_t size) : Sort(elements, size) {}

        void execute(void (*compare)(void*, int, int)) {
            for(int i = 0; i < size; ++i) {
                int min_index = i;
                for(int j = i + 1; j < size; ++j) {
                    compare(elements, min_index, j);
                }
            }
        }

        inline string name() { return "SelectSort"; }
};

#endif