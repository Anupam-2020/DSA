#include<bits/stdc++.h>
using namespace std;

void pattern1() {
    int row, column, i=1,j=1;
    cout<<"Enter no. of rows";
    cin>>row;
    cout<<"Enter no. of column";
    cin>>column;
    while(i<=row) {
        while(j<=column) {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
        j=1;
    }
}


void patter1Reverse() {
    int row, column;
    cout<<"Enter no. of rows";
    cin>>row;
    cout<<"Enter no. of column";
    cin>>column;
    for(int i = 1; i <= row; i++) {
        for(int j = column; j >= 1 ; j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
} 



void pattern2() {
    int row;
    cin>>row;
    int i = 1;
    while(i<=row) {
        int j = 1;
        while(j<=row) {
            cout<<row-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}



void pattern3() {
    int row;
    cin>>row;
    int i = 1,j = 1;
    while(i<=row) {
        while(j <= i*row) {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void trianglePattern1() {
    int row;
    cin>>row;
    int i = 1;
    while(i <= row) {
        int j = 1;
        while(j <= i) {
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void trianglePatternInNumericalForm() {
    int row;
    cin>>row;
    int i = 1;
    while(i <= row) {
        int j = 1;
        while(j <= i) {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void trianglePatternInNumericalForm2() {
    int row;
    cin>>row;
    int i = 1, count = 1;
    while(i <= row) {
        int j = 1;
        while(j <= i) {
            cout<<count<<" ";
            j++;
            count = count + 1;
        }
        cout<<endl;
        i++;
    }
}



void pattern3InDifferentWay() {
    int row,count=1;
    cin>>row;
    int i = 1;
    while(i <= row) {
        int j = 1;
        while(j <= row) {
            cout<<count<<" ";
            j = j + 1;
            count = count + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}

void trianglePatternInNumericalForm3() {
    int row, count=1;
    cin>>row;
    int i=1;
    while(i<=row) {
        int j=1;
        while(j<=i) {
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        count = i;
        cout<<endl;
    }
}

void trianglePatternInNumericalForm3SecondApproach() {
    int row;
    cin>>row;
    int i=1;
    while(i<=row) {
        int j=0;
        while(j<i) {
            cout<<i+j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void trianglePatternInNumericalForm4() {
    int row;
    cin>>row;
    int i=1;
    while(i<=row) {
        int count=i, j=1;
        while(j<=i && count>0) {
            cout<<count<<" ";
            count--;
            j++;
        }
        cout<<endl;
        i++;
    }
}


void trianglePatternInNumericalForm4SecondApproach() {
    int row;
    cin>>row;
    int i=1;
    while(i<=row) {
        int j=1;
        while(j<=i) {
            cout<<i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void lettersPrintingSquare() {
    int row;
    cin>>row;
    // char value = 97;
    int i = 1;
    while(i<=row) {
        int j = 1;
        while(j<=row) {
            char ch = 'A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        // value++;
        i++;
    }
}

void lettersPrintingSquare2() {
    int row;
    cin>>row;
    int i=1;
    while(i<=row) {
        int j = 1;
        char value = 97;
        while(j<=row) {
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void lettersPrintingSquare2InSecondApproach() {
    int row;
    cin>>row;
    int i = 1;
    while(i <= row) {
        int j = 1;
        while(j <= row) {
            char value = 'A' + j - 1;
            cout<<value<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void lettersPrintingSquare3() {
    int row;
    cin>>row;
    int i = 1;
    char value = 97;
    while(i<=row) {
        int j = 1;
        while(j<=row) {
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void lettersPrintingSquare4() {
    int row;
    cin>>row;
    int i = 0;
    while(i<row) {
        int count = i, j = 0;
        while(j<row) {
            char value = 'A' + count;
            cout<<value<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void lettersPrintingSquare4InSecondApproach() {
    int row;
    cin>>row;
    int i = 1;
    while(i<=row) {
        int j = 1;
        while(j<=row) {
            char value = 'A' + i + j -2;
            cout<<value<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void lettersPrintingTriangle() {
    int row;
    cin>>row;
    int i = 1;
    while(i <= row) {
        int j = 1;
        while(j<=i) {
            char value = 'A' + j - 1;
            cout<<value<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void lettersPrintingTriangle2() {
    int row;
    cin>>row;
    int i = 1;
    while(i <= row) {
        int j = 1;
        while(j<=i) {
            char value = 'A' + i - 1;
            cout<<value<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}


void lettersPrintingTriangle3() {
    int row;
    cin>>row;
    int i = 1;
    char value = 97;
    while(i<=row) {
        int j = 1;
        while(j<=i) {
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void lettersPrintingTriangle4() {
    int row;
    cin>>row;
    int i = 1;
    while(i<=row) {
        int j = 1;
        while(j<=i) {
            char value = 'A' + i + j - 2;
            cout<<value<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}


void lettersPrintingTriangle5() {
    int row;
    cin>>row;
    int i = 1;
    while(i<=row) {
        int j = 1;
        char value = 'A' + row - i;
        while(j <= i) {
            // char value = 'A'-i+j-1+row;
            cout<<value<<" ";
            j++;
            value ++;
        }
        cout<<endl;
        i++;
    }
}


void lettersPrintingTriangle5SecondApproach() {
    int row;
    cin>>row;
    int i = 1;
    while(i <= row) {
        int j = 1;
        char value = 'A' + row - i;
        while(j <= i) {
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void trianglePattern2() {
    int row;
    cin>>row;
    int i = 1;
    while(i <= row) {
        int space = row-i;
        int j = 1;
        while(space) {
            cout<<" ";
            space--;
        }
        while(j <= i) {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void trianglePattern3() {
    int row;
    cin>>row;
    int i = 1;
    while(i<=row) {
        int j = 1;
        while(j<=row-i+1) {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}


void trianglrPattern4() {
    int row;
    cin>> row;
    int i = row;
    while(i>=1) {
        int space = row - i;
        while(space) {
            cout<<" ";
            space--;
        }
        int j = 1;
        while(j <= i) {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
}

void trianglePatternInNumericalForm5() {
    int row,counter=1;
    cin>>row;
    int i = row;
    while(i >= 1) {
        int space = row - i;
        int j = 1;
        while(space) {
            cout<<" ";
            space--;
        }
        while(j <= i) {
            cout<<counter;
            j++;
        }
        cout<<endl;
        counter++;
        i--;
    }
}

void trianglePatternInNumericalForm6() {
    int row;
    cin>>row;
    int i = 1;
    while(i <= row) {
        int space = row - i;
        while(space) {
            cout<<" ";
            space --;
        }

        int j = 1;
        while(j <= i) {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void trianglePatternInNumericalForm7() {
    int row;
    cin>>row;
    int i = row;
    while(i >= 1) {
        int space = row - i;
        while(space) {
            cout<<" ";
            space--;
        }
        int j = row-i+1;
        while(j <= row) {
            cout<<j;
            j++;
        }
        cout<<endl;
        i--;
    }
}


void trianglePatternInNumericalForm8() {
    int row,counter=1;
    cin>>row;
    int i = 1;
    while(i <= row) {
        int space = row - i;
        while(space) {
            cout<<" ";
            space --;
        }
        int j = 1;
        while(j <= i) {
            cout<<counter;
            j++;
            counter++;
        }
        cout<<endl;
        i++;
    }
}

void trianglePattern5() {
    int row; 
    cin>> row;
    int i = 1;
    while(i <= row) {
        int space = row - i;
        while(space) {
            cout<<" ";
            space --;
        }
        int j = 1;
        while(j <= i) {
            cout<<j;
            j++;
        }
        int k = i - 1;
        while(k >= 1) {
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
}


void pattern4() {
    int row;
    cin>>row;
    int i = 1;
    while(i <= row) {
        int j = 1;
        while(j <= row - i + 1) {
            cout<<j; 
            j++;
        }
        int k = i - 1;
        while(k >= 1) {
            cout<<"*";
            k--;
        }
        int l = i - 1;
        while(l >= 1) {
            cout<<"*";
            l--;
        }
        int m = row - i + 1;
        while(m >= 1) {
            cout<<m;
            m--;
        }
        cout<<endl;
        i++;
    }
}


int main() {
    // pattern1();
    // patter1Reverse();
    // pattern2();
    // pattern3();
    // pattern3InDifferentWay();
    // trianglePattern1();
    // trianglePatternInNumericalForm();
    // trianglePatternInNumericalForm2();
    // trianglePatternInNumericalForm3();
    // trianglePatternInNumericalForm3SecondApproach();
    // trianglePatternInNumericalForm4();
    // trianglePatternInNumericalForm4SecondApproach();
    // lettersPrintingSquare();
    // lettersPrintingSquare2();
    // lettersPrintingSquare2InSecondApproach();
    // lettersPrintingSquare3();
    // lettersPrintingSquare4();
    // lettersPrintingSquare4InSecondApproach();
    // lettersPrintingTriangle();
    // lettersPrintingTriangle2();
    // lettersPrintingTriangle3();
    // lettersPrintingTriangle4();
    // lettersPrintingTriangle5();
    // lettersPrintingTriangle5SecondApproach();
    // trianglePattern2();
    // trianglePattern3();
    // trianglrPattern4();
    // trianglePatternInNumericalForm5();
    // trianglePatternInNumericalForm6();
    // trianglePatternInNumericalForm7();
    // trianglePatternInNumericalForm8();
    // trianglePattern5();
    pattern4();
}
