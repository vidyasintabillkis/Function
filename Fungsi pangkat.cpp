#include <iostream>
using namespace std; 
//
//float perpangkatan(float a, float b){
//	float hasil=1;
//	for (int x=0; x<b; x++){
//	 	hasil = hasil*a;
//	}
//	return hasil;
//}
//
//int main (){
//	cout << perpangkatan(2, 3);
//}

bool valid_triangle(float x, float y, float z){
	if (x+y > z || x+z > y || y+z > x){
		return true;
	} else {
		return false;
	}
}
	
int main () {
		float x, y, z; 
	cin >> x >> y >> z;
	if (valid_triangle(x, y, z)){
		cout << "false";
	} else {
		cout << "true";
	}
	return 0;
}

