/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:53:23 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/20 14:53:25 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <errno.h> 
#include <string.h>

void * ft_calloc(size_t count, size_t size)
{

    int *ptr;
    size_t i;

    i = 0;
    if(count == SIZE_MAX || size == SIZE_MAX )
    {
    errno = ENOMEM;
    return NULL;
    }
    ptr = (int *)malloc(count * size);
    
    if (!ptr)
    {
    errno = ENOMEM;
    return 0;
    }

    ft_bzero(ptr, count*size);
    
    return ptr;
}

// int main()
// {
  
//     // This pointer will hold the
//     // base address of the block created
//     int* ptr;
//     int n, i;
  
//     // Get the number of elements for the array
//     n = 5;
//     printf("Enter number of elements: %d\n", n);
  
//     // Dynamically allocate memory using calloc()
//     ptr = (int*)ft_calloc(n, sizeof(int));
  
//     // Check if the memory has been successfully
//     // allocated by calloc or not
//     if (ptr == NULL) {
//         printf("Memory not allocated.\n");
//         exit(0);
//     }
//     else {
  
//         // Memory has been successfully allocated
//         printf("Memory successfully allocated using calloc.\n");
  
//         // Get the elements of the array
//         // for (i = 0; i < n; ++i) {
//         //     ptr[i] = i + 1;
//         // }
  
//         // Print the elements of the array
//         printf("The elements of the array are: ");
//         for (i = 0; i < n; ++i) {
//             printf("%d, ", ptr[i]);
//         }
//     }
//   free(ptr);
//     return 0;
// }