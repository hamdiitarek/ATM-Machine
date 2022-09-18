#include <stdio.h>


// global variables

float balance; //intialize balance
float smartbalance; //intialize smartwallet balance
float credit_balance; //intialize credit balance
int anotherTransaction; //intialize another transaction
int amountToDeposit; //intialize amount to diposit
int amountToWidthdraw; //intialize amount to withdraw
int cardlessAccount;  //intialize cardless account
char name[20]; //intialize name
int limit; //intialize limit
int smartoption; //intialize smartoption
int cardchoice; //intialize cardchoice
int account; //intialize account
int smartwallet; //intialize smart wallet
int otp; //intialize otp
int card; //intialize card
int pin; //intialize pin
int cvv; //intialize cvv
int month; //intialize month
int year; //intialize year
char user1[20] = "Ahmed"; //set user name 1
char bank1[20] = "CIB"; //set bank1 name
int smartwallet1 = 11223344; //set smartwallet1 address
int otp1 = 1234; // set otp 1 
int account1 = 111222333444; //set account 1 address
int card1 = 1111222233334444; //set card 1 address
int pin1 = 1234; // set pin 1
int cvv1 = 123;//set cvv 1
int month1 = 1; //set month 1
int year1 = 24; //set year 1
char user2[20] = "Dina"; //set user name 2
char bank2[20] = "QNB"; //set bank name 2
int smartwallet2 = 55667788; //set smartwallet2 address
int otp2 = 5678; //set otp 2
int account2 = 555666777888; //set account 2 address
int card2 = 5555666677778888; //set card 2 address
int pin2 = 5678; //set pin 2
int cvv2 = 567; //set cvv 2
int month2 = 2; //set month 2
int year2 = 24; //set year 2
char user3[20] = "Hamdi"; //set user name 3
char bank3[20] = "Alahly"; //set bank name 3
int smartwallet3 = 99112233; //set smartwallet3 address
int otp3 = 9123; //set otp 3
int account3 = 999111222333; //set account 3 address
int card3 = 9999111122223333; //set card 3 address
int pin3 = 9123; //set pin 3
int cvv3 = 912; //set cvv 3
int month3 = 3; //set month 3
int year3 = 24; //set year 3
char user4[20] = "Youssef"; //set user name 4
char bank4[20] = "CIB"; // set bank name 4
int smartwallet4 = 44556677; //set smartwallet4 address
int otp4 = 4567; //set otp 4
int account4 = 444555666777; // set account 4
int card4 = 4444555566667777; // set card 4
int pin4 = 4567; // set pin 4
int cvv4 = 456; //set cvv4
int month4 = 4; // set month 4
int year4 = 24; //set year 4
float temp_b; // intialize temp balance
int i = 0; //used for counting
int* iptr = &i; //used for counting
int s = 0; //used for counting
int* sptr = &s; //used for counting
int total_loan; //loan total amount
int loan_installmet; //the amount that should be paid monthly
int loan_payment;   //amount the user will deposit
int bills_paid;  //pay bills 
int bill_choice;   //pay bills choice
int study_acc;   //study expenses account
int study_payment;  //study expenses payment
int uni_acc;     //uni account validation
char username_11[20]; //intialize username
char b_name[20]; //intiaize bank name


// function prototype
int cardless_validation();
int smartwallet_validation();
int cardless();
int outro();
int card_validation();
int card_services();

int main(void) {
    printf("\n         ********************Welcome to our ATM services********************       \n\n");
    printf("Choose \n1 for Cardless Services \n2 for Card Services\n\nChoice: ");
    scanf_s("%d", &cardchoice);

    if (cardchoice == 1)
    {
        cardless(); //calls cardless function
        outro(); //calls outro function
    }
    else
    {
        if (cardchoice == 2)
        {
            card_validation();    //call card validation function
            card_services(); //call card services function
            outro(); //call outro

        }
        else {
            printf("\nChoose Option again\n");
            main(); //calls main function
        }
    }



}
/*  smartwallet validation is used to check and obtain user credintials and verify user  */

