//quicksort metode
void quicksort(int iList[], int first, int last){
    
    int pivot, i, j, tmp;

    if (first<last){
        pivot = first;
        i= first;
        j = last;

        while(i<j) {
            while (iList[i]<=iList[pivot] && i<last){
                i++;
            }
            while (iList[j]>iList[pivot]){
                j--;
            }
            if(i<j){
                tmp = iList[i];
                iList[i] = iList[j];
                iList[j] = tmp;
            }
        }
        tmp = iList[pivot];
        iList[pivot] = iList[j];

        iList[j] = tmp;
        quicksort(iList, first, j-1);
        quicksort(iList, j+1, last);
    }