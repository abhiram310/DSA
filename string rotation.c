void reverse_array(int* nums, int start, int end){
    int tempa;
    int i;
    int tempb;
    tempb = end-start+1;
    //printf("test start %d", tempb);
    //printf("yo yo\n");
    for(i=0; i<tempb/2; i++){
        //printf("yo\n");
        tempa = nums[start+i];
        nums[start+i] = nums[end-i];
        nums[end-i] = tempa;
    }
}

void main(int* nums, int numsSize, int k){
    k = k%numsSize;
    reverse_array(nums, 0, numsSize-1);
    reverse_array(nums, 0, k-1);
    reverse_array(nums, k, numsSize-1);
    //int arr[1] = {1};
    //reverse_array(arr, 0, 1);
    int i;
    for(i=0; i<numsSize; i++){
        printf("%d.\n", nums[i]);
    }
    
}
