    int longestPalindrome(string s) 
    {
        int size = s.size();
        int length=0;
        int i;
        vector<int> v ( 58 );
        
        for( i=0 ; i<size ; i++ )
            v[s[i]-'A']++;
        
        for ( i=0 ; i<58 ; i++ )
        {
            if( v[i] % 2 == 0 )
                length+=v[i];
            else
                length+=v[i]-1;
        }
        
        if( length < size )
            ++length;
        
        return length;
    }
    
