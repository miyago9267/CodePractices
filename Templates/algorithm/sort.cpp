class Sort {
    public:
        Sort() {}
        ~Sort() {}

        void bubbleSort(int n, int a[]) {
            for(auto i=0; i<n; i++)
                for(auto j=0; j<n-i-1; j++)
                    if(a[j]>a[j+1])
                        swap(a[j], a[j+1]);
        }

        void selectionSort(int n, int a[]) {
            for(auto i=0; i<n; i++) {
                int minIndex = i;
                for(auto j=i+1; j<n; j++)
                    if(a[j]<a[minIndex])
                        minIndex = j;
                swap(a[i], a[minIndex]);
            }
        }

        void insertionSort(int n, int a[]) {
            for(auto i=1; i<n; i++) {
                int key = a[i];
                int j = i-1;
                while(j>=0 && a[j]>key) {
                    a[j+1] = a[j];
                    j--;
                }
                a[j+1] = key;
            }
        }

        void mergeSort(int a[], int l, int r) {
            if(l<r) {
                int m = l+(r-l)/2;
                mergeSort(a, l, m);
                mergeSort(a, m+1, r);
                merge(a, l, m, r);
            }
        }

        void merge(int a[], int l, int m, int r) {
            int n1 = m-l+1;
            int n2 = r-m;
            int L[n1], R[n2];
            for(auto i=0; i<n1; i++)
                L[i] = a[l+i];
            for(auto j=0; j<n2; j++)
                R[j] = a[m+1+j];
            int i = 0, j = 0, k = l;
            while(i<n1 && j<n2) {
                if(L[i]<=R[j]) {
                    a[k] = L[i];
                    i++;
                } else {
                    a[k] = R[j];
                    j++;
                }
                k++;
            }
            while(i<n1) {
                a[k] = L[i];
                i++;
                k++;
            }
            while(j<n2) {
                a[k] = R[j];
                j++;
                k++;
            }
        }
    private:
        inline void swap(int &a, int &b) {
            int t = a, a = b, b = t;
        }
};