int smartwallet_validation() {
    printf("\nEnter smartwallet Number: ");
    scanf_s("%d", &smartwallet);
    while (smartwallet != smartwallet1 && smartwallet != smartwallet2 && smartwallet != smartwallet3 && smartwallet != smartwallet4)
    {
        printf("\nInvalid smartwallet number , please re-enter smartwallet number: \n");
        scanf_s("%d", &smartwallet);
    }
    if (smartwallet == smartwallet1)
    {
        printf("\nPlease enter you 4 digits OTP: ");
        scanf_s("%d", &otp);
        while (otp != otp1)
        {
            printf("\nInvalid OTP, Please Re-enter: ");
            scanf_s("%d", &otp);
        }
        if (otp == otp1)
        {
            smartbalance = 20000;
        }

    }
    else if (smartwallet == smartwallet2)
    {
        printf("\nPlease enter you 4 digits OTP: ");
        scanf_s("%d", &otp);
        while (otp != otp2)
        {
            printf("\nInvalid OTP, Please Re-enter: ");
            scanf_s("%d", &otp);
        }
        if (otp == otp2)
        {
            smartbalance = 30000;

        }
    }
    else if (smartwallet == smartwallet3)
    {
        printf("\nPlease enter you 4 digits OTP: ");
        scanf_s("%d", &otp);
        while (otp != otp3)
        {
            printf("\nInvalid OTP, Please Re-enter: ");
            scanf_s("%d", &otp);
        }
        if (otp == otp3)
        {
            smartbalance = 40000;
        }

    }
    else if (smartwallet == smartwallet4)
    {
        printf("\nPlease enter you 4 digits OTP: ");
        scanf_s("%d", &otp);
        while (otp != otp4)
        {
            printf("\nInvalid OTP, Please Re-enter: ");
            scanf_s("%d", &otp);
        }
        if (otp == otp4)
        {
            smartbalance = 50000;
        }

    }
    return 0;
}

/* cardless validation used to verify and obtain user information like balance etc. for cardless services*/

int cardless_validation() {

    printf("\nEnter Account Number: ");
    scanf_s("%d", &account);
    while (account != account1 && account != account2 && account != account3 && account != account4)
    {
        printf("Invalid account number , please re-enter account number: ");
        scanf_s("%d", &account);
    }
    if (account == account1)
    {
        printf("\nPlease enter you 4 digits pin: ");
        scanf_s("%d", &pin);
        while (pin != pin1)
        {
            printf("\nInvalid pin, Please Re-enter: ");
            scanf_s("%d", &pin);
        }
        if (pin == pin1)
        {
            balance = 1000000;
            credit_balance = -1500;
            total_loan = 2000000;
            loan_installmet = 50000;
        }

    }
    else if (account == account2)
    {
        printf("\nPlease enter you 4 digits pin: ");
        scanf_s("%d", &pin);
        while (pin != pin2)
        {
            printf("\nInvalid pin, Please Re-enter: ");
            scanf_s("%d", &pin);
        }
        if (pin == pin2)
        {
            balance = 2000000;
            credit_balance = -900;
            total_loan = 1500000;
            loan_installmet = 100000;

        }
    }
    else if (account == account3)
    {
        printf("\nPlease enter you 4 digits pin: ");
        scanf_s("%d", &pin);
        while (pin != pin3)
        {
            printf("\nInvalid pin, Please Re-enter: ");
            scanf_s("%d", &pin);
        }
        if (pin == pin3)
        {
            balance = 3000000;
            credit_balance = -950;
            total_loan = 900000;
            loan_installmet = 50000;
        }

    }
    else if (account == account4)
    {
        printf("\nPlease enter you 4 digits pin: ");
        scanf_s("%d", &pin);
        while (pin != pin4)
        {
            printf("\nInvalid pin, Please Re-enter: ");
            scanf_s("%d", &pin);
        }
        if (pin == pin4)
        {
            balance = 4000000;
            credit_balance = -2500;
            total_loan = 2000000;
            loan_installmet = 50000;
        }

    }
    return 0;
}

