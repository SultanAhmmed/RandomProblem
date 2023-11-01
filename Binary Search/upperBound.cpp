int upperBound(vector<int> &arr, int x, int n){
	int pos = n;
	int l = 0, r = n-1;
	while( l <= r )
	{
		int mid = l + ( r - l ) / 2;
		if( arr[mid] > x ){
			pos = mid;
			r = mid - 1;
		}
		else l = mid + 1; 
	}
	return pos;
}
