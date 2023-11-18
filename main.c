#include "data/dynamic_array.h"
#include <stdio.h>
int main()
{
    DynamicArray *array = create_dynamic_array(2);

    Data data1 = {.intValue = 1};

    add_to_dynamic_array(array, data1);

    for (size_t i = 0; i < array->size; i++)
    {
        printf("Data at index %zu\n", i);
    }

    free_dynamic_array(array);
    return 0;
}
