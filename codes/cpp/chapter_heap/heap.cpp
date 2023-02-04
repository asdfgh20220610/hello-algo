/**
 * File: heap.cpp
 * Created Time: 2023-01-19
 * Author: LoneRanger(836253168@qq.com)
 */

#include "../include/include.hpp"

void testPush(priority_queue<int> &heap, int val)
{
    heap.push(val); // 元素入堆
    cout << "元素 " << val << " 入堆后" << endl;
    PrintUtil::printHeap(heap);
}
void testPoll(priority_queue<int> &heap)
{
    int val = heap.top();
    heap.pop();
    cout << "堆顶元素 " << val << " 出堆后" << endl;
    PrintUtil::printHeap(heap);
}

int main()
{
    /* 初始化堆 */
    // 初始化小顶堆
    // priority_queue<int, vector<int>, greater<int>> minHeap;
    // 初始化大顶堆
    priority_queue<int, vector<int>, less<int>> maxHeap;

    cout << "以下测试样例为大顶堆" << endl;

    /* 元素入堆 */
    testPush(maxHeap, 1);
    testPush(maxHeap, 3);
    testPush(maxHeap, 2);
    testPush(maxHeap, 5);
    testPush(maxHeap, 4);

    /* 获取堆顶元素 */
    int peek = maxHeap.top();
    cout << "堆顶元素为： " << peek << endl;

    /* 堆顶元素出堆 */
    testPoll(maxHeap);
    testPoll(maxHeap);
    testPoll(maxHeap);
    testPoll(maxHeap);
    testPoll(maxHeap);

    /* 获取堆大小 */
    int size = maxHeap.size();
    cout << "堆元素数量为： " << size << endl;

    /* 判断堆是否为空 */
    bool isEmpty = maxHeap.empty();
    cout << "堆是否为空： " << isEmpty << endl;

    /* 输入列表并建堆 */
    // 时间复杂度为 O(n) ，而非 O(nlogn)
    vector<int> input{1, 3, 2, 5, 4};
    priority_queue<int, vector<int>, greater<int>> minHeap(input.begin(), input.end());
    cout << "输入列表并建立小顶堆后" << endl;
    PrintUtil::printHeap(minHeap);
    return 0;
}
