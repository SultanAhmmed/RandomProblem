int sumOfAllDivisors(int n){
	vector<int> ara;
	int sum;
	for( int i = 1; i <= n; i++ ){
		sum = 0;
		for( int j = 1; j * j <= i; j++ ){
			if( i % j == 0 ){
				sum += j;
				if( j != i/j ) sum += (i / j);
			}
		}
		ara.push_back(sum);
	}
	int ans = 0;
	for( int i = 0; i < n; i++ )
	{	
		ans += ara[i];
	}
	return ans;
}
