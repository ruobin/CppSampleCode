#include <iostream>
#include <cstring>
#include <stdio.h>

/**

algorithm quicksort(A, lo, hi) is
    if lo < hi then
        p := partition(A, lo, hi)
        quicksort(A, lo, p)
        quicksort(A, p + 1, hi)
algorithm partition(A, lo, hi) is
    pivot := A[lo]
    i := lo ¨C 1
    j := hi + 1
    loop forever
        do
            i := i + 1
        while A[i] < pivot
        do
            j := j ¨C 1
        while A[j] > pivot
        if i >= j then
            return j
        swap A[i] with A[j]

        **/

int partition(char *words, int low, int high)
{
    int i = low - 1;
    int j = high + 1;
    char pivot = words[low];
    while (1){
        do
        {
            i ++;
        }while(words[i] < pivot);

        do
        {
            j --;
        }while(words[j] > pivot);

        if (i >= j)
            return j;
        char temp = words[i];
        words[i] = words[j];
        words[j] = temp;
    }

}


void quicksort(char *words, int low, int high)
{
    if(low < high)
    {
        int p = partition(words, low, high);
        quicksort(words, low, p);
        quicksort(words, p + 1, high);
    }
}


int main()
{
    std::string words ("Checking for existence: 7865239410");
    std::cout << words << std::endl;
    char *cstr = new char[words.length() - 1];
    std::strcpy(cstr, words.c_str());

    quicksort(cstr, 0, words.length() - 1);
    std::cout << cstr << std::endl;
    delete [] cstr;
    std::cout << "end";

    return 0;
}




