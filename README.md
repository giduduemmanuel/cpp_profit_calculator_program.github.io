# cpp_profit_calculator_program.github.io
Profit Calculator Program – A C++ console application that helps small business owners calculate and track profits for agricultural products (maize, beans, millet). The program computes total cost, selling price, profit, and percentage profit, then logs each transaction to separate CSV files for record-keeping.


```markdown
# Profit Calculator Program

A simple C++ console application designed to help small-scale farmers and traders calculate and track profits for agricultural products. The program allows users to input cost price, selling price, and quantity sold, then computes profit metrics and saves records to CSV files for further analysis.

Features

- 🧮 Profit Calculation: Computes total cost price, total selling price, profit, and percentage profit.
- 📁 CSV Export: Automatically saves transaction records to separate CSV files for each product.
- 🌾 Product-Specific Tracking: Supports three products: Maize, Beans, and Millet.
- 🔄 Interactive Menu: User-friendly console interface with continuous operation until exit.
- 📊 Loss/Profit Notification: Alerts the user if no profit was made in a transaction.

How It Works

1. User chooses whether to continue or exit the program.
2. Selects a product (Maize, Beans, or Millet).
3. Enters:
   - Cost price per unit
   - Selling price per unit
   - Quantity sold
4. Program calculates and displays:
   - Total cost price
   - Total selling price
   - Profit earned
   - Percentage profit
5. Results are saved to a CSV file (`Maize_sales.csv`, `beans_sales.csv`, or `millet_sales.csv`).

Code Structure

- `main.cpp` – Contains all program logic.
- Global Variables: Store user inputs and calculated values.
- Struct `Sales`: Holds transaction data.
- Product Functions: 
  - `maize_func()`
  - `beans_func()`
  - `millet_func()`
- Main Menu: `main_func()` directs user to the selected product.

Example Output

```
===============Welcome to the Profit Calculator Program===============
Do you want to proceed with the program?
1. Continue
2. Exit
1
Please choose item to compute profit by entering the number from below:
1. Maize
2. Beans
3. Millet
4. None
1
Do you want to exit. Type X to exit and Y to proceed:
Y
Enter the cost price
10
Enter the selling price
15
Enter the quantity sold
100
Total cost price = 1000USD
Total selling price = 1500USD
The profit = 500USD
The percentage profit = 50%
Your business is doing well
Thanks for using this program
The record has been added to the CSV successfully
```

CSV Output Format

Each transaction is appended to a product-specific CSV file with the following headers:

```
cost_price, selling_price, quantity_sold, total_cost_price, total_selling_price, profit_earned, percentage_profit
```

Example row:
```
10,15,100,1000,1500,500,50
```

How to Run

1. Ensure you have a C++ compiler installed (e.g., g++).
2. Clone or download the repository.
3. Compile the program:
   ```bash
   g++ main.cpp -o profit_calculator
   ```
4. Run the executable:
   ```bash
   ./profit_calculator
   ```

Requirements

- C++ compiler (C++11 or later recommended)
- Standard libraries: `<iostream>`, `<fstream>`, `<vector>`

Future Enhancements

- Add support for more products.
- Implement a summary report feature.
- Add graphical user interface (GUI).
- Include data visualization for sales trends.

Author

Developed as a practical tool for small business profit tracking in the agricultural sector.

License

This project is open-source and free to use for educational and personal purposes.
```



This README provides a clear overview, setup instructions, usage examples, and future improvement ideas for your project. You can copy and paste it directly into a `README.md` file in your GitHub repository.
