#include <bits/stdc++.h>
using namespace std;

void pair1(){
    pair<int, int> pr = make_pair(2, 3);
    cout << pr.first << " " << pr.second;
    pair<int, char> pr1 = {3, 'G'};
    cout << pr1.first << pr1.second << endl;

    pair<pair<int, char>, int> pr3 = {{3, 'K'}, 4};
    cout << pr3.first.second << " " << pr3.second << endl;
}
void vectorF()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    for (int i = 0; i < vec.size(); i++)
    { // for loop to print vector
        cout << vec[i] << " ";
    }
    for (auto i : vec)
    { // vector<int>::iterator itr=vec.begin() for each
        cout << i << " ";
    }
    vector<int> dupVec(vec); // duplicate vector
    for (auto i : dupVec)
    {
        cout << i << "";
    }
    cout << vec.front(); // front
    cout << vec.back();  // back
    cout << endl;

    vector<int> vec1 = {1, 2, 3, 4, 5};
    vec1.insert(vec1.begin() + 1, 9); // inserting the element in vector
    for (auto i : vec1)
    {
        cout << i << " ";
    }

    vec1.erase(vec1.begin() + 2, vec1.end() - 1); // erase the vector
    for (auto i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << vec1[2]; // access the element

    vector<int> vecA = {1, 3}; // swap the vector elements
    vector<int> vecB = {4, 5};
    swap(vecA, vecB);
    for (auto i : vecA)
    {
        cout << i << " ";
    }
}
void listL(){
    list<int> ls = {1, 2, 3}; // list
    ls.push_front(0);
    ls.emplace_front(4);
    for (auto i : ls)
    {
        cout << i << " ";
    }
    cout << endl;
}
void stackS(){
    stack<int> st; // LIFO
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    // cout<< st.top();
    while (st.empty() == false)
    { // print all elements in stack
        cout << st.top() << " ";
        st.pop();
    }
}
void queueQ(){
    queue<int> q; // FIFO
    q.push(2);
    q.push(4);
    q.push(3);
    q.push(6);
    while (q.empty() == false)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
void priorityQueue(){
    priority_queue<int> pq; // stores highest element at the top
    pq.push(2);
    pq.push(4);
    pq.push(8);
    pq.push(1);
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    priority_queue<int, vector<int>, greater<int>> pq1; // stores smallest element at the top
    pq1.push(2);
    pq1.push(4);
    pq1.push(8);
    pq1.push(1);
    while (pq1.empty() == false)
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
}
void setS(){
    set<int> st; // stores only unique element and in ascending order
    st.insert(4);
    st.insert(9);
    st.insert(8);
    st.insert(8);
    st.insert(7);
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;

    auto it = st.lower_bound(5); // returns an iterator that points to an element that is >= the given number:
    cout << *it << endl;

    auto it1 = st.upper_bound(8); // returns an iterator that points to and element that is > the given number;
    cout << *it1 << endl;

    cout << st.count(8); // element is there or not
    auto i = st.find(9); // finding the element in set st.find is and iterator pointing to the location of element 9
    if (i != st.end())
    {
        cout << *i;
    }

    auto i1 = st.begin(); // erase functionality
    i1++;
    auto i2 = st.end();
    i2--;
    st.erase(i1, i2);
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
}
void multiSet(){
    // stores all elements in ascending order
    multiset<int> ms;
    ms.insert(4);
    ms.insert(5);
    ms.insert(2);
    ms.insert(6);
    ms.insert(4);
    ms.insert(5);
    ms.insert(5);

    for (auto i : ms)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << ms.count(5) << endl;

    auto i = ms.find(6); // ms.find() is an iterator pointing to a memory location
    cout << *i << endl;

    auto it1 = ms.erase(ms.find(5)); // erase the element which ms.find() iterator pointing towards
    for (auto it1 : ms)
    {
        cout << it1 << " ";
    }
    cout << endl;

    auto it = ms.erase(5); // erasing all 5
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
}
void unorderedSet(){
    unordered_set<int> ust; // unordered unsorted constant time complexity
    ust.insert(8);
    ust.insert(4);
    ust.insert(9);
    ust.insert(8);
    ust.insert(36);
    ust.insert(35);

    auto i = ust.find(8); // O(1)
    cout << *i << endl;
}
void mapM(){
    map<int, string> mpp; // storing unique key-value pair //arranges in ascending order of keys
    mpp[1] = "Gaurav";
    mpp[2] = "pawar";
    mpp[4] = "chhindwara";
    mpp.insert({3, "bhopal"});
    for (auto i : mpp)
    {
        cout << i.first << "->" << i.second << endl;
    }
    cout << endl;

    auto i = mpp.find(1); // iterator points towards the key value pair memory location
    cout << (*i).first << "->" << (*i).second << endl;
}
void multiMap()
{
    multimap<int, char> mpp; // stores key value pair but no unique
    mpp.insert({1, 'b'});
    mpp.insert({2, 'a'});
    mpp.insert({4, 'b'});
    mpp.insert({2, 'b'});
    mpp.insert({7, 'a'});
    mpp.insert({2, 'b'});
    mpp.insert({5, 'a'});

    auto it = mpp.equal_range(2); // returns pair of iterators where first pair signifies first starting place and second pair signifies ending place
    for (auto i = it.first; i != it.second; i++)
    { //<= In Map elements are not stored in consecutive order
        cout << (*i).first << "->" << (*i).second << endl;
    }
}
void sortS(){
    int arr[5] = {9, 4, 3, 2, 8};
    sort(arr + 1, arr + 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> vec = {9, 4, 3, 2, 6};
    sort(vec.begin() + 1, vec.begin() + 4);
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;
}
void accumulateA()
{
    int arr[5] = {4, 6, 3, 2, 1};
    cout << accumulate(arr, arr + 5, 0) << endl;
    cout << accumulate(arr + 2, arr + 4, 0) << endl;
}
void countC(){
    int arr[5] = {3, 4, 5, 4, 7};
    int num = 4;
    cout << count(arr, arr + 5, num) << endl;
}
void nextPermutation(){
    string str = "abc"; // for previous permutation use prev_permutation
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
    cout << endl;

    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin() + 1, str.begin() + 2));
}
void maxElement(){
    int arr[5] = {3, 8, 9, 4, 1};
    auto i = *max_element(arr, arr + 5);
    auto it = *min_element(arr, arr + 5);
    cout << i << endl;
    cout << it << endl;
}
void reverseR(){
    int arr[5] = {4, 5, 3, 2, 5};
    reverse(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

bool internalComparator(pair<int,int> el1, pair<int,int> el2){
    if(el1.second>el2.second) return true ;
    if(el1.second<el2.second) return false;
    if(el1.first>el2.first)return true;
    return false;
    
}
void comparatorC(){
    pair<int,int> arr[]= {{1,6},{1,9},{2,6},{2,9},{3,9}};
    sort(arr, arr+5, internalComparator);
    for(int i=0; i<5; i++){
        cout<<"{"<<arr[i].first<<","<<arr[i].second<<"}"<<" ";
    }

// bool internalComparator(int el1, int el2){
//     if(el1<el2) return false;
//     return true;
// }
// void comparatorC()
// {
//     int arr[5] = {2, 6, 3, 9, 7};
//     sort(arr, arr + 5, internalComparator);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }


}
int main()
{
    comparatorC();
    return 0;
}