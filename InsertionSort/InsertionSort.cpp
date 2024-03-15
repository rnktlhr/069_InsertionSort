#include <iostream>
using namespace std;

int i, n, temp, j;
int arr[12];

void input() { //prosedur untuk input

    while (true) {
        cout << "Masukkan banyaknya elemen pada array: "; //output ke layar
        cin >> n; //input dari pengguna 
        if (n <= 12)//jika kurang dari atau sama dengan 20
            break;//keluar dari loop
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> arr[i];

    }
}

void insertionSort() {

	
	for (i = 1; i <= n - 1; i++) { //step 1
		temp = arr[i];//step 2
		j = i - 1;//step 3

		while (j >= 0 && arr[j] > temp) //step 4
		{
			arr[j + 1] = arr[j]; //step 4a
			j = j - 1; //step 4b
		}
		arr[j + 1] = temp; //step 5
        cout << "\npass ke - " << i << ":";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        
    }
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang Telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;

    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << "--->";
        }
    }
    cout << endl;
    cout << endl;

}

int main()
{
    input();
    insertionSort();
    display();
   

    return 0;
}

