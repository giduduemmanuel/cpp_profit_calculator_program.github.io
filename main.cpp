#include <iostream> //used for input (cin) and output (cout)
#include <fstream> //file stream library used for reading from and writing to files
#include<vector> //vector library used to store records dynamically

	using namespace std;
	//create global variables to hold values
	float cost_price;
	float selling_price;
	float total_cost_price;
	float total_selling_price;
	float quantity_sold;
	float profit;
	float percent_profit;
	int product_choice;
	int select_choice;
	string user_break;
	
	//parse functions here
	void maize_func();
	void beans_func();
	void millet_func();
	void main_func();
	
	//Define a structure
	struct Sales{
		float costprice;
		float sellingprice;
		float quantitysold;
		float totalcostprice;
		float totalsellingprice;
		float proft_earned;
		float percentage_profit;
	};

int main() {
	//create a do while to help us run the program continously
	cout<<"===============Welcome to the Profit Calculator Program==============="<<endl;
	do{
		cout<<"Do you want to proceed with the program?"<<endl;
		cout<<"1. Continue \n2. Exit"<<endl;
		cin>>select_choice;
		switch(select_choice){
			case 1:
				main_func();
				break;
			case 2:
				cout<<"Thanks for using this program"<<endl;
				break;
			default:
				cout<<"You did not enter a valid choice"<<endl;
		}	
	}
	while(select_choice!=2);
	

	
	return 0;
}

void maize_func(){
	//create a vector to store the records in memory
	//the vector will take up input from the structure and i will name it maize_records
	//if it will take in integer we write as vector<int>vector_name;
	vector<Sales> maize_records;
	//create and open the csv file
	ofstream file("Maize_sales.csv",ios::app);
	//write the csv headers
	//write header only once
	if(file.tellp()==0){
		file<<"cost_price, selling_price, quantity_sold, total_cost_price, total_selling_price, profit_earned, percentage_profit\n";
	}
	
		
	//create a while loop to loop through the computation
	while(true){
		
		//terminate the while loop if the user types x
		cout<<"Do you want to exit. Type X to exit and Y to proceed:   "<<endl;
		cin>>user_break;
		if (user_break=="x"|| user_break=="X"){
			cout<<"You have exited this computation of maize successfully"<<endl;
			cout<<"**************Thanks for using this program**************"<<endl;
			break;
		}
			
		
		//ask user for input of cost price, selling price, and quantity sold
		cout<<"Enter the cost price \n"<<endl;
		cin>>cost_price;
		
		cout<<"Enter the selling price \n";
		cin>>selling_price;
		
		cout<<"Enter the quantity sold \n";
		cin>>quantity_sold;
		
		//compute the total_cost_price
		total_cost_price = cost_price*quantity_sold;
		total_selling_price=selling_price*quantity_sold;
		
		cout<<"Total cost price = "<<total_cost_price<<"USD"<<endl;
		cout<<"Total selling price = "<<total_selling_price<<"USD"<<"\n";
		
		profit = total_selling_price-total_cost_price;
		cout<<"The profit = "<<profit<<"USD"<<endl;
		
		percent_profit = (profit/total_cost_price)*100;
		cout<<"The percentange profit = "<<percent_profit<<"%"<<endl;
		
		//Check if the owner made a loss
		if (profit<=0){
			cout<<"You did not make any profit today! "<<endl;
			cout<<"**************Thanks for using this program**************"<<endl;
		}
		else{
			cout<<"Your business is doing well"<<endl;
			cout<<"**************Thanks for using this program**************"<<endl;
		}
		
		//create a maize object from the Sales structure to store the calculated values
		Sales maize{
			cost_price,
			selling_price,
			quantity_sold,
			total_cost_price,
			total_selling_price,
			profit,
			percent_profit
		
		};
		//add these records to the vector maize_records
		maize_records.push_back(maize);
		//write each record to the file
		file<<cost_price<<","
			<<selling_price<<","
			<<quantity_sold<<","
			<<total_cost_price<<","
			<<total_selling_price<<","
			<<profit<<","
			<<percent_profit<<"\n";
		
		//add a confirmation that record has been added successfully
		cout<<"The record has been added to the CSV successfully"<<endl;
		cout<<"**************Thanks for using this program**************"<<endl;
	}
	//close the file after exiting the loop
	file.close();	
}


