#include <stdio.h>
#include <math.h>
#include <omp.h>

double valor_c (double a, double b); 

double valor_s (double a, double b);

int main(void){
	int m, n, i, j, g1, g2, col, d, k, m2, y, g, w, z, c1, d1, k1;
	double c, s, sum = 0;
	char archivo[256];

	printf("Nombre del archivo que contiene la matriz:");
    	scanf("%s" , archivo);

	printf("Ingresa el número de filas de matriz:");
    	scanf("%d", &m);
	m2 = m;
    	printf("Ingresa el número de columnas de la matriz:");
    	scanf("%d", &n);

	
	double A[m][n], Q[m][m], temporal[m][m], temporal2[m][n], R[m][n], G[m][m], AA[m][n];

	FILE *file;
  	file=fopen(archivo, "r");

 	for(i = 0; i < m; i++)
  	{
      		for(j = 0; j < n; j++) 
      		{
			fscanf(file, "%lf", &A[i][j]);
			R[i][j] = A[i][j];
      		}

  	}
	printf("\n");

	//Generamos una matriz I de tamaño mxm
		for(i = 0; i < m; i++){
				for(j = 0; j < m; j++){
					if(i == j){
						Q[i][j] = 1.0;
					}else{
						Q[i][j] = 0.0;
					}
				}
		}

	//Imprimimos la matriz A
	printf("Imprimimos la matriz A\n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%lf\t", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	

	for(j = 0; j < n; j++){
		for(i = m-1; i >= j+1; i--){

			//Generamos una matriz I de tamaño mxm
				for(g1 = 0; g1 < m; g1++){
						for(g2 = 0; g2 < m; g2++){
							if(g1 == g2){
								G[g1][g2] = 1.0;
							}else{
								G[g1][g2] = 0.0;
							}
						}
				}

			c = valor_c(R[i-1][j], R[i][j]);
			s = valor_s(R[i-1][j], R[i][j]);
				
			G[i-1][i-1] = c;
			G[i-1][i  ] = s*(-1);

			G[i][i-1] = s;
			G[i][i  ] = c;

			//temporal2 = t(G)*R;
			for (col = 0; col < m; col++) {
      					for (d = 0; d < n; d++) {
        						for (k = 0; k < m; k++) {
          							sum += G[k][col]*R[k][d];
        						}
						temporal2[col][d] = sum;
						sum = 0;
					}
			}

			//R = temporal2
			for(y = 0; y < m; y++){
					for(g = 0; g < m; g++){
						R[y][g] = temporal2[y][g];	
					}
			}
			
					
			//temporal = Q*G
			for (col = 0; col < m2; col++) {
    					for (d = 0; d < m2; d++) {
       							for (k = 0; k < m2; k++) {
       								sum = sum + Q[col][k]*G[k][d];
       							}
      						temporal[col][d] = sum;
						sum = 0;
					}
			}

			//Q = temporal
			for(w = 0; w < m2; w++){
					for(z = 0; z < m2; z++){
						Q[w][z] = temporal[w][z];	
					}
			}
					
		}	
	}
	printf("\n");

	//Multiplicamos AA = Q*R
	for (c1 = 0; c1 < m; c1++) {
    			for (d1 = 0; d1 < n; d1++) {
       					for (k1 = 0; k1 < m; k1++) {
       						sum = sum + Q[c1][k1]*R[k1][d1];
       					}
				AA[c1][d1] = sum;
				sum = 0;
			}
	}

	//Imprimimos AA, que debe ser lo más parecida posible a A
	printf("Imprimimos la matriz que resulta de Q*R\n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%lf\t", AA[i][j]);
		
		}
		printf("\n");
	}
	printf("\n");


	//Imprimimos la matriz Q
	printf("Imprimimos la matriz Q\n");
	for(i = 0; i < m; i++){
		for(j = 0; j < m; j++){
			printf("%lf\t", Q[i][j]);
		
		}
		printf("\n");
	}
	printf("\n");

	//Imprimimos la matriz R
	printf("Imprimimos la matriz R\n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%lf\t", R[i][j]);
		
		}
		printf("\n");
	}
	printf("\n");

return 0;
}



double valor_c ( double a, double b ){   

	double r, c_i, s_i;

	if(b == 0){
		c_i = 1;
		s_i = 0;
	}else{
		if(fabs(b) > fabs(a)){
			r = a / b;
			s_i = 1 / sqrt(1 + pow(r, 2));
			c_i = s_i*r;
		}else{
			r = b / a;
			c_i = 1 / sqrt(1 + pow(r, 2));
			s_i = c_i*r;
		}
	}

	return c_i;

}

double valor_s ( double a, double b ){   

	double r, c_i, s_i;

	if(b == 0){
		c_i = 1;
		s_i = 0;
	}else{
		if(fabs(b) > fabs(a)){
			r = a/b;
			s_i = 1 / sqrt(1 + pow(r, 2));
			c_i = s_i*r;
		}else{
			r = b / a;
			c_i = 1 / sqrt(1 + pow(r, 2));
			s_i = c_i*r;
		}
	}

	return s_i;

}







