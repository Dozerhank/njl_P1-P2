#include <iostream>
#include <fstream>
#include <sstream>
#include "p2priorityqueue.h"
using namespace std;

int main()  {
    string fileRead, student[100], course[100], id[100];
    int priority[100];
    int studentTotal = 0;
    ifstream fin;
    ofstream fout;
    
    cout << "Please enter the student data filename: ";
    cin >> fileRead;
    
    fin.open(fileRead.c_str());
    if (fin.is_open())  {
        for (int i = 0; getline(fin, student[i]); i++) {
            studentTotal = i;
        }
    } 
    fin.close();
    
    
    for (int i = 0; i <= studentTotal; i++)  {
        stringstream ss(student[i]);
        string Course, Id; 
        int Priority;
        
        ss >> Course >> Id >> Priority;
        course[i] = Course;
        id[i] = Id;
        priority[i] = Priority;
    }
        
        
    fout.open("CS332");
    if (fout.is_open()) {
        int total = 0;
        PriorityQueue<string,int> pq;
        initialize(pq);
        for (int i = 0; i <= studentTotal; i++)  {
            if (course[i] == "CS332")   {
            push(pq, id[i], priority[i]);
            total++;
            }
        }
        for (int i = 0; i < total; i++) {
            fout << pop(pq) << endl;
        }
        destroy(pq);
    }
    fout.close();
    
    fout.open("CS352");
    if (fout.is_open()) {
        int total = 0;
        PriorityQueue<string,int> pq;
        initialize(pq);
        for (int i = 0; i <= studentTotal; i++)  {
            if (course[i] == "CS352")   {
            push(pq, id[i], priority[i]);
            total++;
            }
        }
        for (int i = 0; i < total; i++) {
            fout << pop(pq) << endl;
        }
        destroy(pq);
    }
    fout.close();
    
    fout.open("CS365");
    if (fout.is_open()) {
        int total = 0;
        PriorityQueue<string,int> pq;
        initialize(pq);
        for (int i = 0; i <= studentTotal; i++)  {
            if (course[i] == "CS365")   {
            push(pq, id[i], priority[i]);
            total++;
            }
        }
        for (int i = 0; i < total; i++) {
            fout << pop(pq) << endl;
        }
        destroy(pq);
    }
    fout.close();
}