void beans_func(){
	//create a vector to store the records in memory
	//the vector will take up input from the structure and i will name it beans_records
	//if it will take in integer we write as vector<int>vector_name;
	vector<Sales> beans_records;
	//create and open the csv file
	ofstream file("beans_sales.csv",ios::app);
	//write the csv headers
	//write header only once
	if(file.tellp()==0){
		file<<"cost_price, selling_price, quantity_sold, total_cost_price, total_selling_price, profit_earned, percentage_profit\n";
	}
	
	while(true){
		//terminate the while loop if the user types x
		cout<<"Do you want to exit. Type X to exit and Y to proceed:   "<<endl;
		cin>>user_break;
		if (user_break=="x"|| user_break=="X"){
			cout<<"You have exited this computation of beans successfully"<<endl;
			cout<<"**************Thanks for using this program**************"<<endl;
			break;
		}
		
		
		
		//ask user for input of cost price, selling price, and quantity sold
		cout<<"Enter the cost price \n"<<endl;
		cin>>cost_price;
		
		cout<<"Enter the selling price \n";
		cin>>selling_price;
		
		cout<<"Enter the quantity sold \n";
		cin>>quantity_sold;
		
		//compute the total_cost_price
		total_cost_price = cost_price*quantity_sold;
		total_selling_price=selling_price*quantity_sold;
		
		cout<<"Total cost price = "<<total_cost_price<<"USD"<<endl;
		cout<<"Total selling price = "<<total_selling_price<<"USD"<<"\n";
		
		profit = total_selling_price-total_cost_price;
		cout<<"The profit = "<<profit<<"USD"<<endl;
		
		percent_profit = (profit/total_cost_price)*100;
		cout<<"The percentange profit = "<<percent_profit<<"%"<<endl;
		
		//Check if the owner made a loss
		if (profit<=0){
			cout<<"You did not make any profit today! "<<endl;
			cout<<"**************Thanks for using this program**************"<<endl;
		}
		else{
			cout<<"Your business is doing well"<<endl;
			cout<<"**************Thanks for using this program**************"<<endl;
		}
		
		//create a beans object from the Sales structure to store the calculated values
		Sales beans{
			cost_price,
			selling_price,
			quantity_sold,
			total_cost_price,
			total_selling_price,
			profit,
			percent_profit
		
		};
		//add these records to the vector maize_records
		beans_records.push_back(beans);
		//write each record to the file
		file<<cost_price<<","
			<<selling_price<<","
			<<quantity_sold<<","
			<<total_cost_price<<","
			<<total_selling_price<<","
			<<profit<<","
			<<percent_profit<<"\n";
		
		//add a confirmation that record has been added successfully
		cout<<"The record has been added to the CSV successfully"<<endl;
		cout<<"**************Thanks for using this program**************"<<endl;
	}
	//close the file after exiting the loop
	file.close();
	
}

void millet_func(){
	//create a vector to store the records in memory
	//the vector will take up input from the structure and i will name it beans_records
	//if it will take in integer we write as vector<int>vector_name;
	vector<Sales> millet_records;
	//create and open the csv file
	ofstream file("millet_sales.csv",ios::app);
	//write the csv headers
	//write header only once
	if(file.tellp()==0){
		file<<"cost_price, selling_price, quantity_sold, total_cost_price, total_selling_price, profit_earned, percentage_profit\n";
	}
	
	while(true){
		//terminate the while loop if the user types x
		cout<<"Do you want to exit. Type X to exit and Y to proceed:   "<<endl;
		cin>>user_break;
		if (user_break=="x"|| user_break=="X"){
			cout<<"You have exited this computation of millet successfully"<<endl;
			cout<<"**************Thanks for using this program**************"<<endl;
			break;
		}
		
		//ask user for input of cost price, selling price, and quantity sold
		cout<<"Enter the cost price \n"<<endl;
		cin>>cost_price;
		
		cout<<"Enter the selling price \n";
		cin>>selling_price;
		
		cout<<"Enter the quantity sold \n";
		cin>>quantity_sold;
		
		//compute the total_cost_price
		total_cost_price = cost_price*quantity_sold;
		total_selling_price=selling_price*quantity_sold;
		
		cout<<"Total cost price = "<<total_cost_price<<"USD"<<endl;
		cout<<"Total selling price = "<<total_selling_price<<"USD"<<"\n";
		
		profit = total_selling_price-total_cost_price;
		cout<<"The profit = "<<profit<<"USD"<<endl;
		
		percent_profit = (profit/total_cost_price)*100;
		cout<<"The percentange profit = "<<percent_profit<<"%"<<endl;
		
		//Check if the owner made a loss
		if (profit<=0){
			cout<<"You did not make any profit today! "<<endl;
			cout<<"**************Thanks for using this program**************"<<endl;
		}
		else{
			cout<<"Your business is doing well"<<endl;
			cout<<"**************Thanks for using this program**************"<<endl;
		}
		//create a millet object from the Sales structure to store the calculated values
		Sales millet{
			cost_price,
			selling_price,
			quantity_sold,
			total_cost_price,
			total_selling_price,
			profit,
			percent_profit
		
		};
		//add these records to the vector millet_records
		millet_records.push_back(millet);
		//write each record to the file
		file<<cost_price<<","
			<<selling_price<<","
			<<quantity_sold<<","
			<<total_cost_price<<","
			<<total_selling_price<<","
			<<profit<<","
			<<percent_profit<<"\n";
		
		//add a confirmation that record has been added successfully
		cout<<"The record has been added to the CSV successfully"<<endl;
		cout<<"**************Thanks for using this program**************"<<endl;
		
	}
	
}

void main_func(){
	//make decisions and help user with what to see and compute
	cout<<"Please choose item to compute profit by entering the number from below: "<<endl;
	cout<<"1. Maize \n2. Beans \n3. Millet \n4. None"<<endl;
	cin>>product_choice;
	if (product_choice==1){
		maize_func();
	}
	else if(product_choice==2){
		beans_func();
	}
	else if(product_choice==3){
		millet_func();
	}
	else if (product_choice==4){
		cout<<"You have not Chosen anything!"<<endl;
		cout<<"**************Thanks for using this program**************"<<endl;
	}
	else{
		cout<<"Ensure to choose a valid option"<<endl;
		cout<<"**************Thanks for using this program**************"<<endl;
	}
}
