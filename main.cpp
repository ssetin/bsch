#include <stdio.h>
/*
Написать функцию bsearch, которая принимает на вход отсортированный по неубыванию массив целых чисел и целое число x.
В качестве результата функция должна возвращать индекс первого элемента массива, строго большего x.
В Вашей реализации функция может принимать любое количество любых параметров, только 2
этих параметра обязательны.
При использовании Вашей функции должна быть возможность определить, существует ответ или нет.
В качестве решения пришлите ссылку на репозиторий с программой на языке C с примером использования функции.
*/

int bsearch(int array[],int arraysize,int lookfor){
    if(arraysize==0) return -1;
    int begin(0),end(arraysize);

    int middle(arraysize/2),premiddle(0);
    while(middle<arraysize){
        middle=begin+(end-begin)/2;

        if(premiddle==middle){
            if(middle==0)
                return 0;
            if(middle+1<arraysize)
                return middle+1;
            else return -1;
        }
        if(array[middle]>lookfor){
            end=middle;
        }else
        {
            begin=middle;
        }
        premiddle=middle;
    }
    return -1;
}


int main()
{
    int ar[11]={1,2,2,2,5,6,7,8,8,9,11};
    int s=0;

    int res=bsearch(ar,11,s);

    if(res>=0)
        printf("first bigger than %d placed on %d position",s,res);
    else
        printf("bigger than %d not found",s);

    return 0;
}
