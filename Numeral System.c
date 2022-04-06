#include<stdio.h>
#include<string.h>
#include<math.h>
void binOct();
void binDec();
void binHex();
void octBin();
void octDec();
void octHex();
void decBin();
void decOct();
void decHex();
void hexBin();
void hexOct();
void hexDec();

int main(){
	printf("\t Numeral System\n");
	printf("1. Binary\n");
	printf("2. Octal\n");
	printf("3. Decimal\n");
	printf("4. Hexadecimal\n");
	printf("5. stop\n");
	int ip,op,n;
	do {
		printf("\nChoose input system: ");
		scanf("%d",&ip);
		switch(ip) {
			case 1:
				printf("1. Octal\n");
				printf("2. Decimal\n");
				printf("3. Hexadecimal\n");
				printf("\nChoose output system: ");
				scanf("%d",&op);
				
				switch(op) {
					case 1:
						printf("BIN: ");
						scanf("%d",&n);
						binOct(n);
						break;
					case 2:
						printf("BIN: ");
						scanf("%d",&n);
						binDec(n);
						break;
					case 3:
						printf("BIN: ");
						scanf("%d",&n);
						binHex(n);
						break;
				}
				break;
			case 2:
				printf("1. Binary\n");
				printf("2. Decimal\n");
				printf("3. Hexadecimal\n");
				printf("\nChoose output system: ");
				scanf("%d",&op);
				
				switch(op) {
					case 1:
						printf("OCT: ");
						scanf("%d",&n);
						octBin(n);
						break;
					case 2:
						printf("OCT: ");
						scanf("%d",&n);
						octDec(n);
						break;
					case 3:
						printf("OCT: ");
						scanf("%d",&n);
						octHex(n);
						break;
				}
				break;
			case 3:
				printf("1. Binary\n");
				printf("2. Octal\n");
				printf("3. Hexadecimal\n");
				printf("\nChoose output system: ");
				scanf("%d",&op);
				
				switch(op) {
					case 1:
						printf("DEC: ");
						scanf("%d",&n);
						decBin(n);
						break;
					case 2:
						printf("DEC: ");
						scanf("%d",&n);
						decOct(n);
						break;
					case 3:
						printf("DEC: ");
						scanf("%d",&n);
						decHex(n);
						break;
				}
				break;
			case 4:
				printf("1. Binary\n");
				printf("2. Octal\n");
				printf("3. Decimal\n");
				printf("\nChoose output system: ");
				scanf("%d",&op);
				
				switch(op) {
					case 1:
						hexBin();
						break;
					case 2:
						hexOct();
						break;
					case 3:
						hexDec();
						break;
				}
				break;
		}
	} while(ip<5);
  
	return 0;
}

void binOct(int n) {
	int dec = 0, oct = 0, i=0;
	while(n!=0){
		dec += (n%10) * pow(2,i++);
		n/=10;
	} 
	i=0;
	while(dec!=0){
		oct += (dec%8) * pow(10,i++);
		dec /= 8;
	}
	printf("OCT : %d\n",oct);
}
void binDec(int n) {
	int dec = 0, i=0;
	while(n!=0){
		dec += (n%10) * pow(2,i++);
		n/=10;
	} 
	printf("DEC : %d\n",dec);
}
void binHex(int n) {
	int dec = 0, i=0;
	char hex[20];
	while(n!=0){
		dec += (n%10) * pow(2,i++);
		n/=10;
	} 
	i=0;
	while(dec!=0){
		int r = dec%16;
		if(r < 10)
			hex[i++] = r+48;
		else
			hex[i++] = r+55;
		dec/=16;
	}
	printf("HEX : %s",strrev(hex));
}
void octBin(int n) {
	int dec = 0, bin = 0, i=0;
	while(n!=0){
		dec += (n%10) * pow(8,i++);
		n/=10;
	} 
	i=0;
	while(dec!=0){
		bin += (dec%2) * pow(10,i++);
		dec /= 2;
	}
	printf("BIN : %d\n",bin);
}
void octDec(int n) {
	int dec = 0, i=0;
	while(n!=0){
		dec += (n%10) * pow(8,i++);
		n/=10;
	}
	printf("DEC : %d\n",dec); 
}
void octHex(int n) {
	int dec = 0, i=0;
	char hex[20];
	while(n!=0){
		dec += (n%10) * pow(8,i++);
		n/=10;
	} 
	i=0;
	while(dec!=0){
		int r = dec%16;
		if(r < 10)
			hex[i++] = r+48;
		else
			hex[i++] = r+55;
		dec/=16;
	}
	printf("HEX : %s\n",strrev(hex));
}
void decBin(int n) {
	int bin=0, i=0;
	while(n!=0) {
		bin += (n%2) * pow(10,i++);
		n /= 2;
	}
	printf("BIN : %d\n",bin);
}
void decOct(int n) {
	int oct=0, i=0;
	while(n!=0){
		oct += (n%8) * pow(10,i++);
		n /= 8;
	}
	printf("OCT : %d\n",oct);
}
void decHex(int n) {
	int i=0;
	char hex[20];
	while(n!=0){
		int r = n%16;
		if(r < 10)
			hex[i++] = r+48;
		else
			hex[i++] = r+55;
		n /= 16;
	}
	printf("HEX : %s",strrev(hex));
}
void hexBin() {
	char hex[20];
	int dec=0, p=0;
	printf("HEX : ");
	scanf("%s",hex);
	for(int i=strlen(hex)-1; i>=0; i--)
	{
		if(hex[i]<58)
			dec += (hex[i]-48) * pow(16,p++);
		else
			dec += (hex[i]-55) * pow(16,p++); 
	}
	decBin(dec);
}
void hexOct() {
	char hex[20];
	int dec=0, p=0;
	printf("HEX : ");
	scanf("%s",hex);
	for(int i=strlen(hex)-1; i>=0; i--)
	{
		if(hex[i]<58)
			dec += (hex[i]-48) * pow(16,p++);
		else
			dec += (hex[i]-55) * pow(16,p++); 
	}
	decOct(dec);
}
void hexDec() {
	char hex[20];
	int dec=0, p=0;
	printf("HEX : ");
	scanf("%s",hex);
	for(int i=strlen(hex)-1; i>=0; i--)
	{
		if(hex[i]<58)
			dec += (hex[i]-48) * pow(16,p++);
		else
			dec += (hex[i]-55) * pow(16,p++); 
	}
	printf("DEC : %d ",dec);
}

