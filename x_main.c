/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 22:09:07 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/07 14:45:08 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

// IOTA

int main(void)
{
    int numbers[] = {0, 42, -42, 123456, -123456, INT_MAX, INT_MIN};
    char *result;
    int i = 0; // Inicializar el índice

    // Utiliza while para recorrer los números
    while (i < 7)
    {
        result = ft_itoa(numbers[i]);
        if (result)
        {
            printf("ft_itoa(%d) = %s\n", numbers[i], result);
            free(result); // Libera la memoria asignada
        }
        else
        {
            printf("Error al convertir %d\n", numbers[i]);
        }
        i++; // Incrementar el índice
    }

    return 0;
}

// SPLIT

void print_split(char **split)
{

    int i = 0;
    while (split[i])
    {
        printf("%s", split[i]);
        i++;
    }
}

int main(void)
{
    char **result;

    // Prueba 1: Cadena con espacios como delimitadores
    char *str1 = "Casa Miranda en Madrid";
    char delimiter1 = ' ';
    printf("Prueba 1: Separando '%s' por '%c'\n", str1, delimiter1);
    result = ft_split(str1, delimiter1);
    print_split(result);

    // Prueba 2: Cadena con comas como delimitadores
    char *str2 = "manzana,platano,fresa";
    char delimiter2 = ',';
    printf("\nPrueba 2: Separando '%s' por '%c'\n", str2, delimiter2);
    result = ft_split(str2, delimiter2);
    print_split(result);

    // Prueba 3: Cadena con múltiples espacios consecutivos
    char *str3 = "  Este   es  un   ejemplo ";
    char delimiter3 = ' ';
    printf("\nPrueba 3: Separando '%s' por '%c'\n", str3, delimiter3);
    result = ft_split(str3, delimiter3);
    print_split(result);

    // Prueba 4: Cadena vacía
    char *str4 = " a b c";
    char delimiter4 = ' ';
    printf("\nPrueba 4: Separando cadena vacía '%s' por '%c'\n", str4, delimiter4);
    result = ft_split(str4, delimiter4);
    print_split(result);

    // Prueba 5: Delimitador no presente en la cadena
    char *str5 = "HolaMundo";
    char delimiter5 = ' ';
    printf("\nPrueba 5: Separando '%s' por '%c'\n", str5, delimiter5);
    result = ft_split(str5, delimiter5);
    print_split(result);

    return 0;
}