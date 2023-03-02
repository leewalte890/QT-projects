#include "mainwindow.h"
#include <QApplication>
#include "technology.h"
#include "technologybuilder.h"
#include "bundlebuilder.h"
#include "techfilereader.h"
#include <sstream>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

    TechFileReader tfr = TechFileReader("/Users/bmart/Documents/Class/SS19/CSE 335/Projects/Project 2/Project 2 Instructions/Technology.csv");
    vector<Technology*> techList = tfr.getItems();

    ifstream infile("/Users/bmart/Documents/Class/SS19/CSE 335/Projects/Project 2/Project 2 Instructions/Bundles.csv");
    vector<Bundle*> result = {};
    if (infile){
        string line;
        BundleBuilder bb = BundleBuilder();
        while (getline(infile,line)){
            stringstream ss(line);
            string word;
            vector<string> tokens;
            while(getline(ss,word,',')){
                tokens.push_back(word);
            }
            bb.buildName(tokens[0]);
            bb.buildPrice(stod(tokens[1]));
            vector<Technology*> techVec = {};
            for (int i=2; i<tokens.size();i++){
                for (Technology* tech : techList){
                    if (tech->getName().compare(tokens[i]) == 0){
                        techVec.push_back(tech);
                        break;
                    }
                }
            }
            bb.buildItems(techVec);
            result.push_back(bb.getResult());
        }
    }

    for (int i=0; i<result.size();i++){
        cout<<result[i]<<" "<<result[i]->getName()<<endl;
        for (Technology* tech:result[i]->getItems()){
            cout<<tech<<":"<<tech->getName()<<" ";
        }
        delete result[i];
    }

    /*QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();*/
}
