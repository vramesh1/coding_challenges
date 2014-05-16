#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() 
{
    int N, K, unfairness;
    
    cin >> N >> K;
    
    vector<int> candies;
    
    for (int i=0; i<N; i++)
    {
        int numCandies;
        cin >> numCandies;
        candies.push_back(numCandies);
    }
    
    sort(candies.begin(), candies.end());
    
    int indexWithLeastUnfairness = -1;
    
    for (int i=0; i < candies.size() - K+1; ++i)
    {
        int unfairnessAtIndex = candies.at(i + K-1) - candies.at(i);
        
        if (unfairnessAtIndex < unfairness || i == 0)
        {
            indexWithLeastUnfairness = i;
            unfairness     = unfairnessAtIndex;
        }
            
    }
    

    cout << unfairness << "\n";
    
    return 0;
}
