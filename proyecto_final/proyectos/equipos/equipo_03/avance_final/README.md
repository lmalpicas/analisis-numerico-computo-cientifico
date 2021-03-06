# Avance Final 30/05/2018

## Integrantes:

* Diego Alejandro Estrada Rivera    

* Rafael Larrazolo de la Cruz       

* Victor Quintero Mármol González   

## Título del proyecto: Factorización de Matriz usando factorización QR

### Equipo

Nuestro último avance consistió en terminar de realizar las implementaciones de nuestros códigos tanto en secuencial como en paralelo. De igual modo, nos dedicamos a revisar el trabajo escrito y agregar la parte de la implementación en el cuerpo del mismo. Finalmente, para cuestiones de la presentación en clase, hicimos un documento que funciona como resumen y guía de lo que se hizo tanto en la investigación como en la implementación de los algoritmos.

En Implementaciones del Avance Final subimos única la implementación de las rotaciones de Givens tanto secuencial como en paralelo. Las implementaciones de los otros algoritmos se encuentras en las implementaciones de los avances previos.

### Ligas

Trabajo escrito: [liga_trabajo_escrito](https://www.dropbox.com/s/d2gkj7jc06d7mzn/trabajo_escrito.pdf?dl=0).

Presentación: [liga_presentacion](https://www.dropbox.com/s/1jyucw5kvq9grp0/presentacion.pdf?dl=0).

Implmentación Avance Final: [liga_avance_final](https://github.com/ITAM-DS/analisis-numerico-computo-cientifico/tree/mno-2018-1/proyecto_final/proyectos/equipos/equipo_03/avance_final/Implementaciones)

## Instrucciones para ejecución:  

Para compilar, se sigue la siguiente instrucción:  

- gcc -Wall -fopenmp givens_paralelo.c -o givens_paralelo.out -lm

Dentro del programa, se solicita el nombre de la matriz, número de filas y número de columnas. Se pueden generar matrices fácilmente utilizando la siguiente línea de código en R:  

- write.table(matrix(runif(144, -101,101), nrow=12), file="matriz_a.txt", row.names=FALSE, col.names=FALSE)  

NOTA: Dentro de la función runif(), se coloca el número de elementos, y los límites inferior y superior de los valores que conformarán la matriz. En el argumento "nrow" de la función matriz(), se coloca la raíz cuadrada del número de elementos, esto debido a que el algoritmo sólo puede resolver matrices cuadradas. 

