---
title: "Bibliografia para el proyecto"
output: html_document
---
Ya que teníamos la idea general del proyecto y el algoritmo cada quien busco referencias de acuerdo a tres subtemas diferentes, estos son los resultados que consideramos más relevantes. 


### Fundamentos del algoritmo:

#### Lorena Malpica

1)Publicación original del algoritmo: Dijkstra, E. W. (1959). "A note on two problems in connexion with graphs" (http://www-m3.ma.tum.de/twiki/ pub/MN0506/WebHome/dijkstra.pdf). Numerische Mathematik 1: 269–271. doi: 10.1007/BF01386390 (http:// dx.doi.org/10.1007/BF01386390).

2)Consultas generales, el capítulo 24 habla en general del tema de encontrar el camino más corto partiendo de un solo nodo, incluye descripciones de varios algoritmos, aplicados a diferentes tipos de grafos (con pesos, con pesos negativos, bidireccionales, etc.). A partir de la sección 24.3 se habla del algoritmo de Dijkstra.Cormen, Thomas H.; Leiserson, Charles E.; Rivest, Ronald L.; Stein, Clifford (2009), “Introduction to algorithms”. Chapter 24, section 24.3.


### Implementaciones existentes del algoritmo

#### Thalía Guerra
 3)Este artículo incluye la evaluación del algoritmo implementado de diversas maneras,  por ejemplo compara implementación Naive, diferentes implementaciones usando buckets y diferentes implementaciones usando heaps. Zhan, F. Benjamin; Noon, Charles E. (February 1998). "Shortest Path Algorithms: An Evaluation Using Real Road Networks". Transportation Science 32 (1): 65–73. doi: 10.1287/trsc.32.1.65 (http://dx.doi.org/10.1287/ trsc.32.1.65).

4)Buen resumen del algoritmo incluye enlaces a diversas implementaciones del algoritmo en C aunque la mayor parte son en Java. http://www.cse.unt.edu/~tarau/teaching/AnAlgo/Dijkstra's%20algorithm.pdf

### Paralelización

#### Roberto Sánchez
5)Artículo sumamente teórico, plantea dividir el algoritmo en fases y cada fase irla ejecutando en paralelo. Melhorn, K. (1998) A Parallelization of Dijkstra's Shortest Path Algorithm.

6)Analisis muy detallado del proceso de implementación del algoritmo tanto secuencialmente como en paralelo, así como el análisis de la eficiencia de las distintas implementaciones. Sería conveniente tomarlo como referencia en cuanto a la metodología que seguiremos para evaluar la eficiencia de nuestra implementación. Jasika, N. et al (2012) Dijkstra's shortest path algorithm serial and parallel execution performance analysis.




