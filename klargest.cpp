#include <vector>
#include <queue>
#include <iostream>

int kth_largest(std::vector<int> values, int k){

    //create queue
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    //sort n find val
    for (int num : values){
        minHeap.push(num);
        if (minHeap.size() > k){
            minHeap.pop();
        }
    }

    return minHeap.top();
    
}

// int main(){
//     std::vector<int> nums = {3, 2, 1, 5, 6, 8};
//     int k = 2;

//     int result = kth_largest(nums, k);

//     std::cout << "The " << k << "th largest element is " << result << "\n";

//     return 0;
// }