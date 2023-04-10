#include<iostream>
#include<iomanip>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int num[20] = {49, 23, 17, 33, 40, 22, 43, 26, 50, 4, 36, 30, 5, 42, 12, 20, 44, 16, 9, 48};

// 打印输出数组
template <size_t N>
void print(const int (&n)[N]){
    for(int i = 0; i < N; i++) cout << n[i] << " ";
    cout << endl;
}
// 定宽打印
void printN(int num[], int N){
    for(int i = 0; i < N; i++) cout << setw(5) << num[i];
    cout << endl;
}
// 交换两个数
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
/*
选择排序：
从后n-1个数里选出最小的那个，和第一个数交换。这样，第一个数就是最小的。对剩下的n-1个数又可以看成一个新的数组，重复前面的操作，直到规模缩小至1。
*/
// 选择排序
void selectionSort(int* start, int* end){
    for(int *i = start; i != end - 1; i++){
        int* minIndex = i;
        for(int *j = i+1; j != end; j++)
            if(*j < *minIndex)minIndex = j;
        swap(i,minIndex);
    }
}
/*
冒泡排序：
从第一个数开始，和后一个数进行比较，如果更大，就交换。这样一直比较交换到最后一个数，最后一个数就一定是最大的。
忽略最后一个数，对前n-1个数重复这样的操作，直到规模缩小至1。
*/
// 冒泡排序
void bubbleSort(int* start, int* end){
    for(int *i = end; i != start + 1; i--){
        for(int *j = start; j+1 != i; j++)
            if(*j > *(j+1))swap(j,j+1);
    }
}
/*
插入排序：
将数组前部视为有序区，初始时有序区只有数组第一个元素，从无序区中拿出第一个元素，向前与有序区的数进行比较，如果找到合适的位置，就插入。
这样，无序区就减少一个元素，有序区增加一个元素。重复这样的操作，直至无序区清空，则完成排列。
*/
// 插入排序
void insertionSort(int* start, int* end){
    for(int *i = start+1; i != end; i++){
        int t = *i;
        int *j = i-1;
        while(true){
            if(t < *j)swap(j,j+1);
            if(j == start || *(j-1) <= t) break;
            j--;
        }
    }
}
/*
快速排序：
定义
归位操作：
即从区间中随便选定一个基准元素，将这个区间进行归位，归位后的区间，区间左部都小于基准元素，区间右部都大于基准元素，基准元素位于左右部之间。

具体实现方法，规定基准元素是区间左端点的元素，设置两个指针i、j，初始时分别指向区间左右端点。
先移动j，将j从右往左移动，直至碰到一个数小于(或小于等于)基准元素，就停止，使得j指向从右往左第一个小于基准元素的数。
然后移动i，将i从左往右移动，直到碰到一个数大于基准元素，就停止，使得i指向从左往右第一个大于基准元素的数。
然后交换i、j所指向的数。
继续重复上述操作，直至i、j相遇，这时，将i、j共同指向的数与基准元素交换，就完成了归位操作。
注意，在循环过程中，请保证每一个循环，i或j一共只移动一步，以免出现i、j同时移动而交错的情况。
其次，需要解释的一点是，在上面那种方式下的归位，i、j共同指向的数，不会比基准元素要大，这样就不会出现最后一次交换，将大于基准元素的数交换到左部去了。
这是因为，我们选定的基准元素在左端，也就意味着，最终和基准元素交换的数，一定会被交换到基准元素左边，所以它必须要比基准元素小，为了保证一点，有一点很关键。
那就是，必须先移动j，再移动i。在i、j即将相遇，假设它们刚刚进行过一次交换之后，已经相邻，这时，i指向的数<=基准元素<=j指向的数。
如果是j先移动，它将先冲到i上面，然后触发i==j的条件，这时，它们指向的数不会大于基准元素。
如果是i先移动，它将先冲到j上面，然后触发i==j的条件，这时，它们指向的数可能会大于基准元素。

整体原理：
对于给定数组，先对它进行一次归位操作，然后对左右部分再分别进行归位操作，得到4个区间，再对每个区间重复归位操作，一直做下去，直到区间被分割成1个元素。
这样，数组就有序了。
我们可以认为，从左往右从小到大是一种自然顺序，而违反这种顺序的，就称为逆序。
我们对一个区间不断地二分，每次二分都使得左右部分是有序的（把左部和右部各看成一个元素），直至二分至只有一个元素，一个元素天然是有序的。
这样的话，这个区间从原子结构到最大的结构，处处都是有序的，那么它总体就是有序的，不存在逆序，也不存在什么逆序对的反例。
我们可以用反证法来证明一点，假设从左往右取了两个数p、q，有p>q。
这显然是不可能的，因为p、q一定会分别落在两个区间A、B内，这两个区间是有序的。
因为，如果区间A、B是一次归位操作中的左右部分的话，这不必多说。B区间里的所有数一定大于等于A区间里的所有数。
如果A、B不是一次归位操作中的两部分，那么，A、B一定分别被包含在更大的区间内，而这更大的区间可能被包含在还要大的区间内，直至最终的父区间C、D是同一次归为操作的左右两边两部分。
又D区间里的所有数一定大于C区间里的所有数，而A、B分别在C、D中。故B区间里的所有数一定大于等于A区间里的所有数。
则有q>=p，这与假设矛盾。

这是反证法的解释。

也可以直观地，从最小的结构往大结构反推（递归的逆过程），来想象。这就是，有序的小结构组合成有序的大结构，有序的大结构组合成更大的有序的大结构，直至整个数组结构都有序的过程。
*/
// 快速排序
void quickSort(int* left, int* right){
    int *i = left;
    int *j = right-1;
    if(left >= j)return; // 只剩一个元素，直接返回
    int t = *i;
    while(i<j){
        if(*i > t && *j <= t)swap(i,j);
        if(*j > t){j--;continue;}
        if(*i <= t)i++;
    }
    swap(left,i);
    quickSort(left,i);
    quickSort(j+1,right);
}
/*
归并排序：
不断二分，直至最小结构。
有序的小结构组合成有序的大结构，有序的大结构组合成更大的有序的大结构，直至整个数组结构都有序的过程。
最小的有序小结构就是1个元素。
其中需要讲的是合并过程。对两个已经有序的数组进行合并，合并成整体有序的数组，这个过程是O(n)级别的。
分别在两个数组首部设置i、j指针，然后比较这两个指针指向的数的大小，如果i指向的数更小，则把这个数放入新数组，并将i指针移至下一位。
如果j指向的数更小，则把j指向的数放入新数组，然后j移至下一位。
重复这个过程，直至遍历完所有数。
如果i、j有一个走到头了，那一个就不走了，只走另一个。
*/
// 归并排序
void mergeSort(int* left, int* right){
    if(left >= right - 1) return;
    int *mid = left + (right - left) / 2;
    mergeSort(left,mid);
    mergeSort(mid,right);
    int* p = new int[right-left];
    int* i = left;
    int* j = mid;
    while(i<mid || j<right) *p++ = (i==mid?*j++:(j==right?*i++:(*i<=*j?*i++:*j++)));
    while(--right!=left-1)*right = *(--p);
    delete []p; 
}
/*
堆排序：
堆是一个基于完全二叉树的结构（一般是，方便维护），它分为大顶堆和小顶堆。以大顶堆为例，它的特点是父节点永远比子节点要大。由这个特性，它的根节点一定是最大的。
堆排序的操作就是，先根据原数据建立一个大顶堆，这个过程至少是O(n)级别的，因为找到了最大的数，至少需要把每个数都比较一遍。
然后把根节点和最后一个叶节点交换一下，并把最后一个叶节点忽略掉（也就是堆的规模-1）。
因为根节点被换成了别的数，破坏了堆的完整性，需要对这个堆进行维护。对堆维护的过程，是从根节点开始的，先把根节点和根节点的子节点中较大的且大于它的那个交换。
这样，根节点那里就维护好了。但这样，刚刚那个子节点不是被替换了吗，又破坏了以这个子节点为根的堆的结构。
然后如此往复，一直维护到叶子节点，因为叶子节点没有子节点了，就终止了。
每个非叶子节点都有两个子节点，每次都只会破坏一侧的子节点，这样，每层都只选择一侧，总的来看就只有一条线，这条线的长度就是堆的深度，也就是logn。
这个维护堆的过程，是O(logn)级别的。
维护完堆，根节点又是最大的数了（维护的时候，根节点是从它的子节点交换上来的，因为根的特性，根节点的两个子节点一定比下面所有节点都要大），然后把根节点再和堆的尾节点交换。
这个尾节点，是忽略一开始的那个尾节点后的堆的尾节点。而取得的这个"最大的数“，其实总的来看，是第二大的，第一大是一开始那个根节点。
然后再忽略这个尾节点（根的规模-1）。
如此往复，不停的维护、交换，直至根的规模减为1，这时，从右往左填满了从大到小的数。这个数组就有序了。
因为维护了(n-1)次，所以级别是O((n-1)logn)。
总的来看，这个算法的复杂度是O(nlogn)的。
*/
// 堆化函数，向下构造
void heapify(int* heap, int root, int nIndex){
    if(2*root+1>nIndex || (heap[2*root+1]<=heap[root]&&2*root+1==nIndex))return;
    else if(2*root+1==nIndex)swap(heap+root,heap+nIndex);
    else if(heap[2*root+1]>heap[root]&&heap[2*root+1]>=heap[2*root+2]){swap(heap+root,heap+2*root+1);heapify(heap,2*root+1,nIndex);}
    else if(heap[2*root+2]>heap[root]&&heap[2*root+2]>heap[2*root+1]){swap(heap+root,heap+2*root+2);heapify(heap,2*root+2,nIndex);}
}
// 堆排序
void heapSort(int* start, int* end){
    int n = end - start;
    int k = n / 2;
    while(--k+1) heapify(start, k, n-1);
    while(--n){swap(start,start+n);heapify(start,0,n-1);}
}
/*
基数排序：
开一个很大的数组n[]。然后对原始数据x进行遍历，并把n[x]的值+1。
遍历完后，n[x]的值就代表原始数据里有n[x]个x。
然后从左往右输出就行，有几个x就输出即几遍。
因为这只要遍历两遍，所以复杂度是O(2n)=O(n)级别的。
*/
// 计数排序
void countingSort(int* start, int* end){
    int* p = new int[1000000]();
    for(int* i = start; i != end; i++) p[*i]++;
    for(int* i = start, *j = p; i != end;) if(*j&&(*j)--||*j++) *i++ = j - p;
    delete []p;
}
/*
还有桶排序和基数排序，不想写了，就讲讲原理吧。

桶排序就是，把n个元素分为k组，假设n个元素都在[a,b），那么k组就分别是[a,a+(b-a)/k)、[a+(b-a)/k,a+2*(b-a)/k).....
假设是平均分配的，那每组都有n/k个元素。然后再分别对每组应用其他排序算法进行排序。
假设其他排序算法的复杂度位O(f(n))，那么总体复杂度就是O(kf(n/k))，可以发现，k越接近n，复杂度就越接近O(n)

基数排序就是按进制来，比如10进制，基数就是10，那么就需要10个桶（因为每个数位有10个数）。
先从低位开始，从左往右把n个数分到10个桶中，每个数对应桶的编号就是那个数位的数字。
低位完成后，再从0号桶到9号桶，分别把数取回数组，这样，这个数组从左往右，低位是从小到大排列的。
然后再对倒数第二位，做一下排序，注意，在把数放到桶的过程，因为是从左到右的，而低位已经有序，所以在桶里的数，低位也是有序的。
取出来的过程，也是从左到右的，这样，低位依旧保持有序，而倒数第二位也有序了。
这样一直做下去，对每一位都进行排序，最后也就完成了从小到大的排序。
因为，高位的分桶和合并的过程优先级较高，如果一个数高位较大，那么它一定会被分到后面，而无关低位的顺序。
对于一个有序的排列，如果高位相同，那么低位一定是从小到大的。
对与每一位进行分桶与合并，都是O(n)级别的（因为本质上还是计数排列），然后一共k位，所以还是O(n)级别

基数排列对于位数较高的数进行排序很有效，这是计数排列所欠缺的。
桶排序对单位不等的数排列有效，因为计数排列和基数排列都是整数的。
*/

