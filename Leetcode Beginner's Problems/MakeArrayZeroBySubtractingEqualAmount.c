int minimumOperations(int* nums, int numsSize){
    int ans = 0;
    int* count = (int*)calloc(101, sizeof(int));
    for(int i = 0; i < numsSize; i++){
        if(!count[nums[i]] && nums[i]){
            count[nums[i]]++;
            ans++;
        }
    }
    return ans;
}