a[10],b[2];main(n,i,j,k){
	for(scanf("%d",&n);n--;){
		for(i=0;i<10;i++)scanf("%d",a+i);
		for(j=0;j<1024;j++){
			for(*b=b[1]=i=0;i<10;i++){
				k=(j>>i)&1;
				if(b[k]>a[i])break;
				b[k]=a[i];
			}
			if(i==10){puts("YES");break;}
		}
		if(j==1024)puts("NO");
	}
}