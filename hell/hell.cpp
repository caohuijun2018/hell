#include <iostream>
#include<iomanip>
using namespace std;
int hail(int n) {
	int length = 1;
	while (1 < n) { n % 2 ? n = 3 * n + 1 : n = n / 2; length++; }
	return length;
}

int fun(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 0) {
		return 0;
	}
	return fun(n - 1) + fun(n - 2);
}

int funt(int n) {
	int a[64];
	for (int i = 0; i < 64; i++) {
		if (i == 0) {
			a[i] = 0;
		} else if (i == 1) {
			a[i] = 1;
		}
		else {
			a[i] = a[i - 1] + a[i - 2];
		}
		printf("i=%d, a[i]=%d\n", i, a[i]);
	}
	return a[n];
}

int fund(int n) {
	int a = 0;
	int b = 1;
	int t;
	if (n <= 1) {
		return n;
	}
	for (int i = 2; i <= n; i++) {
		t = a;
		a = b;
		b = a + t;
	}
	return b;
}

int main() {
	//printf("hello world");
	//int a;
	//int b;
	//int c;
	////a = 1;
	////b = 2;
	//scanf("%d%d", &a, &b);
	//c = a + b;
	//printf("%d", c);
	//int hello=hail(32);
	//printf("%d", hello);
	//int sum = fun(7);
	//int sum = 1 == 2 ? 2 : 3;
	//printf("%d\n", sum);
	/*funt(10);
	/*int sum = fund(10);
	printf("%d\n", sum);
	system("pause");*/
	
	/*float c, f;
	cout << "请输入摄氏温度c:\n";
	cin >> c;
	f = 9 / 5 * c + 32;
	cout << "摄氏温度c=" << c << endl;
	cout << "华氏温度f=" << f << endl;*/

	/*cout << sizeof(int) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(short int) << endl;
	cout << sizeof(long int) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(long double) << endl;*/

	/*int a = 3;
	int b = 5;
	int t;
	int &ra = a;
	int &rb = b;
	t = ra;
	ra = rb;
	rb = t;
	cout << a << b;*/
	/*int a = 10, b = 20;
	int *p = &a, *q = &b;
	*p = *p**q;
	int & ra = a;
	ra = a;
	int *&rt = q;
	*rt = 30;
	/*cout << a << b << *p << *q << ra << *rt;*/
	/*int x = 5;
	x += x -= x * x;
	cout << x; */
	/*int a = 1, b = 2;
	bool x, y;
	cout << (a++) + (++b) << endl;
	cout << a % b << endl;
	x = !a > b;
	y = a--&&b;
	cout << x << endl;
	cout << y << endl;*/
	/*float a, b, c, d, max;
	
	cout << "请输入a,b,c,d:\n";
	cin >> a >> b >> c >> d;
	
	if (a <= b) {
		max = b;
		if (max <= c) {
			max = c;
			if (max <= d) {
				max = d;
			}
		}
	}
	else {
		max = a;
	};


	cout << max << endl;*/
	/*int a = 123;
	int &ra = a;
	int *pa = &a;
	cout << setw(5) << dec << a << setw(5) << oct << ra << setw(5) << hex << *pa << endl;*/
	/*int a, i = 0, j = 0;
	for (a = 0; a <= 10; a++) {
		i = pow(a, 2);
		j = pow(a,3);
		cout << a << '\t' << i << '\t' << j << endl;
	};*/
	/*int x, y;
	cout << boolalpha;
	cout << "请输入x,y" << endl;
	cin >> x >> y;
	if (x <= 2 && x >= -2 && y <= 2 && y >= -2) {
		cout << true << endl;
	}
	else {
		cout << false << endl;
	}*/
/*int a, b, i;
cout << "输入五位数a" << endl;
cin >> a;
for (i = 0; i <= 4;i++) {
	b = a % 10;
	a = a / 10;
	cout<<b << endl;
}*/
/*int a;
cout << "请输入a" << endl;
cin >> a;
if (a % 2 == 0) {
	cout << "a为偶数" << endl;
}
else {
	cout << "a为奇数" << endl;
}*/
/*int a, b, c;
cout << "请输入a,b,c\n";
cin >> a >> b >> c;
if (a + b > c&&a + c > b&&b + c > a) {
	cout << "可以构成三角形" << endl;
	if (a==b&&b==c) {
		cout << "三角形为等边三角形" << endl;
	}
	else if (a == b && a != c || a == c && a != b || b == c && b != a) {
		cout << "此三角形为等腰三角形" << endl;
	}
	else {
		cout << "三角形为普通三角形" << endl;
	}
}
else {
	cout << "不构成三角形" << endl;
}*/
int a;
cout << "输入a" << endl;
cin >> a;
switch (a % 2)
{
case 0: cout << "a为偶数" << endl; break;
case 1: cout << "a为奇数" << endl;
}


    system("pause");
	return 0;

}
