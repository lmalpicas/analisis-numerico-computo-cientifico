# Equipo 7

  * Luis Federico Puente
  * David Rivera 
  * Mirtha Ayala

# 24 de Abril de 2018

En esta etapa comenzamos a trabajar en equipo dado que iniciaremos con la implementación del proyecto en C.

Previamente mapeamos los pasos para llegar a la descomposición SVD de tal forma que tenemos claro la secuencia de pasos a seguir:

Seleccionar una base de datos con variables numéricas
Lectura de la base de datos y creación de la matriz correspondiente
Descomposición de la matriz

Cambiamos la base inicialmente elegida para efectos de trabajar con variables numéricas. Esta nueva base la encontramos en Kaggle: “House Prices: Advanced Regression Technique” la variable a predecir es el Precio de la casa, consta de 81 variables de las cuales 17 continuas.
La implementación que incluimos en esta entrega, corresponde a la lectura de un archivo CSV  con una funcionalidad flexible en cuanto al número de registros y columnas. Dicho archivo debe contener los headers de las variables y se asumirá que los datos de entrada están limpios y completos y que son enteros pues una vez que es leído el archivo y construida la matriz, cada registro es convertido a entero. 

Adicional, identificamos los pasos siguientes tales como el escalamiento/normalización de las variables (xi -  x_barra/des est), para ello implementamos los pasos necesarios para calcular el promedio de cada variable. En la siguiente entrega concluiremos el proceso de escalamiento y comenzaremos con la descomposición de la matriz en valores singulares, cuyos pasos mapeamos a continuación:

  * El primer paso es hacer los datos.
  * Identificar las var resp y las x's y separar la matriz de variables X y vector Y.
  * Calcular la matriz de varianzas y covarianzas de X1 vs X2 (variance-covariance matrix).
  * Posteriormente se resuelve el sistema de ecuaciones para encontrar los eigenvalores y eigenvectores.
  * En seguida se realizan algunas operaciones con matrices para expresar las matrices de la descomposición.

# Instrucciones para compilacion del programa
 
  Nuestro programa depende en el compilador gcc y la herramienta make. Para compilar el
  programa debe ejecutarse el siguiente comando:
 
  ```
    make build
  ````
  Para borrar los programas compilados debe ejecutarse el siguientes comando:

  ```
    make clean
  ```
 
# Instrucciones para ejecutar el programa

  Para ejecutar el programa deben seguirse los siguientes pasos:

  1. Descargar el [dataset](https://gist.github.com/lckymirth/4225fb3f4e5e0c89a34dedbc9aef8332) y guardar el archivo como train.csv

  2. Ejecutar el programa compilado
  ```
    ./pca
  ```

# Ejemplo de los resultados

  Puede encontrarse un ejemplo de la salida del programa en el archivo resultados.txt