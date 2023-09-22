use std::io;

fn main() {
    let mut total_loan_amount = 0.0;
    let mut monthly_payment = 0.0;
    let interest_rate = 0.0005;
    let mut months = 0;
    let mut min_payment = 0.0;
    let mut max_payment = 0.0;
    let mut extra_payment = 0.0;

    println!("[+] enter the total loan amount (X): ");

    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read input");

    total_loan_amount = match input.trim().parse() {
        Ok(value) if value > 0.0 => value,
        _ => {
            println!("[-] invalid total loan amount");
            return;
        }
    };

    let mut remaining_loan_amount = total_loan_amount;

    while remaining_loan_amount > 0.0 {
        let interest_payment = remaining_loan_amount * interest_rate;

        println!("[!] interest payment: {:.5}", interest_payment);

        println!("[+] enter the amount of the next payment: ");

        let mut input = String::new();
        io::stdin()
            .read_line(&mut input)
            .expect("Failed to read input");

        monthly_payment = match input.trim().parse() {
            Ok(value) if value >= 0.0 => value,
            _ => {
                println!("[ERROR] payment amount must be a positive number");
                continue;
            }
        };

        let min_required_payment = interest_payment;

        if monthly_payment < min_required_payment {
            println!("[WARNING] the loan amount increased BECAUSE the paid amount is less than the interest payment");
            remaining_loan_amount += interest_payment;
        } else {
            remaining_loan_amount -= monthly_payment;

            if min_payment == 0.0 || monthly_payment < min_payment {
                min_payment = monthly_payment;
            }
            if monthly_payment > max_payment {
                max_payment = monthly_payment;
            }

            months += 1;
        }

        println!("[!] remaining loan amount: {:.4}", remaining_loan_amount);
    }

    println!("[!] the person can pay off the loan in {} months.", months);
    println!(
        "[!] month and min payment: {} month, {:.2} grn",
        months, min_payment
    );
    println!(
        "[!] month and max payment: {} month, {:.2} grn",
        months, max_payment
    );

    if extra_payment > 0.0 {
        println!("[!] extra payment returned: {:.4} grn", extra_payment);
    }
}
