
#include <iostream>
#include <vector>
#include <list>
#include <map>


void SearchBestSales(std::map<std::string, int> lamap) {
    int  max= 0;
    std::string nom;

    for (std::pair<const std::string, int> Sale : lamap) {
        if (Sale.second >  max) {
            nom = Sale.first;
            max = Sale.second;
        }
            
    }
    std::map<std::string, int>::iterator found = lamap.find(nom);
    std::cout << found->first << std::endl; 
    std::cout << nom << std::endl;

}
int main()
{
    std::string tab[6] = { "Jujutsu","Naruto","Bleach","Slime","Nanatsu-No-Taizai","Demon Slayer" };


    // Exo Liste 

    std::list<std::string> mylist;

    for (int i = 0; i < 6; i++) {
        mylist.push_back(tab[i]);
    }

    auto it = mylist.begin();
    bool del = true;
    while (it != mylist.end())
    {
        if (del == true) {
            it = mylist.erase(it);
            del = false;
        }
        else
        {
            it++;
            del = true;
        }
    }
   

    mylist.push_back("Untruc");
    mylist.push_front("Unautretruc");
    it = mylist.begin();
    int i = 0;
    bool done = false;
    while (it != mylist.end())
    {
        if ((i == mylist.size() / 2)&& done == false) {
            mylist.insert(it, "Encoreuntruc");
            done = true;
        }
        i++;
        it++;
    }

    // Exo Vector

    std::vector<std::string> monvec;
    for (int i = 0; i < 6; i++) {
        monvec.push_back(tab[i]);
    }
    

    monvec.push_back("Values");
    monvec.push_back("Values2");
    monvec.push_back("Values3");

    // EXO map

    std::string Name[3]  = { "Demon Slayer", "Tokyo Ghoul", "Guilty Crown" };
    int Sales[3]  = { 6,8,25555 };


    std::map<std::string, int> MaMap;
    for (int i = 0; i < 3; i++) 
        MaMap[Name[i]] = Sales[i];

    SearchBestSales(MaMap);
   

}

