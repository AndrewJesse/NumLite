#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

/**
 * @file dynamic_array.h
 * @brief This file contains the definition of the DynamicArray structure and related types.
 */

#include <stdlib.h>

/**
 * @brief Enumeration representing the data type of the elements in the DynamicArray.
 */
typedef enum
{
    INT_TYPE,  /**< Integer data type */
    FLOAT_TYPE /**< Float data type */
} DataType;

/**
 * @brief Union representing the value of an element in the DynamicArray.
 */
typedef union
{
    int intValue;     /**< Integer value */
    float floatValue; /**< Float value */
} Data;

/**
 * @brief Structure representing a dynamic array.
 */
typedef struct
{
    Data *items;     /**< Pointer to the array of elements */
    size_t capacity; /**< Maximum number of elements that can be stored in the array */
    size_t size;     /**< Current number of elements in the array */
} DynamicArray;
#endif // DYNAMIC_ARRAY_H