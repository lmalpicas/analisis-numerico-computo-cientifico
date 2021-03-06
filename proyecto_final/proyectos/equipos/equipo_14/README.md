## Equipo 14

Integrantes:

* Víctor Patricio Hernández Degollado.
* Alejandro Daniel Pérez Palacios.

Título del proyecto: Multiplicación de matrices en paralelo.

Objetivo del proyecto: Realizar un análisis comparativo de la ganancia en performance que se tiene al paralelizar el producto de matrices.

Trabajo escrito: [liga_trabajo_final](https://github.com/patricio-hdz/ProyectoFinal/blob/master/TrabajoFinal.md)

Presentación: [liga_presentación](https://github.com/patricio-hdz/ProyectoFinal/blob/master/180529-Multiplicacion_matrices.pdf)

Implementación: [liga_a_código](https://github.com/ITAM-DS/analisis-numerico-computo-cientifico/tree/mno-2018-1/proyecto_final/proyectos/equipos/equipo_14/Codigo)

En la carpeta [avance_10_04_2018](avance_10_04_2018) se encuentra el reporte del primer avance en nuestro proyecto.

Al comenzar a desarrollar la implementación nos dimos cuenta que hay bastas opciones para atacar este tema, por lo que propusimos un plan de trabajo para evitar aislarnos a una sóla opción, esto se encuentra en la carpeta [avance_17_04_2018](avance_17_04_2018).

Hemos definido el alcance completo del proyecto y tenemos los primeros scripts de la implementación, se puede consultar un resumen de lo anterior en [avance_24_04_2018](avance_24_04_2018).

Comenzamos a realizar pruebas con el código que tenemos, así como a generar código para automatizar dichas pruebas. Por otro lado siguiendo la recomendación de Erick tenemos un primer borrador del trabajo final, aún sin incluir los resultados obtenidos de esta primera fase de pruebas, se puede consultar el detalle en [avance_02_05_2018](avance_02_05_2018).

Acomodamos el código que teníamos y lo adaptamos para obtener resultados no sólo al modificar el tamaño de las matrices, sino también al modificar el número de threads. Por otro lado, comenzamos a desarrollar el código necesario para realizar las pruebas de performance de manera "justa" en una instancia en AWS; el detalle de lo anterior se puede consultar en [avance_08_05_2018](avance_08_05_2018).

En estas semanas arreglamos los bugs que teníamos en las entregas anteriores, realizamos las gráficas para el comparativo de performance y terminamos el trabajo escrito así como el código; el detalle se puede consultar en [avance_29_05_2018](avance_29_05_2018).

Referencias del proyecto:

* Gergel V.P. (2005). Introduction to Parallel Programming: Parallel Methods for Matrix Multiplication. University of Nizhni Novgorod.
http://www.hpcc.unn.ru/mskurs/ENG/PPT/pp08.pdf

* Orlando Salvatore (2006-2007). Progetto del corso di Calcolo Parallelo: Dense Matrix-Matrix Multiplication in Parallel. Università Ca'Foscari Venezia.
http://www.dsi.unive.it/~calpar/6_Progetto-06-07.pdf

* Hsu Po-Yi (2011). Advanced Numerical Methods, Lecture Notes 2: Parallel matrix multiplication. National Tsing Hua University.
http://www.cs.nthu.edu.tw/~cherung/teaching/2011anm/note02.pdf

* Solomonik Edgar, Demmel James (2012). Matrix multiplication on multidimensional torus networks. University of California, Berkeley.
http://solomonik.cs.illinois.edu/talks/vecpar-2012.pdf

* Vargas-Félix Miguel (2015). Cómputo en paralelo con OpenMP 1. CIMAT.
http://personal.cimat.mx:8181/~miguelvargas/Course%20notes/Computo%20en%20paralelo%20con%20OpenMP%201.pdf

* Nóblega Valeria (2013). Multiplicación de Matrices. Prezi.
https://prezi.com/amgiu_nlad9u/multiplicacion-de-matrices/
