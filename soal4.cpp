#include <iostream>

using namespace std;


int ArkaFood(float biaya, char *promo, float jarak , char *pajak)
{
    float biaya_pajak;
    float biaya_jarak;
    float diskon;
    float total_biaya;

    if (promo=="ARKAFOOD5" && biaya>=50000)
    {
        if (jarak<=1.5){
        biaya_jarak = 5000;}

        else if (jarak>1.5){
            jarak = jarak - 1.5;
            biaya_jarak =  5000 + jarak*3000;

        }
        if(pajak == "True" )
        biaya_pajak = biaya*0.05;

        else
            biaya_pajak=0;


        diskon = biaya*0.5;
         if (diskon>50000){
            diskon=50000;
        }

                biaya= biaya-diskon;
                }

    else if  (promo=="DITRAKTIRDEMY" && biaya>=25000){

            if (jarak<=1.5){
        biaya_jarak = 5000;}

        else if (jarak>1.5){
            jarak = jarak - 1.5;
            biaya_jarak =  5000 + jarak*3000;

        }
        if(pajak == "True" )
        biaya_pajak = biaya*0.05;

        else
            biaya_pajak=0;


        diskon = biaya*0.6;
         if (diskon>30000){
            diskon=30000;
        }

                biaya= biaya-diskon;
              }


    total_biaya = biaya_pajak + biaya + biaya_jarak;

    return total_biaya;
    }










int main()
{
 cout<<ArkaFood(70000, "ARKAFOOD5", 6, "True")<<endl;
 cout<<ArkaFood(70000,"DITRAKTIRDEMY",6,"True");
}
