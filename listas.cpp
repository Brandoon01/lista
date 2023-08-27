#include <iostream>
#include <algorithm>

// Función de búsqueda binaria
int binarySearch(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1; // Si el elemento no se encuentra
}

int main() {
    const int arraySize = 15;
    
    // Crear tres arreglos con 15 valores cada uno
    int array1[arraySize];
    int array2[arraySize];
    int array3[arraySize];
    
    // Llenar los arreglos con valores ordenados
    for (int i = 0; i < arraySize; ++i) {
        array1[i] = i * 2;
        array2[i] = i * 3;
        array3[i] = i * 5;
    }
    
    // Número a buscar
    int target = 10;
    
    // Buscar el número en cada arreglo usando búsqueda binaria
    int index1 = binarySearch(array1, arraySize, target);
    int index2 = binarySearch(array2, arraySize, target);
    int index3 = binarySearch(array3, arraySize, target);
    
    // Mostrar los resultados
    if (index1 != -1)
        std::cout << target << " encontrado en array1 en la posición " << index1 << std::endl;
    else
        std::cout << target << " no encontrado en array1" << std::endl;
    
    if (index2 != -1)
        std::cout << target << " encontrado en array2 en la posición " << index2 << std::endl;
    else
        std::cout << target << " no encontrado en array2" << std::endl;
    
    if (index3 != -1)
        std::cout << target << " encontrado en array3 en la posición " << index3 << std::endl;
    else
        std::cout << target << " no encontrado en array3" << std::endl;
    
    return 0;
}
