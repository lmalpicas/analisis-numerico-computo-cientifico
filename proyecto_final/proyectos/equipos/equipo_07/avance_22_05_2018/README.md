# Equipo 7

## Integrantes:
  * Luis Federico Puente
  * David Rivera
  * Mirtha Ayala

## Principal Component Analisys
# 22 de mayo de 2018

En esta etapa concluímos la implementación de la normalización de una matriz usando
funciones de blas, a través del uso de una matriz de 2 dimensiones para almacenar
los datos de entrada desde un archivo CSV.

Agregamos una biblioteca para la gestión de matrices de 1 y 2 dimensiones, que
incluyen estructuras de datos, funciones para alojar y liberar matrices en memoria,
e imprimir matrices.

Además, integramos las funciones previamente desarrolladas para calcular la Media
y la Desviación Estándar, con las nuevas funciones para hacer la normalización
de la matriz usando funciones de la biblioteca BLAS. Este fue especialmente un
reto interesante, porque convertimos la matriz de 2 dimensiones a una
matriz/vector de una dimensión para usar las funciones de blas usando el
row-major (C) order en lugar de el col-major(Fortran) order, además de combinarlo con una matriz diagonal.

Finalmente, usamos las condicionales ifdef y elif junto con las macros de sistema
pre-definidas con el objetivo de determinar el archivo de cabecera  de acuerdo
al sistema operativo donde se compile el programa (Linux o MacOS).

# Dependencias del programa

Antes de compilar el programa deben instalarse las bibliotecas blas y lapack
del disponibles en el paquete ATLAS base en un sistema Ubuntu:

```
sudo apt-get install libatlas-base-dev
```

Ambas bibliotecas son incluídas por defecto en MacOS y pueden usarse a través del framework Accelerate. Si tienes XCode instalado en tu Mac, puedes usar este comando para instalar
las herramientas de línea de comando:

```
xcode-select --install
```

# Instrucciones para compilacion del programa

  Nuestro programa depende en el compilador gcc/clang, blas y la herramienta make. Para compilar el programa debe ejecutarse el siguiente comando:

  ```
    make build
  ````
  Para borrar los programas compilados debe ejecutarse el siguientes comando:

  ```
    make clean
  ```

# Instrucciones para ejecutar el programa

  Para ejecutar el programa deben seguirse los siguientes pasos:

  1. Ejecutar el programa compilado
  ```
    ./pca
  ```

# Ejemplo de los resultados

  Puede encontrarse un ejemplo de la salida del programa en el archivo resultados.txt

# Referencias

  * https://www.tutorialspoint.com/c_standard_library/math_h.htm
  * https://sourceforge.net/projects/cccsvparser/
  * https://developer.apple.com/documentation/accelerate?language=objc
  * https://developer.apple.com/documentation/accelerate/blas?language=objc
  * https://developer.apple.com/documentation/accelerate/1513298-cblas_daxpy?language=objc
  * https://developer.apple.com/documentation/accelerate/1513282-cblas_dgemm?language=objc
  * https://gcc.gnu.org/onlinedocs/cpp/Ifdef.html
  * https://gcc.gnu.org/onlinedocs/cpp/System-specific-Predefined-Macros.html#System-specific-Predefined-Macros
