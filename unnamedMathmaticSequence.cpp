using System;

int inA = 1;
int inB = 1;
int output = 0;

int forgottenNameOfMathmaticSequence()
{
    while (output < 50)
    {
        output = inA + inB;
        Console.WriteLine($"{inA} + {inB} = {output}");
        inA = inB;
        inB = output;
    }
    return output;
}
Console.WriteLine(forgottenNameOfMathmaticSequence()); //call the function
Console.ReadKey();