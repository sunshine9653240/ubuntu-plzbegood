fn main() {
    println!("Hello, world!");

    println!("{1}{0}",another_function(),long_string("edadrwertwertf"));

}

fn another_function() -> &'static str {
    println!("另一支函式。");
    "hello"
}

fn long_string(x: &str) -> &str {
    if x.len() > 10 {
        "too long"
    } else {
        x
    }
}