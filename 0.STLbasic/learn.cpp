/*
void explainpair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout << p.first << " " << p.second.first << " " << p.second.second;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;
}

void explainvector()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2); // It will automatically assume pair

    vector<int> v(5, 100); // {100,100,100,100,100}

    vector<int> v(5); // {0,0,0,0,0}

    vector<int> v1(5, 20);
    vector<int> v2(v1); // copy of v1

    // accesing of vector

    cout << v[0] << " " << v.at(0);

    vector<int>::iterator it = v.begin(); // it is pointing memory address not value
    cout << *(it) << " ";
    it++;

    vector<int>::iterator it = v.end();    //{10,20,30} it is pointing after 30
    vector<int>::iterator it = v.rend();   //{10,20,30} it is pointing before 10
    vector<int>::iterator it = v.rbegin(); //{10,20,30} it is pointing 30 if we do it++ then it will be 20

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    for (auto it : v)
    {
        cout << it << " ";
    }

    //Erase
    //{10,20,30,40,50}
    v.erase(v.begin()+1); // {10,30,40,50}
    v.erase(v.begin()+1,v.begin()+3); // {10,50}[start,end)

    //insert function
    vector<int> v(2,100);
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

    vector<int > copy(2,50); //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100}

    //{10,20}
    cout<<v.size(); //2

    //{10,20}
    v.pop_back(); // {10}

    //-> v1={10,20}
    //-> v2={30,40}
    v1.swap(v2); // v1 = {30,40} v2={10,20}

    v.clear(); // clear the entire vector

    cout<<v.empty();


}

void explainlist() {
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4);//{2,4}

    ls.push_front(5); //{5,2,4} its tc is less than a insert but its only use in list
    ls.emplace_front(); //{2,4}

}

stack,queue->O(1)
push,pop->O(logn)
top->O(1)
set,map-> O(logn)
Uset,Umap->worst case onee in infinity ->O(1)
otherwise O(N)

*/
