#include<iostream>
using namespace std;

class Box {
public:
    int length, width, height;  
    Box(int l,int w,int h) {
        length =l;
        width =w;
        height =h;
    }

    Box(const Box &b) {
        length = b.length;
        width = b.width;
        height = b.height;
    }
    int volume() {
        return length * width * height;
    }
};
int main() {
    int l, w, h, x;
    cin >> l >> w >> h;
    Box A(l, w, h);   
    Box B = A;        
    cin >> x;
    A.length = x;     
    cout <<"VolumeA: "<< A.volume()<< endl;
    cout <<"VolumeB: "<< B.volume()<< endl;
    return 0;
}