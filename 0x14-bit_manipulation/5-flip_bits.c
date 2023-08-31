#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first variable operand
 * @m: second variable operand
 * Return:number of flipped bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        unsigned long int xor_output;
        unsigned int j;

        xor_output = n ^ m;
        j = 0;

        while (xor_output != 0)
        {
                j += xor_output & 1;
                xor_output >>= 1;
        }
        return (j);
}