/* card validation used to verify and obtain user information for card services*/
int card_validation() {
    printf("\nPlease enter your card username:\n");
    gets(username_11);
    gets(username_11);
    printf("Please enter your bank name\n");
    gets(b_name);
    printf("\nEnter Card Number: ");
    scanf_s("%d", &card);
    while (card != card1 && card != card2 && card != card3 && card != card4)
    {
        printf("\nInvalid card number , please re-enter card number:\t");
        scanf_s("%d", &card);
    }
    if (card == card1)
    {

        printf("\nPlease enter exp date \n");
        printf("month: ");
        scanf_s("%d", &month);
        printf("\nLast 2 digits of year exp date: ");
        scanf_s("%d", &year);
        while (month != month1 || year != year1)
        {
            printf("\nInvalid exp date, please re-enter: ");
            printf("\nMonth: ");
            scanf_s("%d", &month);
            printf("\nLast 2 digits of year exp date: ");
            scanf_s("%d", &year);
        }
        printf("\nExp date is %d / %d", month1, year1);
        printf("\nPlease enter 3 digits cvv: ");
        scanf_s("%d", &cvv);
        while (cvv != cvv1)
        {
            printf("\nInvalid cvv , Please re-enter: ");
            scanf_s("%d", &cvv);
        }
        printf("\nPlease enter you 4 digits pin: ");
        scanf_s("%d", &pin);
        while (pin != pin1)
        {
            printf("\nInvalid pin, Please Re-enter: ");
            scanf_s("%d", &pin);
        }
        if (pin == pin1)
        {
            balance = 1000000;
            credit_balance = -1500;
            smartbalance = 20000;
            total_loan = 2000000;
            loan_installmet = 50000;
        }

    }
    else if (card == card2)
    {

        printf("\nPlease enter exp date \n");
        printf("month: ");
        scanf_s("%d", &month);
        printf("Last 2 digits of year exp date: ");
        scanf_s("%d", &year);
        while (month != month2 || year != year2)
        {
            printf("\nInvalid exp date, please re-enter: ");
            printf("\nMonth: ");
            scanf_s("%d", &month);
            printf("\nLast 2 digits of year exp date: ");
            scanf_s("%d", &year);
        }
        printf("\nExp date is %d / %d", month2, year2);
        printf("\nPlease enter 3 digits cvv: ");
        scanf_s("%d", &cvv);
        while (cvv != cvv2)
        {
            printf("\nInvalid cvv , Please re-enter: ");
            scanf_s("%d", &cvv);
        }
        printf("\nPlease enter you 4 digits pin: ");
        scanf_s("%d", &pin);
        while (pin != pin2)
        {
            printf("\nInvalid pin, Please Re-enter: ");
            scanf_s("%d", &pin);
        }
        if (pin == pin2)
        {
            balance = 2000000;
            credit_balance = -900;
            smartbalance = 30000;
            total_loan = 4000000;
            loan_installmet = 60000;

        }
    }
    else if (card == card3)
    {

        printf("\nPlease enter exp date \n");
        printf("month: ");
        scanf_s("%d", &month);
        printf("\nLast 2 digits of year exp date: \t");
        scanf_s("%d", &year);
        while (month != month3 || year != year3)
        {
            printf("\nInvalid exp date, please re-enter: ");
            printf("\nMonth: ");
            scanf_s("%d", &month);
            printf("Last 2 digits of year exp date: ");
            scanf_s("%d", &year);
        }
        printf("\nExp date is %d / %d", month3, year3);
        printf("\nPlease enter 3 digits cvv: ");
        scanf_s("%d", &cvv);
        while (cvv != cvv3)
        {
            printf("\nInvalid cvv , Please re-enter: ");
            scanf_s("%d", &cvv);
        }
        printf("\nPlease enter you 4 digits pin: ");
        scanf_s("%d", &pin);
        while (pin != pin3)
        {
            printf("\nInvalid pin, Please Re-enter: ");
            scanf_s("%d", &pin);
        }
        if (pin == pin3)
        {
            balance = 3000000;
            credit_balance = -950;
            smartbalance = 40000;
            total_loan = 5000000;
            loan_installmet = 90000;
        }

    }
    else if (card == card4)
    {

        printf("\nPlease enter exp date \n");
        printf("month: ");
        scanf_s("%d", &month);
        printf("\nLast 2 digits of year exp date: ");
        scanf_s("%d", &year);
        while (month != month4 || year != year4)
        {
            printf("\nInvalid exp date, please re-enter: ");
            printf("\nMonth: ");
            scanf_s("%d", &month);
            printf("Last 2 digits of year exp date: ");
            scanf_s("%d", &year);
        }
        printf("\nExp date is %d / %d", month4, year4);
        printf("\nPlease enter 3 digits cvv: ");
        scanf_s("%d", &cvv);
        while (cvv != cvv4)
        {
            printf("\nInvalid cvv , Please re-enter: ");
            scanf_s("%d", &cvv);
        }
        printf("\nPlease enter you 4 digits pin: ");
        scanf_s("%d", &pin);
        while (pin != pin4)
        {
            printf("\nInvalid pin, Please Re-enter: ");
            scanf_s("%d", &pin);
        }
        if (pin == pin4)
        {
            balance = 4000000;
            credit_balance = -2500;
            smartbalance = 50000;
            total_loan = 6000000;
            loan_installmet = 100000;
        }

    }
    return 0;
}
 /* cardless services options and functions */
