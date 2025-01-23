#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>


int main ()
{
	char username[15];
	int age;
	int password;
	int choice;
	char again;
	char ch;

    printf("\t\t\t\t\t*********************************************\n");
	printf("\t\t\t\t\t*                                           *\n");
	printf("\t\t\t\t\t*       ----------------------------        *\n");
	printf("\t\t\t\t\t*         COW FARMING MANAGEMENT            *\n");
	printf("\t\t\t\t\t*       ----------------------------        *\n");
	printf("\t\t\t\t\t*                                           *\n");
	printf("\t\t\t\t\t*                                           *\n");
	printf("\t\t\t\t\t*                                           *\n");
	printf("\t\t\t\t\t*********************************************\n\n\n");
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\t\t\t Please choose your option in below\n");
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	printf("\n");
	printf("Enter Your Name:");
	gets(username);
	printf("\n");
	printf("Login password:");
	scanf("%d",&password);
	printf("\n");
	if(password == 75200) {
	do{

       printf("\t\t\t\t\t\t___________________________\t\t\t\t\n");
       printf("\t\t\t\t\t\t[1].Add new cows account\t\t\t\t\C\n");
   	   printf("\t\t\t\t\t\t___________________________\t\t\t\tH\n");
	   printf("\t\t\t\t\t\t[2].View cows's List\t\t\t\t\tO\n");
	   printf("\t\t\t\t\t\t___________________________\t\t\t\tO\n");
	   printf("\t\t\t\t\t\t[3].Remove cow's account\t\t\t\tS\n");
	   printf("\t\t\t\t\t\t___________________________\t\t\t\tE\n");
	   printf("\t\t\t\t\t\t[4].Labor Information and salary\n");
       printf("\t\t\t\t\t\t___________________________\t\t\n");
       printf("\t\t\t\t\t\t[5].MIlk production Report\t\t\t\tO\n");
	   printf("\t\t\t\t\t\t___________________________\t\t\t\tN\n");
	   printf("\t\t\t\t\t\t[6].Cost and income Report \t\t\t\tE\n");
	   printf("\t\t\t\t\t\t___________________________\n");
	   printf("\t\t\t\t\t\t[7].Disease and Symptoms \n");
	   printf("\t\t\t\t\t\t___________________________\n");
	   printf("\t\t\t\t\t\t[8].Meat production Report \n");
	   printf("\t\t\t\t\t\t___________________________\n");
       printf("\t\t\t\t\t\tEnter your choise :");
       scanf("%d",&choice)	;
	   printf("\n");
	   switch(choice)
	 {
	 	case 0:
	 		{
	 			time_t current_time;
                time(&current_time);
	            printf( "\n\n\t\t\t\t\t\t\t%s\n",ctime(&current_time));
	 			printf("\t\t\t\t\t**************************************************************\n");
	            printf("\t\t\t\t\t*                 -------------------------                  *\n");
	            printf("\t\t\t\t\t*                   WELCOME TO DASHBOARD                     *\n");
	            printf("\t\t\t\t\t*                 -------------------------                  *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t*                                                            *\n");
	            printf("\t\t\t\t\t**************************************************************\n\n\n");
	            printf("\n\t---------------------------->This month Total inome== 37383");
	            printf("\n\t---------------------------->This month Total cost:::4940");
	            printf("\n\t---------------------------->Total Profit Or Losed:=+5647");




	 			break;

			}
		case 1:
			{

				printf("\n");
				printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			    printf("\n");
				printf("\t\t\t\t\t=======================================\n");
				printf("**\t\t\t\t\t..............WELCOME.................\t\t\t\t**\n ");
				printf("\t\t\t\t\t=======================================\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
	            char name[30];
	            int age,addday,addmon,addyear,serialnum,vaday,vamon,vayear;
	            char vaccine[20];
	            char condition[50];
	            FILE *file;
	            file = fopen("test.txt","a");
	            if(file==NULL){
		          printf("File doesn't exist");
	             }
	            else
	          {
	          	 time_t current_time;
                 time(&current_time);
	        	 printf("\t\t---------Add COW----------\t\t\t\t\t%s\n",ctime(&current_time));
	        	 printf("\n");
	        	 printf("\t\t\t Cows serial NUMBER:");
	        	 scanf("%d",&serialnum);
		         printf(" \t\t\t  ------ Cow's name:");
		         scanf("%s",&name);
		         printf("\t\t\t    ---- age-(month):");
		         scanf("%d",&age);
		         printf("\t\t\t\t\t\tcategories:\t\t1.Calves -- 2.Heifers -- 3.Bulls -- 4.Dairy Cows  -- 5.Beef Cattle\n");
		         printf("\t\t\t     -----Categories:");
		         scanf("%s",&condition);
		         printf("\t\t\tVaccinated(yes/NO):");
		         scanf("%s",&vaccine);
		         printf("\t\t\tNext Vaccine date:");
		         scanf("%d/%d/%d",&vaday,&vamon,&vayear);

		         fprintf(file,"\nCows ID:%d, Categories:%s, Name: %s, age: %d month, vaccinated :%s,NEXT vaccination date:%d/%d/%d,DATE:%s",serialnum,condition,name,age,vaccine,vaday,vamon,vayear,ctime(&current_time));
		         printf("\n");
		         printf("\n");
		         printf("\n");
		         printf("\t\t_______________________");
		         printf(" \t\tsuccessfully added");
		         printf("\t\t_______________________");
		         fclose(file);
              }


				break;
		    }
		case 2:
			{
			    printf("\n");
				printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			    printf("\n");
				printf("\t\t\t\t\t=======================================\n");
				printf("**\t\t\t\t\t..............WELCOME.................\t\t\t\t**\n ");
				printf("\t\t\t\t\t=======================================\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				FILE *file;
				char ch;
				file = fopen("test.txt","r");
				if(file==NULL)
				{
					printf("File does not exist");
				}
				else
				{

					while(!feof(file))
					{
					ch = fgetc(file);
					printf("%c",ch);
					}
					fclose(file);
				}

				break;
			}
		case 3:
			{
			    printf("\n");
				printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			    printf("\n");
				printf("\t\t\t\t\t=======================================\n");
				printf("**\t\t\t\t\t..............WELCOME.................\t\t\t\t**\n ");
				printf("\t\t\t\t\t=======================================\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				FILE *file, *temp;
                char name[20], buffer[100];
                int found = 0;

                printf("Enter the name to remove: ");
                scanf("%s", name);

                file = fopen("test.txt", "r");
                temp = fopen("temp.txt", "w");
                if(file == NULL) {
                	printf("File doesn't exist");
                }
                else {
                	while(fgets(buffer, sizeof(buffer), file)) {
                		if(strstr(buffer, name) == NULL) {
                			fprintf(temp, "%s", buffer);
                		}
                		else {
                			found = 1;
                		}
                	}
                	fclose(file);
                    fclose(temp);
                    remove("test.txt");
                    rename("temp.txt", "test.txt");
                    if(found) {
                    	printf("Entry removed successfully\n");
                    }
                    else {
                    	printf("Entry not found\n");
                    }
                }
				break;
			}
		case 4:
			{
				printf("\n");
				printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			    printf("\n");
				printf("\t\t\t\t\t=======================================\n");
				printf("**\t\t\t\t\t..............WELCOME.................\t\t\t\t**\n ");
				printf("\t\t\t\t\t=======================================\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				int laborch;
				char laborname[20],country[20],hometown[20],profession[20];
				int phnnum,idnumber,bank,entrydate,entrymon,entryyear;
			    time_t current_time;
                time(&current_time);
				printf("--------------------Labor information and salary---------------------------\t%s\n",ctime(&current_time));
				printf("[1].create new id for labor\n");
				printf("[2].added Labor daily work report\n");
				printf("[3].added Monthly salary report\n");
				printf("[4].views labor Informatin\n");
				printf("[5].Views labor daily work report\n");
				printf("[6].views salary report\n");
				printf("Choose one:");
				scanf("%d",&laborch);
				switch(laborch)
				{
					case 1:
						{
							time_t current_time;
                            time(&current_time);
							printf("Entry name:");
							scanf("%s",&laborname);
							printf("country name:");
							scanf("%s",&country);
							printf("Hometown:");
							scanf("%s",&hometown);
							printf("contrac Number:");
							printf("\n\t\t\t\t--->1.manager 2.labor\n ");
							printf("working profession:");
							scanf("%s",&profession);
							printf("contrac number:");
							scanf("%d",&phnnum);
							printf("Enty Id number:");
							scanf("%d",&idnumber);
							printf("Bank account number:");
							scanf("%d",&bank);
							FILE *labor;
					        labor = fopen("laborinfo.txt","a");
					        if(labor==NULL){

						        printf("File doesn't exist");
				               }
				            else{

				            	fprintf(labor,"\n-----------------------------------------------------------\n");
				    	        fprintf(labor,"ID NUMBER:%d   ------- Entry date:%s",idnumber,ctime(&current_time));
				    	        fprintf(labor,"\n------------------------------------------------------------");
				    	        fprintf(labor,"\n workarname :%s    Country:%s \n Hometown:%d   Phone Number:%d \n Profession:%s Bank Account:%d",laborname,country,hometown,phnnum,profession,bank);
				    	        fprintf(labor,"                                 Added by:%s",username);
				    	        fprintf(labor,"\n-----------------------------------------------------------\n");
				    	        printf("\t\t\n_______________________");
		                        printf(" \t\t\nsuccessfully added");
		                        printf("\t\t\n_______________________");
				    	        fclose(labor);
					        }
						   break;

						}
					case 2:
					    {
					    	time_t current_time;
                            time(&current_time);
					    	int laboryear,laborday,labormon,laboryear2,workingtime,w,i;
					    	char labormonth[20],labordey[20],labborname[20];
					    	printf("which year:");
					    	scanf("%s",&laboryear);
					    	printf("which month:");
					    	scanf("%s",&labormonth);
					    	printf("working time:");
					    	scanf("%d",&workingtime);
					    	printf("How many workar:");
					    	scanf("%d",&w);
					    	FILE *workreport;
					    	workreport = fopen("workreport.txt","a");
							if(workreport==NULL){

						        printf("File doesn't exist");
				               }
				            else{
				    	   fprintf(workreport,"---------------------%s Farm work Report --------------%s",ctime(&current_time));
				    	   fprintf(workreport,"\n--------------------Total workar was %d ---------------------",w);
				    	   fprintf(workreport,"\n-------------------------------------------------------------");
				           for(i=1;i<w+1;i++)
				           {
				           	printf("Enter worker your names:");
				           	scanf("%s",&labborname);
				           	fprintf(workreport,"\n%s\t\t\t%s--        working time was %d",labborname,labordey,workingtime);

						   }
				    	   fprintf(workreport,"                                 Added by:%s",username);
				    	   fprintf(workreport,"\n-----------------------------------------------------------\n");
				    	   printf("\t\t\n_______________________");
		                   printf(" \t\t\nsuccessfully added");
		                   printf("\t\t\n_______________________");
				    	   fclose(workreport);
					       }
						   break;

					    }
					case 3:
					    {
					    	time_t current_time;
                            time(&current_time);
					    	int saladay,salamon,salayear,paid,salary,workerid;
					    	char status[20];
					    	printf("worker ID Number:");
					    	scanf("%d",&workerid);
					    	printf("\nBank account number:");
					    	scanf("%d",&paid);
					    	printf("salary:");
					    	scanf("%d",&salary);
					    	printf("\n salary status:");
					    	scanf("%s",&status);
					    	printf("\nMONEY paid successfully");
					    	FILE *salaryinfo;
					        salaryinfo = fopen("salaryinfo.txt","a");
					        if(salaryinfo==NULL){

						        printf("File doesn't exist");
				               }
				            else{
				    	   fprintf(salaryinfo,"ID NUMBER:%d                          salary status:%s",workerid,status);
				    	   fprintf(salaryinfo,"\n------------------------------------------------------------");
				    	   fprintf(salaryinfo,"\nBank account NUMBER: %d \t\tsalary:%d euro",paid,salary);
				    	   fprintf(salaryinfo,"  Date:%s                        Added by:%s",ctime(&current_time),username);
				    	   fprintf(salaryinfo,"\n-----------------------------------------------------------\n");
				    	   printf("\t\t\n_______________________");
		                   printf(" \t\t\nsuccessfully added");
		                   printf("\t\t\n_______________________");
				    	   fclose(salaryinfo);
					       }
					    break;

						}
					case 4:
					    {
					    	char oc;
							printf("");
							FILE *labor;
			    		    labor = fopen("laborinfo.txt","r");
			    		    if(labor==NULL)
			    		    {
			    		    	printf("file does not exist");
							}
							else
							{
								printf("-------------VIEW Worker Information --------------\n");
						    	while(!feof(labor))
						    	{
						    		oc = fgetc(labor);
								    printf("%c",oc);

								}
						     	fclose(labor);
							}
							break;



						}
					case 5:
					    {
					    	char on;
							printf("");
							FILE *workreport;
			    		    workreport = fopen("workreport.txt","r");
			    		    if(workreport==NULL)
			    		    {
			    		    	printf("file does not exist");
							}
							else
							{
								printf("-------------VIEW Daily work report --------------\n");
						    	while(!feof(workreport))
						    	{
						    		on = fgetc(workreport);
								    printf("%c",on);

								}
						     	fclose(workreport);
							}
							break;

						}
					case 6:
					    {
					    	char od;
							printf("");
							FILE *salaryinfo;
			    		    salaryinfo = fopen("salaryinfo.txt","r");
			    		    if(salaryinfo==NULL)
			    		    {
			    		    	printf("file does not exist");
							}
							else
							{
								printf("-------------VIEW salary Information  --------------\n");
						    	while(!feof(salaryinfo))
						    	{
						    		od = fgetc(salaryinfo);
								    printf("%c",od);
								}
						     	fclose(salaryinfo);
							}
							break;

						}

				}


				break;
			}
		case 5:
			{
				printf("\n");
				printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			    printf("\n");
				printf("\t\t\t\t\t=======================================\n");
				printf("**\t\t\t\t\t..............WELCOME.................\t\t\t\t**\n ");
				printf("\t\t\t\t\t=======================================\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				int n,production,sum=0,done,totalprice,price;
				int i,day,month,year;
				char cown[30],proday[20];
				time_t current_time;
                time(&current_time);
				printf("--------------------MILK PRODUCTION REPORT----------------------------\t%s\n",ctime(&current_time));
				printf("[1].Added Daily Milk production\n");
				printf("[2].View Daily MIlk production Report\n");
				printf("Choose one:");
				scanf("%d",&done);
				switch(done)
				{
					case 1:
						{
							time_t current_time;
                            time(&current_time);
							printf("how many cows :");
							scanf("%d",&n);

							for(i=1; i<n+1; i++)
							{

								printf("%d. cow daily MILK production: " ,i);
								scanf("%d",&production);
								sum=sum+production;

							}
							printf("%s Milk market price :",proday);
							scanf("%d",&price);
							totalprice=price*sum;
							printf("\n");
							printf(">>>");
							printf("your total MILK production is:%d Liter  -----Total price(%d euro)   -----day(%s Report)------date(%s)",sum,totalprice,proday,ctime(&current_time));
							FILE *milkproduction;
							milkproduction = fopen("MILK Report.txt","a");
							if(milkproduction==NULL){
								printf("File doesn't exist");
							}
							else
							{
								fprintf(milkproduction ,"\n----------------------------------------------------------------------");
								fprintf(milkproduction ,"\n----Day:%s                            ----Date:(%s)",proday,ctime(&current_time));
				    	        fprintf(milkproduction ,"\n %d cows milkproduction was :%d Liter    --total price(%d euro)         Added by:%s ",n,sum,totalprice,username);
				    	        fprintf(milkproduction ,"\n----------------------------------------------------------------------");
				    	        printf("\t\t\n_______________________");
		                        printf(" \t\t\nsuccessfully added");
		                        printf("\t\t\n_______________________");
				    	        fclose(milkproduction);
				    	        break;

							}
					case 2:
						{
							char op;
							printf("");
							FILE *milkproduction;
			    		    milkproduction = fopen("MILK Report.txt","r");
			    		    if(milkproduction==NULL)
			    		    {
			    		    	printf("file does not exist");
							}
							else
							{
								printf("-------------VIEW MILK PRODUCTION REPORT--------------\n");
						    	while(!feof(milkproduction))
						    	{
						    		op = fgetc(milkproduction);
								    printf("%c",op);

								}
						     	fclose(milkproduction);


							}




						}



						}




				}



				break;
			}
		case 6:
			{
				printf("\n");
				printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			    printf("\n");
				printf("\t\t\t\t\t=======================================\n");
				printf("**\t\t\t\t\t..............WELCOME.................\t\t\t\t**\n ");
				printf("\t\t\t\t\t=======================================\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				int cost_income;
				int foodcost,care,labor,equipment,utilities,taxes,miscellaneous,sum;
				printf("[1].Added monthly cost list\n");
				printf("[2].Added monthly income from farm\n");
				printf("[3].View monthly cost list\n");
				printf("[4].View monthly income list\n");
				printf("choose one:");
				scanf("%d",&cost_income);
				switch(cost_income){
				case 1:{

				    char comonth[20];
				    int coyear;
				    time_t current_time;
                    time(&current_time);
				    printf("-----------------Added Monthly cost-----------\t\t%s\n",ctime(&current_time));
				    printf("which month:");
				    scanf("%s",&comonth);
				    printf("which year:");
				    scanf("%d",&coyear);
					printf("\n------------INVESTMENT COST\t\t\t\t----->5000 EURO");
					printf("\ncows feed cost:");
					scanf("%d",&foodcost);
					printf("\nVeterinary Care:");
					scanf("%d",&care);
					printf("\nLabor Costs:");
					scanf("%d",&labor);
					printf("\nEquipment and Machinery:");
					scanf("%d",&equipment);
					printf("\nUtilities:");
					scanf("%d",&utilities);
					printf("\nInsurance and Taxes:");
					scanf("%d",&taxes);
					printf("\nMiscellaneous Expenses:");
					scanf("%d",&miscellaneous);
					printf("\n");
					sum=foodcost+care+labor+equipment+utilities+taxes+miscellaneous;
					printf(" %s MONTH Total cost: %d Euro    -----year %d",comonth,sum,coyear);
					FILE *newfile;
					newfile = fopen("costfile.txt","a");
					if(newfile==NULL){
						 printf("File doesn't exist");
				        }
				    else{
				    	printf("\t\n--------------------MONTHLY COST Report-------------------\n");
				    	fprintf(newfile ,"\n %s MONTH cost was:%d€  ----- Date:%s",comonth,sum,ctime(&current_time));
				    	fprintf(newfile,"\n------------------------------------------------------");
				    	fprintf(newfile,"\n  Feed cost:%d -- Veterinary care:%d\n  Labor cost:%d -- Euipment and Machinery cost:%d\n  Utilisties:%d -- Taxes  :%d\n\tMiscellancous cost:%d",foodcost,care,labor,equipment,utilities,taxes,miscellaneous);
				    	fprintf(newfile,"\n                                *Added by:%s",username);
				    	fprintf(newfile,"\n-------------------------------------------------------");
				    	printf("\t\t\n_______________________");
		                printf(" \t\t\nsuccessfully added");
		                printf("\t\t\n_______________________");
				    	fclose(newfile);
					}

					break;
				}
				case 2:
					{
						time_t current_time;
                        time(&current_time);
						int cattle_sale,milk,caves,total,inyear;
						char inmonth[20];
						printf("-------------montly income-------------------\n");
						printf("Sale of Cattle(euro):");
						scanf("%d",&cattle_sale);
						printf("Milk production income:(euro):");
						scanf("%d",&milk);
						printf("sale of caves:(euro):");
						scanf("%d",&caves);
						total=cattle_sale+milk+caves;
						printf("\n %s month income :%d€ (Euro)   -----------------year %d ",inmonth,total,inyear);
						FILE *income;
					    income = fopen("income.txt","a");
					    if(income==NULL){
						  printf("File doesn't exist");
				           }
				        else{
				    	   fprintf(income,"\n----> %s month income :%d€ (euro)   -----------------Date:%s ",inmonth,total,ctime(&current_time));
				    	   fprintf(income,"\n------------------------------------------------------------");
				    	   fprintf(income,"\n cattle sale:%d;\n MILK production:%d\n Sales of cave:%d",cattle_sale,milk,caves);
				    	   fprintf(income,"                                 Added by:%s",username);
				    	   fprintf(income,"\n-----------------------------------------------------------\n");
				    	   printf("\t\t\n_______________________");
		                   printf(" \t\t\nsuccessfully added");
		                   printf("\t\t\n_______________________");
				    	   fclose(income);
					    }


					break;
					}
				case 3:
			    	{
			    		printf("\n--------------------View farm cost Report-------------------");
			    		FILE *newfile;
			    		char diu;
			    		newfile = fopen("costfile.txt","r");
			    		if(newfile==NULL)
			    		{
			    			printf("file does not exits");
						}
						else
						{
							printf("\n--------------------------------------------------------\n");
							while(!feof(newfile))
							{
								diu = fgetc(newfile);
								printf("%c",diu);

							}
							fclose(newfile);


						}


			    		break;

					}
				case 4:
				    {
				    	printf("\n---------------------View cows farm income Report------------------");
				    	FILE *income;
				    	char nsu;
				    	income = fopen("income.txt","r");
				    	if(income==NULL)
				    	{
				    		printf("file does not exists");
						}
						else
						{
							printf("file is open\n");
							while(!feof(income))
							{
								nsu = fgetc(income);
								printf("%c",nsu);
							}
							fclose(income);

						}





				        break;

					}

				}

				break;
			}
			case 7:
			{
				printf("\n");
				int disease;
				printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			    printf("\n");
				printf("\t\t\t\t\t=======================================\n");
				printf("**\t\t\t\t\t..............WELCOME.................\t\t\t\t**\n ");
				printf("\t\t\t\t\t=======================================\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\t\t--------------------Disease and protection-----------------------------------\n");
				printf("\t\t\t\tDisease list\t\t<------ Top ten common desease\n");
				printf("\t\t_________________________________________________________________________\n");
				printf("1.Mastitis\n2.Bovine Respiratory Disease (BRD)\n3.Bovine Viral Diarrhea (BVD)");
				printf("\n4.Foot Rot\n5.Milk Fever (Hypocalcemia)\n6.Bovine Tuberculosis (TB)");
				printf("\n7.Brucellosis\n8.Blackleg\n9.Anaplasmosis");
				printf("\n10.Lameness");
				printf("\n_____________________________________");
				printf("\nknow more about disease for protection:");
				scanf("%d",&disease);
				switch(disease)
				{
					case 1:
						{
							printf("\n_____________________________________\n");
							printf("Diseases Symptoms:\n");
							printf("_____________________\n");
							printf("----->\n1.Swelling, heat, and redness in the udder\n2.Abnormal milk (clots, blood, or pus)\n3.Pain and sensitivity in the udder\n");
							printf("4.Decreased milk production\n");
							printf("\n-----------------------------------------For Protection--------------------------------------------");
							printf("");

							break;
						}
					case 2:
						{
							printf("\n_____________________________________\n");
							printf("Diseases Symptoms:\n");
							printf("_____________________\n");
							printf("\n1.Coughing\n2.Nasal discharge (clear or mucous)\n3.Fever");
							printf("\n4.Rapid or labored breathing\n5.Decreased appetite");
							printf("\n6.Lethargy");
							break;
						}
					case 3:
						{
							printf("\n_____________________________________\n");
							printf("Diseases Symptoms:\n");
							printf("_____________________\n");
							printf("\n1.Diarrhea (may be bloody or watery)\n2.Fever\n3.Reduced milk production,\n4.Oral ulcers\n5.Respiratory symptoms (coughing, nasal discharge)");
							break;
						}
					case 4:
						{
							printf("\n_____________________________________\n");
							printf("Diseases Symptoms:\n");
							printf("_____________________\n");
							printf("\n1.Lameness\n2.Swelling and inflammation of the affected hoof\n3.Foul odor from the affected hoof\n");
							printf("Reluctance to stand or bear weight on the affected limb\n");
							break;
						}
					case 5:
						{
							printf("\n_____________________________________\n");
							printf("Diseases Symptoms:\n");
							printf("_____________________\n");
							printf("\n1.Weakness\n2.Muscle tremors\n3.Stiff gait\n4.Decreased appetite\n5.Cold extremities\n6.In severe cases: recumbency, coma, death");
							break;

						}
					case 6:
						{
							printf("\n_____________________________________\n");
							printf("Diseases Symptoms:\n");
							printf("_____________________\n");
							printf("\n1.Chronic cough\n2.Weight loss\n3.Decreased milk production\n4.Enlarged lymph nodes (may be palpable)\n5.Difficulty breathing\n6Fever.");
							break;

						}
					case 7:
						{
							printf("\n_____________________________________\n");
							printf("Diseases Symptoms:\n");
							printf("_____________________\n");
							printf("\n1.Abortion (often late-term)\n2.Infertility\n3.Retained placenta\n4.Reduced milk production\n5.Joint swelling and lameness\n6.Fever");
							break;
						}
					case 8:
						{
							printf("\n_____________________________________\n");
							printf("Diseases Symptoms:\n");
							printf("_____________________\n");
							printf("\n1.Sudden onset of severe lameness\n2.Swelling and crepitus (gas production) in affected muscles\n3.Fever\n4.Depression\n5.Loss of appetite");
							break;
						}
					case 9:
						{
							printf("\n_____________________________________\n");
							printf("Diseases Symptoms:\n");
							printf("_____________________\n");
							printf("\n1.Anemia (pale mucous membranes)\n2.Jaundice (yellowing of mucous membranes)\n3.Fever\n4.Weakness\n5.Weight loss\n6.Decreased milk production");
							break;

						}
					case 10:
						{
					    	printf("\n_____________________________________\n");
							printf("Diseases Symptoms:\n");
							printf("_____________________\n");
							printf("\n1.Limping or favoring one limb\n2.Reluctance to stand or walk\n3.welling or heat in the affected limb or hoof\n");
							printf("\n1.Changes in gait or posture\n2.Decreased milk production\n");
							break;

						}



				}

				break;
			}
		case 8:
			{
				int dom;
				time_t current_time;
                time(&current_time);
				printf("---------------meat production Report----------\t\t%s\n",ctime(&current_time));
				printf("1.Calculate Meat production of farm\n");
				printf("2.View meat production report\n");
				printf("enter your chooice:");
				scanf("%d",&dom);
				switch(dom)
				{
					case 1:
						{

							printf("\n");
			            	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
			            	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			                printf("\n");
				            printf("\t\t\t\t\t=======================================\n");
				            printf("**\t\t\t\t\t..............WELCOME.................\t\t\t\t**\n ");
				            printf("\t\t\t\t\t=======================================\n");
			            	printf("\n");
		            		printf("\n");
			            	printf("\n");
			            	printf("\n");
		            		printf("\n");
				            int weight,weightcal,excuding,market,totalprice;
			            	printf("\n------------------------------Meat production Report---------------------\n");
		             		printf("Enter your cows Weight:");
		            		scanf("%d",&weight);
		            		weightcal=(weight*30)/100;
		            		excuding=weight-weightcal;
			            	printf("\n 30 percent will be weight excluding weight:%d",excuding);
			            	printf("\nEnter your today Meat Market price(per kg):");
			            	scanf("%d",&market);
			            	totalprice=excuding*market;
			            	printf("\nYOUR total price will be:%d",totalprice);
			            	FILE *meat;
			            	meat = fopen("meatproduction.txt","a");
			            	if(meat==NULL){
				            	printf("File doesn't exist");
				                }
				           else{
				             fprintf(meat,"\nyour Meat production was %d  and price was %d\t%s",excuding,totalprice,ctime(&current_time));
				             fprintf(meat,"\n------------------------------------------------------------");
				             printf("\t\t\n_______________________");
		                     printf(" \t\t\nsuccessfully added");
		                     printf("\t\t\n_______________________");
				             fclose(meat);
					       }
					        break;
						}
					case 2:
					{
						printf("\n---------------------View Meat production report------------------");
				    	FILE *meat;
				    	char no;
				    	meat = fopen("meatproduction.txt","r");
				    	if(meat==NULL)
				    	{
				    		printf("file does not exists");
						}
						else
						{
							printf("file is open\n");
							while(!feof(meat))
							{
								no = fgetc(meat);
								printf("%c",no);
							}
							fclose(meat);

						}
						break;




					}

				}

			break;



			}




		 default:
	     printf("\t\t=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!\n");
	     printf("\t\t\tNOT A CORRECT OPTION\t\t\t\t\t <<-+-+-+-= \n");
	     printf("\t\t=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!\n");



		}
	  printf("\n");
	  printf("\n");
	  printf("\t\t\t\t\t\t................................\n");
	  printf("\t\t\t\t\t\t\tTHANK YOU %s \n",username);
	  printf("\t\t\t\t\t\t................................\n");
	  printf("\n");
	  printf("\n");
	  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
	  printf("%s,Do you want to another try(y/n):",username);
	  scanf("%s",&again);
	  printf("\n");
	  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");




	} while(again=='y' || again=='Y');


}else{
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\t\t\t\t=+=+=+=+=+=+=+= you entered a worng password =+=+=+=+=+=+=");
}





	getch ();
}






