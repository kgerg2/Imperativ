#include<stdio.h>
int main() {
    
    printf("Van %f liter tejunk a hutoben.\nSutemeny suteshez elhasznalunk %f litert, majd megiszunk meg %f litert.\nVajon mennyi tej maradt? (%f)\nKicsit pontosabban: %1.20f\n\n", 0.7, 0.2, 0.2, (0.7-0.2-0.2), (0.7-0.2-0.2));
    
    /*****************************/
    
    double sum1 = 9*(1./9);
    double sum2 = 1./9 + 1./9 + 1./9 + 1./9 + 1./9 + 1./9 + 1./9 + 1./9 + 1./9;
    
    if (sum1 == 1.0 && sum2 == 1.0 && sum1 == sum2) {
      printf("Comparison succeeds\n");
    } else {
      printf("Unexpected result: %1.20f != %1.20f\n", sum1, sum2);
    }
    
    /*Találj még egy példát, ahol "nem stimmel" az eredmény. 
     *Tipp: használd a Python interpretert a gyors kísérletezéshez!
     */
}