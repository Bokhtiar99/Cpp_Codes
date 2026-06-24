#include <iostream>
#include <string>
using namespace std;
struct Product {
    int id;
    string name;
    float price;
};
void displayProducts(Product products[3][3]){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<"Product ID: "<<products[i][j].id<<endl;
            cout<<"Product Name: "<<products[i][j].name<<endl;
            cout<<"Product Price: "<<products[i][j].price<<endl;
        }
    }
}
int main(){
    Product products[3][3];
    products[0][0]={1, "Product_a",10.5};
    products[0][1]={2, "Product_b",15.0};
    products[0][2]={3, "Product_c",20.0};
    products[1][0]={4, "Product_d",25.0};
    products[1][1]={5, "Product_e",30.5};
    products[1][2]={6, "Product_f",12.0};
    products[2][0]={7, "Product_g",18.5};
    products[2][1]={8, "Product_h",22.0};
    products[2][2]={9, "Product_i",40.0};
    displayProducts(products);
    return 0;
}
