fn main() { 
    let mut A:u8; 
    let mut B:u8; 
    let mut X:u8; 
     
     println!("Valor Invertido: ");
 
    A = 0; 
    B = 0; 
    X = (!(A|B)); 
    println!("A OR B: {}",X); 
     
    A = 0; 
    B = 1; 
    X = (!(A|B)); 
    println!("A OR B: {}",X); 
     
    A = 1; 
    B = 0; 
    X = (!(A|B)); 
    println!("A OR B: {}",X); 
     
    A = 1; 
    B = 1; 
    X = (!(A|B)); 
    println!("A OR B: {}",X); 
}