int cardless() {

    int choice;
    printf("\nEnter any option to be served!\n\n");
    printf("1. Personal Account Deposit\n");
    printf("2. Credit Card Payments\n");
    printf("3. Loan Payment\n");
    printf("4. Smart Wallet Services\n\nChoice: ");
    scanf_s("%d", &choice);

    switch (choice) {
    case 1:
        // personal account deposit

        while (*iptr == 0)
        {
            cardless_validation();
            i++;
        }

        // PERSONAL ACCOUNT DEPOSIT
        temp_b = balance;
        printf("\nPlease enter amount to deposit: ");
        scanf_s("%d", &amountToDeposit);
        // now that you have deposited something, update the balance variable
        limit += amountToDeposit;
        if (limit <= 6000)
        {
            balance = amountToDeposit + balance;

            printf("\nThank you for depositing, old balance is: EGP %.2f and new balance is EGP %.2f\n\n", temp_b, balance);
        }
        else
        {
            printf("\n\nyou exceeded daily limit");
        }


        // request for another transaction
        printf("\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1) {
            // call our transaction method here
            cardless();
        } if (anotherTransaction == 2)
        {
            break;
        }


    case 2:
        // credit card payment function
        while (*iptr == 0)
        {
            cardless_validation();
            i++;
        }
        temp_b = credit_balance;
        printf("\nPlease enter amount to deposit: ");
        scanf_s("%d", &amountToDeposit);
        // now that you have deposited something, update the balance variable

        credit_balance = amountToDeposit + credit_balance;

        printf("Thank you for depositing, old credit balance is: EGP %.2f and new credit card balance is: EGP %.2f", temp_b, credit_balance);

        // request for another transaction
        printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1) {
            // call our transaction method here
            cardless();
        }
        if (anotherTransaction == 2)
        {
            break;
        }

    case 3:    //pay loan installments

        while (*iptr == 0)
        {
            cardless_validation();
            i++;
        }

        printf("\nYour loan is worth %d\n", total_loan);
        printf("\nYour monthly installment is worth %d\n", loan_installmet);
        printf("\nPlease enter amount to be paid");
        scanf_s("%d", &loan_payment);
        while (loan_payment < loan_installmet)
        {
            printf("Minumum amount to be paid = EGP%d\n", loan_installmet);
            scanf_s("%d", &loan_payment);
        }

        total_loan = total_loan - loan_payment;
        printf("\nUpdated total loan is %d", total_loan);
        printf("\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1) {
            // call our transaction method here
            cardless();
        }
        else
        {
            break;
        }

    case 4:
       //smartwallet function used for withdraw and deposit
        
        while (*sptr == 0)
        {
            smartwallet_validation();
            s++;
        }
        printf("\n\nEnter 1 for Withdrawal and 2 for Deposit\n\nChoice: ");
        scanf_s("%d", &smartoption);
        if (smartoption == 1)
        {
            printf("\n\nPlease enter amount to withdraw: ");
            scanf_s("%d", &amountToWidthdraw);
            if (amountToWidthdraw > smartbalance) {
                printf("\n\nThere is no insuffient funds in your account");
            }
            smartbalance -= amountToWidthdraw;
            printf("new balance is %.2f", smartbalance);

            printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\nChoice: ");
            scanf_s("%d", &anotherTransaction);
            if (anotherTransaction == 1) {
                // call our transaction method here
                cardless();
            }
            else 
            {
                break;
            }
        }
        else {
            if (smartoption == 2) {

                printf("Please enter amount to deposit: ");
                scanf_s("%d", &amountToDeposit);
                // now that you have deposited something, update the balance variable
                limit += amountToDeposit;
            }
            if (limit <= 20000)
            {
                smartbalance = amountToDeposit + smartbalance;

                printf("Thank you for depositing, new balance is:   EGP %.2f", smartbalance);
            }
            else
            {
                printf("you exceeded daily limit");
            }
            // request for another transaction
            printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\nChoice: ");
            scanf_s("%d", &anotherTransaction);
            if (anotherTransaction == 1) {
                // call our transaction method here
                cardless();
            }
            if (anotherTransaction == 2)
            {
                break;
            }

        }

    default:
        printf("\nInvalid Option\n");
        cardless();
    }
    return 0;
}
/* outro function */
int outro() {
    printf("\n********************   Thank you for using our ATM, we hope to see you again soon   ********************\n");
    return 0;
}

