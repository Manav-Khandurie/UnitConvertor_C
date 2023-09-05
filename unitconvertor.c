#include <stdio.h>
void Display(char category)
{
      if (category == 'T'||category == 't')
      {
        printf("Welcome to Temperature Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for Fahrenheit to Celsius. \n");
        printf("Enter 2 for Celsius to Fahrenheit. \n");
      }
      else if(category == 'C'||category == 'c')
      {
        printf("Welcome to Currency Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for USD to Euro. \n");
        printf("Enter 2 for USD to JPY. \n");
        printf("Enter 3 for IND to USD. \n"); 
      }
      else if(category == 'M'||category == 'm')
      {
        printf("Welcome to Mass Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for Kikogram to pounds. \n");
        printf("Enter 2 for gram to pounds. \n");
        printf("Enter 3 for kilogram to garm.\n");
      }
      else if(category == 'L'||category == 'l')
      {
        printf("Welcome to Length Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for kilometer to Milimeter. \n");
        printf("Enter 2 for Centimeter to Meter. \n");
        printf("Enter 3 for Picometer to Nanometer. \n");  
      }
      else if(category == 'S'||category == 's')
      {
        printf("Welcome to Speed Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for kilometer/hour to Meter/second. \n");
        printf("Enter 2 for Meter/second to Miles/hour. \n");
        printf("Enter 3 for Miles/hour to kilometer/hours. \n");    
      }
      else if(category == 'A'||category == 'a')
      {
        printf("Welcome to Area Convertor! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for square meter to square centimeter. \n");
        printf("Enter 2 for square foot to square inch. \n");
        printf("Enter 3 for square km to square yard. \n");
      }
      else if(category == 'P'||category == 'p')
      {
        printf("Welcome to Power Convertor! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for Joule/second to Killowatt. \n");
        printf("Enter 2 for Watt to KIllowat. \n");
        printf("Enter 3 for Newton-meter/seconds to Killowatt. \n");
      }
      else
            return;
}
void Intro()
{
    printf("Welcome to Unit Converter! \n");
    printf("Here is a list of conversation to choose from: \n");
    printf("Temperature(T),Currency(C),Mass(M) ,Length(L),Speed(S),Area (A),Power(P) \n");
    printf("Please enter the letter you want to convert.\n");
}
void DF()
{
      printf("Please enter correct choice. \n");
}
void FtoC()
{
      float userinputF;         // User inputted Fahreinheit;
      float fahrenheitToCelcius; // variable that stores the converted F->C;
      printf("Please enter the Fahrenheit degree: \n");
      scanf("%f", &userinputF);
      fahrenheitToCelcius = ((userinputF - 32) * (5.0 / 9.0));
      printf("Celcius: %f", fahrenheitToCelcius); 
}
void CtoF()
{
      float userinputC;         // User inputted Celcius;
      printf("Please enter the Celcius degree: \n");
      scanf("%f", &userinputC);
      float celciusToFahrenheit = ((9.0 / 5.0) * userinputC + 32);
      printf("Fahrenheit: %f", celciusToFahrenheit);
}
void USDtoEUR()
{
      float userinputUSDtoEuro; // User inputted for USD to EURO;
      printf("Please enter the USD amount: \n");
      scanf("%f", &userinputUSDtoEuro);
      float USDtoEURO = userinputUSDtoEuro * 0.87;
      printf("Euro: %f", USDtoEURO); 
}
void USDtoJP()
{
      float userinputUSDtoJPY;
      printf("Please enter the USD amount: \n");
      scanf("%f", &userinputUSDtoJPY);
      float USDtoJPY = userinputUSDtoJPY * 111.09;
      printf("JPY: %f", USDtoJPY);
}
void INRtoUSD()
{
      float userinputINDtoUSD;
      printf("Please enter the IND amount: \n");
      scanf("%f", &userinputINDtoUSD);
      float INDtoUSD = userinputINDtoUSD / 79.79;
      printf("USD: %f", INDtoUSD);
}
void KiloToPounds()
{
      float userinputkilo;
      printf("Please enter the kilogarm amount: \n");
      scanf("%f", &userinputkilo);
      float kiloToPounds = userinputkilo * 2.205;
      printf("Pounds: %f", kiloToPounds);
}
void GrmtoPounds()
{
      float userinputGram;
      printf("Please enter the gram amount: \n");
      scanf("%f", &userinputGram);
      float gramsToPounds = userinputGram * 0.00220462;
      printf("Pounds: %f", gramsToPounds);
}
void KilotoGrm()
{
      float userinputkilo;
      printf("Please enter the kilogarm amount:\n");
      scanf("%f", &userinputkilo);
      float kiloTogram = userinputkilo * 1000;
      printf("gram:%f", kiloTogram);
}
void KmtoMm()
{
      float userinputkilometer;
      printf("Please enter the kilometer amount.\n");
      scanf("%f", &userinputkilometer);
      float kilometerTomili = userinputkilometer * 1000000;
      printf("Milimeter:%f", kilometerTomili);
}
void CmtoM()
{
      float userinputcenti;
      printf("Please enter the Centimeter amount.\n");
      scanf("%f", &userinputcenti);
      float centiTometer = userinputcenti * 0.01;
      printf("Meter:%f", centiTometer);
}
void PicotoNano()
{
      float userinputpico;
      printf("Please enter the Picometer amount.\n");
      scanf("%f", &userinputpico);
      float picoTonano = userinputpico * 0.001;
      printf("Meter:%f", picoTonano);
}
void KilotoM()
{
      float userinputkilometerperhour;
      printf("Please enter the Speed in kilometer/hour.\n");
      scanf("%f", &userinputkilometerperhour);
      float kilometerperhourTometerpersecond = userinputkilometerperhour * 0.62;
      printf("Meter/second:%f", kilometerperhourTometerpersecond);
}
void MtoMiles()
{
      float userinputmeterpersecond;
      printf("Please enter the speed in meter/second.\n");
      scanf("%f", &userinputmeterpersecond);
      float meterpersecondtomilespersecond = userinputmeterpersecond * 2.23;
      printf("Miles/hour:%f", meterpersecondtomilespersecond);
}
void MilestoKmph()
{
      float userinputmilesperhour;
      printf("Please enter the speed in Miles/hour.\n");
      scanf("%f", &userinputmilesperhour);
      float milesperhourtokilometerperhour = userinputmilesperhour * 1.60;
      printf("Kilometer/hour:%f", milesperhourtokilometerperhour);
}
void SmtoScm()
{
      float userinputsquaremeter;
      printf("Please enter the area in square meter.\n");
      scanf("%f", &userinputsquaremeter);
      float squaremetertosquarecentimete = userinputsquaremeter * 10000;
      printf("square centimeter:%f", squaremetertosquarecentimete);
}
void SftoSi()
{
      float userinputsquarefoot;
      printf("Please enter the area in square foot.\n");
      scanf("%f", &userinputsquarefoot);
      float squarefoottosquareinch = userinputsquarefoot * 144.21;
      printf("square centimeter:%f", squarefoottosquareinch);
}
void JstoKw()
{
      float userinputjoulepersecond;
      printf("Please enter the power in Joule/second.\n");
      scanf("%f", &userinputjoulepersecond);
      float joulepersecondtokilowatt = userinputjoulepersecond * 0.001;
      printf("Killowatt:%f", joulepersecondtokilowatt);
}
void WtoKw()
{
      float userinputwatt;
      printf("Please enter the power in watt.\n");
      scanf("%f", &userinputwatt);
      float watttokilowatt = userinputwatt * 0.001;
      printf("Killowatt:%f", watttokilowatt);
}
void NmtoJs()
{
      float userinputnewtonmeter;
      printf("Please enter the power in Newton meter\n");
      scanf("%f", &userinputnewtonmeter);
      float newtonmetertokilowatt = userinputnewtonmeter * 0.001;
      printf("Killowatt:%f", newtonmetertokilowatt);
}
void SkmtoSy()
{
      float userinputsquarkillometer;
      printf("Please enter the area in square killometer.\n");
      scanf("%f", &userinputsquarkillometer);
      float squarekillometertosquaeyard = userinputsquarkillometer * 1195990;
      printf("square yard:%f", squarekillometertosquaeyard);
}
int main()//driver code
{   
    char category;
    int choice;
    Intro();
    scanf("%c", &category);
    if (category == 'T'||category == 't')
    {
        Display(category);
        scanf("%d", &choice);
        if (choice == 1)
            FtoC();
        else if (choice == 2)
            CtoF();
        else
            DF();
    }
    else if (category == 'C'||category == 'c')
    {
        Display(category);
        scanf("%d", &choice);
        if (choice == 1)
            USDtoEUR();
        else if (choice == 2)
            USDtoJP();
        else if (choice == 3)
            INRtoUSD();
        else
            DF();
    }
    else if (category == 'M'||category == 'm')
    {
        Display(category);
        scanf("%d", &choice);
        if (choice == 1)
            KiloToPounds();
        else if (choice == 2)
            GrmtoPounds();
        else if (choice == 3)
            KilotoGrm();
    }
    else if (category == 'L'||category == 'l')
    {
        Display(category);
        scanf("%d", &choice);
        if (choice == 1)
            KmtoMm();
        else if (choice == 2)
            CmtoM();
        else if (choice == 3)
            PicotoNano();
        else
            DF();
    }
    else if (category == 'S'||category == 's')
    {
        Display(category);
        scanf("%d", &choice);
        if (choice == 1)
            KilotoM();
        else if (choice == 2)
            MtoMiles();
        else if (choice == 3)
            MilestoKmph();
        else
            DF();
    }
    else if (category == 'A'||category == 'a')
    {
        Display(category);
        scanf("%d", &choice);
        if (choice == 1)
            SmtoScm();
        else if (choice == 2)
            SftoSi();
        else if (choice == 3)
            SkmtoSy();
        else
            DF();
    }
    else if (category == 'P'||category == 'p')
    {
        Display(category);
        scanf("%d", &choice);
        if (choice == 1)
            JstoKw();
        else if (choice == 2)
            WtoKw();
        else if (choice == 3)
           NmtoJs();
        else
            DF();
    }
    else
        DF();
    return 0;
}//main