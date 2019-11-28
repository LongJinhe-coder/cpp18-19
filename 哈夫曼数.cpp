#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include <fstream>
//#include <iostream>
//using namespace std;

#define OK 1
#define ERROR 0
#define OVERFLOW -2
 
typedef int Status;

typedef struct{
	char ch;
	int weight;
	int parent,left,right;
}HTNode,*HuffmanTree;

typedef char ** HuffmanCode;
//����Ȩֵ��С����λ��� 
void Select(HuffmanTree T,int n,int &s1,int &s2){
	int min1,min2;
	int i=1;
	while(T[i].parent!=0&&i<=n){
		i++;
	}
	min1=T[i].weight;
	s1=i;
	i++;
	while(T[i].parent!=0&&i<=n){
		i++;
	}
	if(T[i].weight<min1){
				min2=min1;
				min1=T[i].weight;
				s2=s1;
				s1=i;
			}else
			{
				min2=T[i].weight;
				s2=i;
			}
			i++;
	//ѭ���������Ƚϳ���С�����ڵ� 
	for(int j=i;j<=n;j++){
		if(T[j].parent!=0){
			continue;
		}
			if(T[j].weight<min1){
			min2=min1;
				min1=T[j].weight;
				s2=s1;
				s1=j;
			}else if(T[j].weight>=min1&&T[j].weight<min2){
				min2=T[j].weight;
				s2=j;
			}
	}
		//printf("%d  %d\n",min1,min2);

//cout<<min1<<" "<<min2<<endl;
}
 //������������ 
void CreateHuffmanTree(HuffmanTree &T,int *w,char *z,int n){
	if(n<=1)return;
	int m=2*n-1;
	//���������T 
	T=(HuffmanTree)malloc((m+1)*sizeof(HTNode));
	//T=new HTNode[m+1];
	//��ʼ��Ҷ�ӽ�� 
	for(int i=1;i<=n;i++){
		T[i].weight=w[i-1];
		T[i].ch=z[i-1];
		//	printf("%d\n",T[i].weight);
			//cout<<T[i].weight<<endl;
		T[i].parent=0;
		T[i].left=0;
		T[i].right=0;
	}
	//��ʼ��������� 
	for(int i=n+1;i<=m;i++){
		T[i].ch='#';
		T[i].weight=0;
		T[i].parent=0;
		T[i].left=0;
		T[i].right=0;
	}
	//����ײ�Ҷ�ӽ���������Ϲ���������� 
	for(int i=n+1;i<=m;i++){
		int s1,s2;
		Select(T,i-1,s1,s2);
		T[s1].parent=T[s2].parent=i;
		T[i].left=s1;
		T[i].right=s2;
		T[i].weight=T[s1].weight+T[s2].weight;
//		printf("���׽ڵ�%d-------",T[i].weight);
	}

struct Node{
        char name ;
        int weight;
        int parent;
        int lchild;
        int rchild;
    } node [m+1];
     
    FILE * output  = fopen("C://Users/Administrator/Desktop/���ݽṹʵ��/��������/hufftree.dat","w");
    if(output == NULL){
        printf("�޷����ļ�");
        exit(0);
    }
  //������������ÿһ���ڵ���Ϣ������������ļ� 
    for(int i=1;i<=m;++i){
        node[i].name=T[i].ch;
        node[i].weight=T[i].weight;
       // printf("%d\n",T[i].parent);
        node[i].parent=T[i].parent;
        node[i].lchild=T[i].left;
        node[i].rchild=T[i].right;
        fwrite(&node[i],sizeof(struct Node),1,output);
//         printf("imhere\n");
    }
    fclose(output);
}
//Ҷ�ӽ����� 
void HuffmanCoding(HuffmanTree &T,HuffmanCode &C,int n){

//	C=(HuffmanCode)malloc((n+1)*sizeof(char *));
	C=new char *[n+1];
	//char *cd=(char *)malloc(n*sizeof(char));
	char *cd=new char[n];
	cd[n-1]='\0';
	
	//��Ҷ�ӽ��ѭ��������� 
	for(int i=1;i<=n;i++){
		int start=n-1;
		int c=i;
		int j=T[i].parent;
		while(j!=0){
			if(T[j].left==c)
			cd[start--]='0';
			else
			cd[start--]='1';
			c=j;
			j=T[c].parent;
		}
		C[i]=(char *)malloc((n-start)*sizeof(char));
		strcpy(C[i],&cd[start+1]);
	}
	free(cd);
	printf("create code success\n");
		//cout<<"create code success"<<endl;
}

