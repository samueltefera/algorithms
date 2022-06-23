#include <iostream>
using namespace std;

void swp(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int SimpleSort(int list[], int n);
int BubbleSort(int list[], int n);
int InsertionSort(int list[], int n);
int selectionSort(int list[], int n );
void find_smallest(int a, int b, int c, int d);

int main()
{
    int i,n;
    cout<<"Enter The number of elements: ";
    cin>>n;
    int list[n];
    int listcpy1[n];
    int listcpy2[n];
    int listcpy3[n];
    cout<<"Enter the numbers to be sorted: "<<endl;
    for(i = 0;i < n;i++){
            cout<<i + 1<<", ";
        cin>>list[i];
    }
    for(i = 0;i < n;i++){
        listcpy1[i] = list[i];
        listcpy2[i] = list[i];
        listcpy3[i] = list[i];
    }

    cout << "The values before sorting are: ";

    for(int i = 0; i < n; i++){
        cout << listcpy3[i] << " ";
    }
    cout<<endl<<endl;

    int simSor = SimpleSort(list,n);
    int bubSor = BubbleSort(listcpy1,n);
    int selSort = selectionSort(listcpy2,n);
    int insSor = InsertionSort(listcpy3,n);
    find_smallest(simSor,bubSor,selSort,insSor);
    cout<<endl;
    cout<<"the time complexity of simple sort is: "<<simSor<<endl;
    cout<<"the time complexity of bubble sort is: "<<bubSor<<endl;
    cout<<"the time complexity of selection sort is: "<<selSort<<endl;
    cout<<"the time complexity of insertion sort is: "<<insSor<<endl;
    cout << endl;

    cout << "The values after sorting in all Algorithms : \n";
    for(int i = 0; i < n; i++){
        cout << list[i] << " ";
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout << listcpy1[i] << " ";
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout << listcpy2[i] << " ";
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout << listcpy3[i] << " ";
    }
    cout<<endl;
    return 0;
}
int SimpleSort(int list[], int n)
{
    int count = 0;
    for(int i=0; i<=n-2;i++){
        for(int j=i+1; j<=n-1; j++){
                ++count;
            if(list[i] > list[j])
                {
                int temp;
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
                ++count;

                }

                }


    }
    return count;

}
int BubbleSort(int list[], int n)
{
    int temp;
    int count = 0;
    for (int i=n-2; i>=0; i--)
    {
        for(int j=0;j<=i; j++){
                ++count;
            if (list[j] > list[j+1])
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
                ++count;

            }

        }
    }
    return count;
}
int selectionSort(int list[], int n )
{
    int i,j,minIndex,countswp = 0;
    int count = 0;
    for(i=0;i<n - 1;i++)
    {
        minIndex = i;
        for(j=i+1;j<n;j++){
                count++;
            if (list[j] < list[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
        swp(&list[i],&list[minIndex]);
        count++;
        }
    }
    return count;
}
int InsertionSort(int list[], int n)
{
    int count = 0;
    for (int i = 1; i <= n-1; i++)
        {
        for(int j = i;j>=1; j--)
            {
                ++count;
                if(list[j-1] > list[j])
                {
                int temp = list[j];
                list[j] = list[j-1];
                list[j-1] = temp;
                ++count;
                }
                else break;
            }
        }
        return count;
}
void find_smallest(int a, int b, int c, int d)
{
    int x = min(a, min(b, min(c, d)));
    if (x == a)
        cout << "simple sort is efficient for that particular unsorted data items \n";
    if (x == b)
        cout << "bubble sort is efficient for that particular unsorted data items \n";
    if (x == c)
        cout << "selection sort is efficient for that particular unsorted data items\n";
    if (x == d)
        cout << "Insertion sort efficient for that particular unsorted data item \n";
}
