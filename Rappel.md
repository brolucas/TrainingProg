# Rappel

**Don't forget the includes !**

___

# Vector


```cpp

std::vector<std::string> MonVector; // Empty vector

MonVector.push_back(); // ADD AT THE END
MonVector.pop_back(); // delete a the end

```

___


# List


```cpp

std::list<std::string> MaListe: //Empty List

MaListe.push_back(); // add at the end
MaListe.push_front(); // add at the beginin
MaListe.pop_back();
MaListe.pop_front(); // delete at the begining


std::list<std::string>::iterator it = MaListe.begin();

while (it != MaListe.end()) {
 std::cout << *it << std::endl;
 it++;
}

// Be carreful When deleting on a List

while (it != myList.end()) {

	if(*it == "Bilbo")
		it = MaListe.erase(it);

	else
		it++;
}


```


___

# Map



```cpp

std::map<int, std::string> MaMap;

MaMap[5]= "Lucas Sensei is to strong"; // if the key does'nt exist so this line create it

std::map<int, std::string>::iterator it = myMap.begin();
while (it != myMap.end()) {
 std::cout << "Key:" << it->first << std::endl; 
 std::cout << "Value:" << it->second << std::endl;
 it++; 
}