void PrintHuffmanCode(HuffmanCode C,int *w,char *z,int n) {
	 printf("Huffmancode : \n");
	 //cout<<"Huffmancode : "<<endl;
    for(int i = 1; i <= n; i++)
      printf("%c %d code = %s\n",z[i-1],w[i-1], C[i]);
        //printf("%c %d code = \n",z[i-1],w[i-1]);
        //cout<<z[i-1]<<" "<<w[i-1]<<" code= "<<C[i]<<endl; 
}
//���ļ��е��ַ��������huffmancode�浽��һ���ļ��� 
void Encoding(HuffmanCode C,char *z,int n){
	 char buff[255];
	FILE *fp = NULL;
 fp = fopen("C://Users/Administrator/Desktop/���ݽṹʵ��/��������/ToBeTran.txt", "r");
		 fgets(buff,255, (FILE*)fp);
		 fclose(fp);
		printf("ToBeTran:%s\n",buff);
		//���ַ���ȡ������ŵ��ַ�����buff�� 
	//	printf("%c",buff[0]);
		FILE *fp2 = NULL;
		 fp2 = fopen("C://Users/Administrator/Desktop/���ݽṹʵ��/��������/CodeFile.txt", "w+");
		 int i=0;
		 while(buff[i]!=0){
//		 	printf("��ѭ����\n");
 
		 	for(int j=0;j<n;j++){// buff��ÿһ���ַ����κ͹��������еĽڵ��������Ƚ� 
		 		
		 		if(buff[i]==z[j]){//����ȣ��ͰѶ�Ӧ�ַ���huffmancode�浽�ļ� CodeFile.txt�� 
		 		//	printf("%s\n",C[j+1]);
		 			fputs(C[j+1],fp2);
//		 			printf("���\n");
		 			break;
				 }
		 		
			 }
			 i++; 
		 }
		 fclose(fp2);
		
} 
//��CodeFile.txt�е�huffmancode������ַ��� 
void Decoding(int n,HuffmanCode C,char *z){

HuffmanCode D=new char *[1024];
	 char buff[255];
		 FILE *fp = NULL;
		 fp = fopen("C://Users/Administrator/Desktop/���ݽṹʵ��/��������/CodeFile.txt", "r");
		 fgets(buff, 255, (FILE*)fp);
		 //�Ȱ�CodeFile.txt�е�huffmancodeȡ�����浽buff������ 
		  fclose(fp);
		  fp = fopen("C://Users/Administrator/Desktop/���ݽṹʵ��/��������/TextFile.txt", "w");
		  printf("CodeFile:%s\n",buff);
		  int i=0,j=0,index=0;
		  
		  while(buff[j]!=0){
		  	//char ch[i+1];
		  	//�����ö�ά�������洢�ָ��buff�����е�����huffmancode�ַ�����Ҳ������Ĺؼ����� 
		  char *ch=new char[i+2];
	ch[i+1]='\0';
		  	for(int b=0;b<=i;b++){
		  		ch[b]=buff[b+index];
			  }
		//��buff������ָ��λ���Լ�ָ�����ȵ�huffmancode ���Ƶ���ά����ch���� 
		  D[j]=(char *)malloc(i*sizeof(char));
		strcpy(D[j],&ch[0]);
		  	for(int k=1;k<=n;k++){//��ά�����е�huffmancode�Ͷ������е�huffmancode����Ƚ� 
//		  		printf("��ѭ����\n");
//		  		printf("%s",D[j]);
//		  		printf("��%s\n",C[k]);
		  		if(strcmp(D[j],C[k]) == 0){//����ȣ���Ѵ�huffmancode��Ӧ���ַ����ִ浽�ļ�TextFile.txt 
//		  			printf("���\n");
		  			fputc(z[k-1],fp);
		  				free(ch);
		  				index=j+1;//��ȣ�index��ǵ�ǰ��buff�����е�λ�� 
		  				i=-1;
		  				break;
				  }
			  }
			  j++;
			  i++;
		  }
 
	fclose(fp);
}
// ��֮ǰ��������ļ��Ĺ���������ӡ���� 
void PrintHuffmanTree(HuffmanCode C,int n){
	int m=2*n-1;
	
	struct Node{
        char name ;
        int weight;
        int parent;
        int lchild;
        int rchild;
    } node [m+1];
     
    FILE * input  = fopen("C://Users/Administrator/Desktop/���ݽṹʵ��/��������/hufftree.dat","r");
    if(input == NULL){
        printf("�޷����ļ�");
        exit(0);
    }
    printf("---------------------------------\n");
  printf("name  weight  parent  lchild  rchild\n");
    for(int i=1;i<=m;++i){
        fread(&node[i],sizeof(struct Node),1,input);
//         printf("imhere\n");
	printf("  %c      %d      %d       %d       %d\n",node[i].name,node[i].weight,node[i].parent,
	node[i].lchild,node[i].rchild);
    }
    
    fclose(input);

}
int main(void){
//	 int w[5] = {2, 8, 7, 6, 5};
	
    int n;
    printf("�����ַ�����n: \n");
    //cout<<"�����ַ�����n:"<<endl;
    scanf("%d",&n);
    //cin>>n;
    int w[n];
	char z[n];
    for(int i=0;i<n;i++){
    	printf("�����ַ���Ȩֵ: \n");
    //	cout<<"�����ַ���Ȩֵ:"<<endl;
//    scanf(" %c",&z[i]); 
    scanf("%d",&w[i]);
    //scanf("%c",&z[i]);
    	//cin>>w[i]; 
    	z[i]=getchar();
	}
    HuffmanTree p=new HTNode;
    HuffmanCode code;
    CreateHuffmanTree(p,w,z,n);
    HuffmanCoding(p,code,n);
    PrintHuffmanCode(code,w,z,n);
    Encoding(code,z,n);
    Decoding(n,code,z);
    PrintHuffmanTree(code, n);
    return 0;
}
