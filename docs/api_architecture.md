PayView API Architecture

Version 1

The system will be designed to support future API integration.

Current Mode

* Demo payments
* Simulated transactions
* Local statistics

Future Mode

* Paytm API
* PhonePe API
* UPI Gateway APIs
* Merchant Dashboard APIs

Data Flow

Customer
↓
QR Payment
↓
Payment Provider
↓
API Server
↓
PayView Device
↓
Display Update

Device Data

* Last Payment Amount
* Last Payment Time
* Daily Sales
* Total Transactions

Future Security

* API Keys
* HTTPS
* Device Authentication
* Merchant Verification