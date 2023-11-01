int lowerBound(vector<int> &ara, int n, int x) {
	int l = 0,r = n-1;
    int pos = n;
    while( l <= r ){
        int mid = l + ( r - l ) / 2;
        if ( ara[mid] >= x){
            pos = mid;
            r = mid - 1;
        }
        else{
            l =  mid + 1;
        }
    }
    return pos;
}
