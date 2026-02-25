#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

void main()
{
int longueur, temp_init, temp_bord, t, dt, dx;
longueur = 100;
temp_init = 20;
temp_bord = 100;
}

void sim_1D(longueur, temp_bord)
{
    int i, n, temp, p, dx, t, dt;
    dx = longueur*100; 
    t = 10;
    int tab[100] = 0;
    n = longueur;
    for(i=0; i<n; i++)
    {
        tab[i]="-";
        if(tab[i]==dx)
        {
            tab[i]="o";
        }
    }
    for(p=0; p<t; p++)
    {
        for(i=0; i<n; i++)
        {
            temp = Temp_barre[i];
            if(temp<50)
            {
                tab[i]="-"
            }
            if(temp>=50)
            {
                tab[i]="x"
            }
            if(temp=100)
            {
                tab[i]="o"
            }
        }
    }
}