/* card services function*/

int card_services()
{
    int choice;
    printf("\n***Enter any option to be served!***\n\n");
    printf("1. Withdraw\n");
    printf("2. Deposit\n");
    printf("3. CreditCard Payments\n");
    printf("4. Pay loan installments\n");
    printf("5. Pay bills\n");
    printf("6. Pay study expenses\n");
    printf("7. Donate to charities\n");
    printf("8. Cheque Deposit\n");
    printf("9. Print a short statment of account\n\n");
    printf("Choice:");
    scanf_s("%d", &choice);

    switch (choice)
    {
    case 1:
        //Money withdrawl
        temp_b = balance;
        printf("\nLimit of amount to be withdrawn in one day is EGP 20000\n");
        printf("Please enter amount to withdraw: ");
        scanf_s("%d", &amountToWidthdraw);
        // now that you have withdrawn something, update the balance variable
        // ATM Daily limit for withdrawl is 20000 EGP
        while (amountToWidthdraw > 20000)
        {
            printf("\nLimit is exceeded , Please Re-enter amount\t");
            scanf_s("%d", &amountToWidthdraw);
        }
        balance = balance - amountToWidthdraw;
        printf("\nBalance before withdrawl = EGP%.2f \nBalance after withdrawl = EGP %.2f\n", temp_b, balance);
        // request for another transaction
        printf("\n\nDo you want another transaction?\nPress \n1 to proceed \n2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1) {
            // call our transaction method here
            card_services();
        }

        break;
    case 2:     //Money deposit
        temp_b = balance;
        printf("\nPlease enter amount to deposit: ");
        scanf_s("%d", &amountToDeposit);
        // now that you have deposited something, update the balance variable

        balance = amountToDeposit + balance;
        printf("\nBalance before transaction = EGP%.2f \nBalance after transaction = EGP%.2f\n", temp_b, balance);

        // request for another transaction
        printf("\n\nDo you want another transaction?\nPress \n1 to proceed \n2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1) {
            // call our transaction method here
            card_services();
        }
    case 3:    //Creditcard payments
        temp_b = credit_balance;
        printf("\nPlease enter amount to deposit into Credit Card: ");
        scanf_s("%d", &amountToDeposit);
        // now that you have deposited something, update the balance variable

        credit_balance = amountToDeposit + credit_balance;

        printf("\nBalance before transaction = EGP % .2f \nBalance after transaction = EGP % .2f\n", temp_b, credit_balance);

        // request for another transaction
        printf("\n\nDo you want another transaction?\nPress \n1 to proceed \n2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1) {
            // call our transaction method here
            card_services();
        }
        else
        {
            break;
        }
    case 4:    //pay loan installments

        printf("Your loan is worth %d\n", total_loan);
        printf("Your monthly installment is worth %d\n", loan_installmet);
        printf("Please enter amount to be paid into your loan: ");
        scanf_s("%d", &loan_payment);
        while (loan_payment < loan_installmet)
        {
            printf("\nMinumum amount to be paid = EGP%d\n", loan_installmet);
            printf("Please re-enter amount to be paid: ");
            scanf_s("%d", &loan_payment);
        }

        total_loan = total_loan - loan_payment;
        printf("\nUpdated total loan is %d", total_loan);
        printf("\n\nDo you want another transaction?\nPress \n1 to proceed \n2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1) {
            // call our transaction method here
            card_services();
        }

    case 5:    //Pay bills
    {
        int homeland_no;
        int insurance_choice;
        int phone_no;
        printf("\nPlease choose bill to pay\n");
        printf("\n\n1.Tv Cable\n2.Insurance\n3.Internet bill\n4.Phone bill\n");
        printf("Choice: ");
        scanf_s("%d", &bill_choice);
        if (bill_choice == 1)
        {
            printf("\nPlease enter you homeland phone number: ");
            scanf_s("%d", &homeland_no);
            while (homeland_no > 9999999999 || homeland_no < 999999999)
            {
                printf("\nHomeland number have to be 10 digits,Please Re-enter homeland number: ");
                scanf_s("%d", &homeland_no);
            }
        }
        else if (bill_choice == 2)
        {
            printf("\nPlease choose insurer\n");
            printf("\n1.Misr Insurance\n2.Misr Life Insurance Company\n3.Allianz Life Egypt\n4.Metlife Egypt\n");
            printf("5.AXA Life Egypt\n6.GIG Egypt\n7.Bupa Egypt\n8.Suez Canal Insurance\n");
            printf("Choice: ");
            scanf_s("%d", &insurance_choice);
        }
        else if (bill_choice == 3)
        {
            printf("\nPlease enter homeland number: ");
            scanf_s("%d", &homeland_no);
            while (homeland_no > 9999999999 || homeland_no < 999999999)
            {
                printf("\nHomeland number have to be 10 digits,Please Re-enter homeland number\t");
                scanf_s("%d", &homeland_no);
            }
        }
        else if (bill_choice == 4)
        {
            printf("\nPlease Enter Phone number: ");
            scanf_s("%d", &phone_no);
            while (phone_no > 99999999999 || phone_no < 999999999)
            {
                printf("\nPhone number have to be 11 digits,Please Re-enter homeland number: ");
                scanf_s("%d", &phone_no);
            }
        }
        temp_b = balance;
        printf("\nEnter amount to be paid\t");
        scanf_s("%d", &bills_paid);
        balance = balance - bills_paid;
        printf("\nAmount has been successfully paid\n");
        printf("Updated balance = EGP%.2f\n", balance);
        printf("\n\nDo you want another transaction?\nPress \n1 to proceed \n2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1)
        {
            // call our transaction method here
            card_services();
        }
    }

    case 6:    //Study expenses

        printf("\nPlease enter School/University account number\t");
        scanf_s("%d", &study_acc);
        while (study_acc > 99999999 || study_acc < 9999999)
        {
            printf("\nStudy account number should be 8 digits,Please Re-enter\t");
            scanf_s("%d", &study_acc);
        }
        temp_b = balance;
        printf("\nPlease enter amount to be paid: ");
        scanf_s("%d", &study_payment);
        balance = balance - study_payment;
        printf("Amount has been successfully paid");
        printf("Updated card balance = EGP%.2f \n", balance);
        printf("\n\nDo you want another transaction?\nPress \n1 to proceed \n2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1)
        {
            // call our transaction method here
            card_services();
        }

    case 7:  //Donate to charities
    {
        int charity_acc;
        printf("\nPlease enter charity's Account number: ");
        scanf_s("%d", &charity_acc);
        while (charity_acc > 99999999 || charity_acc < 9999999)
        {
            printf("\nCharity account number should be 8 digits,Please Re-enter: ");
            scanf_s("%d", &charity_acc);
        }
        printf("\nPlease enter amount of money to be paid: ");
        scanf_s("%d", &amountToDeposit);
        balance = balance - amountToDeposit;
        printf("Amount has been successfully paid");
        printf("\nUpdated balance = EGP %.2f\n", balance);
        printf("\n\nDo you want another transaction?\nPress \n1 to proceed \n2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1)
        {
            // call our transaction method here
            card_services();
        }
    }
    case 8:      //Cheque deposit
        temp_b = balance;
        printf("\nPlease enter amount to deposit\t");
        scanf_s("%d", &amountToDeposit);
        printf("\nOperation done succcessfully\n");
        balance = balance + amountToDeposit;
        printf("Balance before transaction = EGP %.2f", temp_b);
        printf("Updated balance = EGP %.2f", balance);
        printf("\n\nDo you want another transaction?\nPress \n1 to proceed \n2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1)
        {
            // call our transaction method here
            card_services();
        }
    case 9:      //print reciept of the acc

        printf("\nAccount balance = EGP %.2f\n", balance);
        printf("Credit balance = EGP %.2f\n", credit_balance);
        printf("Total Remaining loan = EGP %d\t", total_loan);
        printf("\n\nDo you want another transaction?\nPress \n1 to proceed \n2 to exit\n\nChoice: ");
        scanf_s("%d", &anotherTransaction);
        if (anotherTransaction == 1)
        {
            // call our transaction method here
            card_services();
        }
    }
    return 0;
}