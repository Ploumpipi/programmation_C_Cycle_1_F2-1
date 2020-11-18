#include <stdio.h>
#include <stdlib.h>
#include "define.h"


//prototypes



//extern - automatique - statique - register - volatile

//extern int ext=0;


//volatile<>const


static int cpt();

void jet_de_dep(int *place,int const jet1,int const jet2);

int main()
{
    /*auto int n_a=0,n_b=0;
    volatile int n_Res=0;
    float flt_Res=0;
    int n_tabEntier[TAILLE];

    n_a=5;
    n_b=11;

    n_Res=somme_int(n_a,n_b);

    printf("%d\n",n_Res);

    flt_Res=somme_float(5.0,2.0);

    printf("%f\n",flt_Res);

    somme_procedure(n_a,n_b);


    init_tabEntier(n_tabEntier);

    int result=fctInit_tabEntier(n_tabEntier);

    int c=cpt();

    int cc=cpt();*/

    //fct
    //place= jet_de(jet1,jet2);

    //procedure
     int place=0;
     int jet1=10;
     int jet2=10;
     //appel et passage par adresse
     jet_de_dep(&place,jet1,jet2);



    return 0;
}

//procedure et passage par adresse
// * pointeur
void jet_de_dep(int *place,int const jet1,int const jet2){

    *place+=(jet1+jet2);

}




//fonction somme entier

int somme_int(int n_va, int n_vb){

   /* int n_Som=0;

    n_Som=n_va+n_vb;

    return n_Som;*/

    return n_va+n_vb;

}

float somme_float(float flt_va, float flt_vb){

   /* float n_Som=0;

    n_Som=flt_va+flt_vb;

    return n_Som;*/

    return flt_va+flt_vb;

}

int fctInit_tabEntier(int n_tabEntier[TAILLE]){

    auto int n_i=0;
    int n_Result=0;

    for(n_i=0;n_i<TAILLE;n_i++){

        n_tabEntier[n_i]=0;

        if(n_tabEntier[n_i]==0){
                n_Result=1;
        }
        else{
            n_Result=0;
        }
    }

    return n_Result;


}





//Procedure

void somme_procedure(int n_va, int n_vb){

    /*int n_Som=0;

    n_Som=n_va+n_vb;

    printf("Res somme : %d",n_Som);*/

    printf("Res somme : %d",n_va+n_vb);


}



void init_tabEntier(int n_tabEntier[TAILLE]){

    int n_i=0;

    for(n_i=0;n_i<TAILLE;n_i++){

        n_tabEntier[n_i]=0;
    }


}


static int cpt(){

    static int n_c;
    n_c++;
    return n_c;
}
