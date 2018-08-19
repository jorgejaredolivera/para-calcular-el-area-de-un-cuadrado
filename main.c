/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 19 de agosto de 2018, 04:55 PM
 */

#include <stdio.h>


/*
 * 
 */
int main() {
    printf("hola amigo\nte voy a ayudar a calcular\nel area de un cuadrado\n :D");
    printf("\ncuanto vale la base\?");
    float base = 0;
    scanf("%f",&base);
    float area = base*base;
    printf("\nel area de tu cuadrado cuya base es de %.1f es igual a: %.1f ",base,area);
            
    
    
    

    return 0;
}

