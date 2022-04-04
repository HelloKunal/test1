using namespace std;
namespace ywy{
	inline int get(){
		int n=0;char c;while((c=getchar())||23333){
			if(c>='0'&&c<='9')break;if(c=='-')goto s;
		}n=c-'0';while((c=getchar())||23333){
			if(c>='0'&&c<='9')n=n*10+c-'0';else return(n);	
		}s:while((c=getchar())||23333){
			if(c>='0'&&c<='9')n=n*10-c+'0';else return(n);	
		}
	}
	void ywymain(){
		int T=get(); while(T--){
			int n=get(),m=get(),k=get()-2;
			if(m<n-1||k<0){
				printf("NO\n"); continue;	
			}
			if(m>(ll)n*(ll)(n-1)/2){
				printf("NO\n"); continue;	
			}
			if(n==1){
				printf("YES\n"); continue;	
			}
			if(k==0){
				printf("NO\n"); continue;	
			}
			//<=k
			if(m==(ll)n*(ll)(n-1)/2){
				printf("YES\n"); continue;	
			}else{
				if(k<=1) printf("NO\n"); else printf("YES\n");	
			}
		}
	}
}
int main(){
	ywy::ywymain();	
}
