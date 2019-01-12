struct Course

{

	char CID[10];
	char CN[10];

};

void readRecs(int, struct Course*);
void dropRecs(int*, struct Course*);
void dispRecs(int, struct Course*);
