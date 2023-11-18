/**
 * @file dynamic_array.c
 * @brief Implementation of a dynamic array data structure.
 */

#include "dynamic_array.h"

/**
 * @brief Creates a new dynamic array with the specified initial capacity.
 *
 * @param initial_capacity The initial capacity of the dynamic array.
 * @return A pointer to the newly created dynamic array.
 */
DynamicArray *create_dynamic_array(size_t initial_capacity)
{
    DynamicArray *array = malloc(sizeof(DynamicArray));
    array->items = malloc(initial_capacity * sizeof(Data));
    array->capacity = initial_capacity;
    array->size = 0;
    return array;
}

/**
 * @brief Adds a value to the dynamic array.
 *
 * If the array is full, its capacity is doubled before adding the value.
 *
 * @param array The dynamic array.
 * @param value The value to be added.
 */
void add_to_dynamic_array(DynamicArray *array, Data value)
{
    if (array->size == array->capacity)
    {
        array->capacity *= 2;
        array->items = realloc(array->items, array->capacity * sizeof(Data));
    }
    array->items[array->size] = value;
    array->size++;
}

/**
 * @brief Retrieves the value at the specified index from the dynamic array.
 *
 * @param array The dynamic array.
 * @param index The index of the value to retrieve.
 * @return The value at the specified index.
 * @note If the index is out of bounds, an error should be handled.
 */
Data get_from_dynamic_array(DynamicArray *array, size_t index)
{
    if (index < array->size)
    {
        return array->items[index];
    }
    else
    {
        // Handle error: index out of bounds
    }
}

/**
 * @brief Removes the value at the specified index from the dynamic array.
 *
 * @param array The dynamic array.
 * @param index The index of the value to remove.
 * @note If the index is out of bounds, an error should be handled.
 */
void remove_from_dynamic_array(DynamicArray *array, size_t index)
{
    if (index < array->size)
    {
        for (size_t i = index; i < array->size - 1; i++)
        {
            array->items[i] = array->items[i + 1];
        }
        array->size--;
    }
    else
    {
        // Handle error: index out of bounds
    }
}

/**
 * @brief Frees the memory allocated for the dynamic array.
 *
 * @param array The dynamic array to be freed.
 */
void free_dynamic_array(DynamicArray *array)
{
    free(array->items);
    free(array);
}