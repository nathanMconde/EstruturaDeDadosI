#include <float_vector.h>

struct float_vector
{
    int capacity; // numéro máximo de elementos dentro da minha TAD
    int size; // quantidade atual de elementos
    float *data;// vetor de floats
}; 

FloatVector *create(int tam);