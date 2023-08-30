# Codana Bank - The Banking System Simulation Application

"Codana Bank" is a GUI Windows application developed in C++ and Qt Creator, serving as a simulation of a banking system. The project aimed to create a robust application encompassing various features, including account opening, money transfers, and a payment gateway. Two user types exist within the system: regular customers and administrators. Customers have the ability to open four different types of accounts: savings, short-term investment, long-term investment, and joint accounts.

The application allows customers to perform several actions, such as checking balances, transferring funds to verified recipient accounts, reviewing past transactions, and requesting debit cards if eligible. As an added security measure during card transactions, customers can also obtain dynamic passwords. On the other hand, the admin portal provides functionalities for managing customers, approving account requests, issuing cards, blocking accounts, and viewing all transactions.

The project heavily utilizes object-oriented programming concepts, including inheritance for different account types, polymorphism for user roles, and encapsulation of sensitive data. Further, comprehensive error handling mechanisms have been implemented to handle scenarios such as insufficient funds or inactive cards, and Boost libraries were also leveraged to enhance functionality, such as generating UUIDs.

In addition, a separate payment gateway was developed to simulate real-world card transactions. This involved capturing card numbers, CVVs, expiration dates, and dynamic passwords, and the design was based on the principles of socket programming. Moreover, email notifications and transaction alerts were incorporated to notify users of their activities.

These specifications highlight the key aspects of the "Codana Bank" application, which covers the full range of functionalities expected from a banking application.
