Entrega 1
=========

**Tema:** Optimización por descenso de gradiente

**Contexto:** Equilibrio de Stackelberg

**Bibliografía:**

1.  Quoc, Tran Dinh and Muu Le Dung, 2011, "A splitting proximal point method for Nash-cournot equilibrium models involving nonconvex cost functions",Journal of Nonlinear and Convex Analysis, v.12, p.519--533. <https://arxiv.org/abs/1105.2632>

2.  J. Miranda Mario and L. Fackler Paul, 2002, "Applied Computational Economics and Finance", The MIT Press. <https://mitpress.mit.edu/books/applied-computational-economics-and-finance>

3.  D. Kolstad Charles and Mathiesen Lars, 1987, "Necessary and Sufficient Conditions for Uniqueness of a Cournot Equilibrium", The Review of Economic Studies, v.54, No.4, p.681-690. <https://www.jstor.org/stable/2297489?seq=1#page_scan_tab_contents>

Por Integrante/Paper
--------------------

### Luis Fernando Cantú

#### A splitting proximal point method for Nash-cournot equilibrium models involving nonconvex cost functions

El objetivo principal de este artículo es el de mostrar un método para resolver equilibrios del modelo de competencia de Cournot en los casos en que se tienen funciones de costos no convexas, ya que en estas situaciones puede que un equilibrio local no sea un equilibrio global. Para encontrar algún óptimo local, los autores utilizan métodos de punto proximal. Sin embargo, lo que nos interesa de dicho artículo no es este método, sino que en él se demuestra que el juego de Cournot, en el caso en que tenemos costos convexos, es un problema de programación cuadrática fuertemente convexo, por lo que, en teoría, podríamos encontrar una solución a este problema utilizando métodos como Descenso en Gradiente, Descenso en Gradiente Estocástico o Descenso por Coordenadas. Además de lo anterior, también es factible encontrar el óptimo global mediante el uso de estos algoritmos.

### Mónica Vargas

#### Applied Computational Economics and Finance

Muchos modelos económicos interesantes no pueden ser resueltos analíticamente usando técnicas matemáticas estándares de algebra y cálculo. Esto pasa frecuentemente en modelos económicos aplicados que intentan capturar las complejidades del comportamiento individual e institucional del mundo. Por ejemplo, los modelos de Cournot y Bertrand dedicados al estudio de la competencia de oligopolios y todas sus vertientes. Este tipo de modelos dinámicos (comportamiento económico en más de un periodo) usan ecuaciones funcionales en donde la variable a encontrar no es solo un vector sino una función entera de puntos continuos. Excepto en casos limitados y con restricciones específicas, estas ecuaciones funcionales no tienen una solución cerrada aunque se demuestre teóricamente que existe y es única.

Los modelos sin solución de forma cerrada no son únicos a la economía. Analíticamente los modelos son comunes en biología, física y ciencias de ingeniería. Desde la introducción de la computadora, científicos han tornado a al uso de métodos numéricos para resolver sus modelos. En muchos casos en donde acercamientos analíticos fallan, métodos numéricos son usados exitosamente para computar aproximaciones precisas de la solución.

El libro “Applied Computational Economics and Finance” usa Matlab para solucionar e ilustrar diversos ejemplos de modelos económicos actuales. El libro cuenta con el capítulo 6.8 dedicado a resolver ecuaciones funcionales y, específicamente, el modelo de Cournot sobre oligopolios. Consideramos que el libro puede ser un punto de partida para resolver el modelo de Cournot en R y, posteriormente en C.

### Eduardo Hidalgo

#### Necessary and Sufficient Conditions for Uniqueness of a Cournot Equilibrium

En este articulo se desarrolla un teorema que da las condiciones necesarias y suficientes para la unicidad del equilibrio de Cournot. En el contexto de nuestro proyecto esto es importante pues asegura que con una seleccion *razonable* de las funciones de costo podemos garantizar la existencia de un único equilibrio de Cournot. Lo anterior, en términos de nuestro algoritmo implica que éste sera estable, es decir, ante *ligeros* cambios en la seleccion incial de $\\overrightarrow{q\_{i}}$ se espera obtener una solución $\\ p(\\overrightarrow{q\_{i}})$ *cercana* a los datos perturbados.

### Propuesta de Timeline de Entregables por Integrante

| Integrantes/Fechas | 10 de abril.  | 17 de abril.                   | 24 de abril.      | 2 de mayo.        | 8 de mayo.                                        | 15 de mayo.                               | 1a semana de finales.                       |
|:-------------------|:--------------|:-------------------------------|:------------------|:------------------|:--------------------------------------------------|:------------------------------------------|:--------------------------------------------|
| Eduardo            | Lectura Paper | Lectura Paper y Programación R | Programación en R | Programación en C | Programación en C y Generación de Trabajo Escrito | Generación Trabajo Escrito y Presentación | Finalización trabajo escrito y presentación |
| Cantú              | Lectura Paper | Lectura Paper y Programación R | Programación en R | Programación en C | Programación en C y Generación de Trabajo Escrito | Generación Trabajo Escrito y Presentación | Finalización trabajo escrito y presentación |
| Mónica             | Lectura Paper | Lectura Paper y Programación R | Programación en R | Programación en C | Programación en C y Generación de Trabajo Escrito | Generación Trabajo Escrito y Presentación | Finalización trabajo escrito y presentación |
