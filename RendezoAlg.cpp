#include <iostream>

int main()
{
    int array[] = { 5,3,4,2,8 };
    int arraySize = 5;

    /*
    Növekvő sorrend kell: 2,3,4,5,8
    
    ( 5 3 4 2 8 )  –>  ( 3 5 4 2 8 ) Megvizsgálja az első két elemet, és kicseréli őket, mert 5>3 teljesül
    ( 3 5 4 2 8 )  –>  ( 3 5 4 2 8 ) Az első és a harmadik elem vizsgálata: Nem kell csere, mert 3>4 nem teljesül
    ( 3 5 4 2 8 )  –>  ( 2 5 4 3 8 ) Csere, mert 3>2 igaz
    ( 2 5 4 3 8 )  –>  ( 2 5 4 3 8 ) Nem cserél, mert az 2>8 nem teljesül

    ( 2 5 4 3 8 )  –>  ( 2 4 5 3 8 ) Csere, mert 5>4 igaz
    ( 2 4 5 3 8 )  ->  ( 2 3 5 4 8 ) Csere, mert 4>3 igaz
    ( 2 3 5 4 8 )  ->  ( 2 3 5 4 8 ) Nincs csere, mert 3>8 nem igaz

    ( 2 3 5 4 8 )  ->  ( 2 3 4 5 8 )  Csere, mert 5>4 igaz
    ( 2 3 4 5 8 )  ->  ( 2 3 4 5 8 )  Nincs csere, mert 4>8 nem igaz

    ( 2 3 4 5 8 )  ->  ( 2 3 4 5 8 )  Nincs csere, mert 5>8 nem igaz
    */

    for (int i = 0; i < arraySize-1; i++)
    {
        for (int j = i+1; j < arraySize; j++)
        {
            for (int i = 0; i < arraySize; i++)
            {
                std::cout << array[i] << " ";
            }

            if (array[i] > array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
            std::cout << std::endl;
        }
    }

    for (int i = 0; i < arraySize; i++)
    {
        //std::cout << array[i] << " ";
    }
}

