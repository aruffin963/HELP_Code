void quickSort(string array[], int left, int right)
{
    int I, J, pivot;
    char chI, chJ, chPivot;

    if(left<right)
    {
        pivot=left;
        I=left;
        J=right;
        while(I<J)
        {
            chI=IthChar(array[I], 0);
            chJ=IthChar(array[J], 0);
            chPivot=IthChar(array[I], 0);
            while(chI<=chPivot&&I<right)
                I++;
            while(chJ>chPivot)
                J--;
            if(I<=J)
            {
                swap(array, I, J);
            }
        }
        swapPivot(array, pivot, J);
        quickSort(array, left, J-1);
        quickSort(array, J+1, right); 
    }
}

void swap(string array[], int loc, int loc1) 
{
          int temp;

          temp=array[loc];
          array[loc]=array[loc1];
          array[loc1]=temp;
}
