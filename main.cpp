#include <iostream>

using namespace std;

void input(int** arr,int n,int m){

    for(int i = 0; i < n;i++){
        arr[i] = new int[m];
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> arr[i][j];
        }
    }
}
void output(int** arr,int n,int m){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
void free(int** arr,int n){
    for(int i = 0;i < n;i++){
        delete [] arr[i];
    }
}

int getMax(int** arr,int n,int m){
    int max = arr[0][0];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }

    return max;
}

int getMin(int** arr,int n,int m){
    int min = arr[0][0];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
    }

    return min;
}

int main() {
    int n,m;
    cout << "n =";
    cin >> n;
    cout << "m =";
    cin >> m;
    int **arr = new int*[n];

    input(arr,n,m);

    output(arr,n,m);
    cout << "Min = " << getMin(arr,n,m) << "\n";
    cout << "Max = " << getMax(arr,n,m);

    free(arr,n);
}
