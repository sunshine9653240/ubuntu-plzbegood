use std::io;

fn main() {
    println!("請猜測一個數字!");
    let mut guess = String::new();
    io::stdin()
        .read_line(&mut guess)
        .expect("wrong");
    println!("你的猜測數字為 : {guess}")
}
