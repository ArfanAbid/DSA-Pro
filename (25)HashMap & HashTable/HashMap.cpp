/*
HashMap:  O(1) 
A hashmap is a data structure that maps keys to values. 
It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

Map:  O(log n).
Maintains its elements in a sorted order based on the keys, and it generally uses a self-balancing binary search tree (like a Red-Black tree) internally.

Hashmap stores values in unordered way while map stores values in ordered based on the keys(sorted)way.
Implementation is same for hashmap and map

*/

#include<iostream>
#include<string>
#include<unordered_map>
#include<map>

using namespace std;

int main(){
    unordered_map<string, int> hashmap;
    map<string, int> map;


                //  Insertion Methods

    // 1
    pair<string, int> pair1=make_pair("Arfan", 55);
    hashmap.insert(pair1);

    // 2
    hashmap.insert({"Iffi",16});

    // 3
    hashmap["Iffionex"]=77;

                 // Accessing Values
    // 1
    cout<<hashmap["Arfan"]<<endl;
    
    // 2
    cout<<hashmap.at("Iffi")<<endl;

    // This variable is not declared but if we access it value then internally hashmap will assigh that variable default value 0
    cout<<hashmap["unknown"]<<endl;

                    // Modifying Values
                    
    hashmap["Iffi"]=20;
    hashmap.at("Iffionex") = 66;                
    
                    // Size

    cout<<hashmap.size()<<endl;     

                    // Check Presence / Existence
    
    // If present then it will return 1 else return 0
    cout<<hashmap.count("Iffi")<<endl;

    if (hashmap.count("unknown") > 0) {
        cout << "unknown exists." << std::endl;
    }

    if (hashmap.find("Arfan") != hashmap.end()) {
        cout << "Arfan exists." << std::endl;
    }

                    // Deletion

    hashmap.erase("unknown");
    cout<<hashmap.size()<<endl;

                    // Iterating Over Elements

    for(auto x : hashmap){
        cout << x.first << ": " << x.second << endl;
    }    

    // Or using iterator            
    unordered_map<string,int> :: iterator it=hashmap.begin();
    while(it != hashmap.end()){
        cout << it->first << ": " << it->second << endl;
        it ++;
    }
}