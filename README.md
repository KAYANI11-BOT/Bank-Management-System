# 💼 Bank Management System (OOP-Based)

A clean and modular **Bank Management System** developed using **Python and Object-Oriented Programming (OOP)** principles. This project simulates essential banking operations such as creating accounts, deposits, withdrawals, account search, and balance tracking using class-based structure. It’s ideal for learners exploring how OOP can be used in real-world applications.


## 📌 Features

* 🧾 Create and manage bank accounts using classes
* 💰 Deposit and withdraw funds with proper validation
* 🔍 Find specific accounts by account number or name
* 🏆 Identify the account with the highest balance
* 📄 File-based storage for persistent data
* 🧱 Clean, modular OOP design for scalability and readability


## 🧱 OOP Concepts Used

* **Classes and Objects**: Each bank account is represented as an object of a class.
* **Encapsulation**: Account data is managed through class methods, preventing direct modification.
* **Abstraction**: Internal implementation is hidden from the user; only relevant functions are exposed.
* **Modularity**: Each feature (deposit, withdraw, search, etc.) is defined in separate class methods for maintainability.


## 🛠️ Class & Module Description

### 🧾 `BankAccount` Class

Handles individual account operations and stores customer data.

#### Attributes:

* `account_number`
* `name`
* `account_type`
* `balance`

#### Key Methods:

| Method             | Description                                               |
| ------------------ | --------------------------------------------------------- |
| `deposit(amount)`  | Adds the specified amount to the account balance.         |
| `withdraw(amount)` | Subtracts the specified amount if sufficient funds exist. |
| `display_info()`   | Displays account details.                                 |



### 🏦 `BankSystem` Class

Manages multiple bank accounts and high-level operations.

#### Key Methods:

| Method                     | Description                                                |
| -------------------------- | ---------------------------------------------------------- |
| `read_accounts()`          | Loads account data from file into memory as objects.       |
| `display_all_accounts()`   | Displays info for all accounts in the system.              |
| `find_account(acc_number)` | Searches and returns the account object by account number. |
| `get_highest_balance()`    | Finds and displays the account with the highest balance.   |



## 📁 Project Structure

```
BankManagementSystem/
│
├── main.py                  # Entry point of the system
├── accounts.txt             # File storing account records
├── bank_account.py          # Contains BankAccount class
├── bank_system.py           # Contains BankSystem class and logic
└── README.md                # Project documentation
```


## 📂 Data Format (accounts.txt)

Each line in the file contains account information separated by commas:

```
<account_number>,<name>,<account_type>,<balance>
```

**Example:**

```
1001,John Doe,Savings,1500.0
1002,Jane Smith,Checking,2200.0
```



## 🚀 Getting Started

### ✅ Requirements

* Python 3.x

### ▶️ How to Run

 Clone the repository:

   ```bash
   git clone https://github.com/yourusername/BankManagementSystem.git
   cd BankManagementSystem
   ```

## 🧠 Sample Output

```
=== Bank Management System ===

1. Display All Accounts
2. Deposit Money
3. Withdraw Money
4. Find Account
5. Show Account with Highest Balance
6. Exit

Enter your choice:

🔮 Future Enhancements

* Add a GUI using Tkinter or PyQt
* Integrate with SQLite or PostgreSQL
* Add user login & authentication
* Implement transaction history per account
* Export data to CSV or Excel

🙌 Contributing

Feel free to fork this project and submit pull requests. If you have suggestions or feature requests, open an issue for discussion.

