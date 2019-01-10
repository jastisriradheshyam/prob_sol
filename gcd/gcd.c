// MIT License

// Copyright (c) 2019 Jasti Sri Radhe Shyam

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include<stdio.h>
void swap(int*,int*);

// Greatest Common Divisor
int gcd(int m, int n){
	int r;
	// Making neutral
	m = (m > 0) ? m : -m;
	n = (n > 0) ? n : -n;
	do{
		if(m<n) {
			swap(&m,&n);
		}
		r = m%n;
		m=n;
		n=r;
	} while(r);
	return m;
}

// Swap the numbers
void swap(int *m,int *n){
	int *temp;
	temp = m;
	m = n;
	n = temp;
}

int main() {
	int m,n;
	scanf("%d %d",&m,&n);
	printf("GDC : %d",gcd(m,n));
	return 0;
}
