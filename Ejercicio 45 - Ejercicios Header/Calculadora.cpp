int Sumar (int a, int b)
{ 
  return a + b;
}

int Restar (int a, int b)
{ 
  return a - b;
}

int Calculadora (int a, int b, char Operador)
{ 
    if (Operador == '+')
    { 
    return Sumar (a, b);
    }

    if (Operador == '-')
    { 
    return Restar (a, b);
    }
    
    throw "Opreador No Valido";
    
}