// 接下来是自动化测试部分的代码了，可以自动生成测试数据，来测试排序算法的正确性。

// 用于生成随机数组的函数
void generateRandomArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
}

// 用于判断数组是否相等的函数
bool isEqual(int arr1[], int arr2[], int len) {
    for (int i = 0; i < len; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

// 用于打印未通过样例的函数
void printFailedCase(int* arr, int n, int* originArr, int* sortedArr, int i) {
    cout << "Failed Case:" << i << endl;
    cout << "Original:";
    printN(originArr,n);
    cout << "Expected:";
    printN(sortedArr,n);
    cout << "Actual:  ";
    printN(arr,n);
}

// 用于测试排序算法的函数
void testSortAlgorithm(void (*sortAlgorithm)(int*, int*), string algorithmName, int N, int n) {
    cout << "[" << algorithmName << "]" << endl;
    cout << "------------------" << endl;
    int totalTestCases = N; // 测试样例总数
    int passedTestCases = 0; // 通过样例数
    int *arr = new int[n];
    int *originArr = new int[n];
    int *sortedArr = new int[n];
    for (int i = 0; i < totalTestCases; i++) {
        // 生成随机数组
        generateRandomArray(arr, n);
        // 备份数组
        copy(arr, arr + n, originArr);
        copy(arr, arr + n, sortedArr);
        // 调用排序算法
        sortAlgorithm(arr, arr + n);
        sort(sortedArr, sortedArr + n);
        // 判断排序结果是否正确
        if (isEqual(arr, sortedArr, n)) {
            passedTestCases++;
        } else {
            printFailedCase(arr, n, originArr, sortedArr, i);
        }
    }
    cout << "Total:" << totalTestCases << endl;
    cout << "AC:" << passedTestCases << endl;
    cout << "WA:" << totalTestCases - passedTestCases << endl;
    if (totalTestCases == passedTestCases) {
        cout << "All Acepted!" << endl;
    }
    cout << "------------------" << endl;
    delete []arr;
    delete []originArr;
    delete []sortedArr;
}
int main(){
    srand(time(0));
    int N = 10;
    int n = 10;
    // 选择排序
    testSortAlgorithm(selectionSort, "selectionSort", N, n);

    // 插入排序
    testSortAlgorithm(insertionSort, "insertionSort", N, n);

    // 冒泡排序
    testSortAlgorithm(bubbleSort, "bubbleSort", N, n);

    // 快速排序
    testSortAlgorithm(quickSort, "quickSort", N, n);

    // 归并排序
    testSortAlgorithm(mergeSort, "mergeSort", N, n);

    // 堆排序
    testSortAlgorithm(heapSort, "heapSort", N, n);

    // 计数排序
    testSortAlgorithm(countingSort, "countingSort", N, n);
}