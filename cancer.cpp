#include <iostream>
#include <unistd.h>
#include <string>
#include <iomanip>

using namespace std ;

void an(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text.length() < 18)
            if (text.length() < 5)
                usleep(30000);
            else
                usleep(90000);
        else
            usleep(20000);
        cout << text[i] << flush;
    }
    cout << endl ;
}

void loading ()
{
	cout << "LODING : ";
	sleep (2);
	for (int i = 0 ; i < 9 ; i ++)
	{
		cout<< ".";
		usleep(50000);
	}
	sleep (2);
	for (int i =1 ; i <11 ; i++)
	{
		cout << ".";
		usleep (50000);
	}
	cout << endl ;
	sleep(1);
	cout << "100% \npackages loaded ...";
	sleep (1);
	cout << "\n PROGRAM IS READY";
	sleep (2);
	cout << endl ;
}

void car()
{
	int n = 0;
	cout << " in ham ie mashin baraie mashin baz kelas " << endl ;
			
		for(int i = 0 ; i < 102 ; i++){
			n ++ ;
			
			for(int j = 0 ; j<n ; j++){
				cout << " ";
			}
			if(n%3==0){
				if(n==102){
					cout << "     ______   " << endl;
				}else{
					cout << "|    ______   " << endl; 
				}
			}else{
				cout << "     ______   " << endl; 
			}
			
			for(int j = 0 ; j<n ; j++){
				cout << " ";
			}
			if(n%3==2){
				cout << "|  _/______\\____" << endl;
			}else{
				cout << "   _/______\\____" << endl;
			}
			
			for(int j = 0 ; j<n ; j++){
				cout << " ";
			}
			if(n%3==1){
				cout << "|=|__(o)_(o)____|" << endl;
			}else{
				cout << " =|__(o)_(o)____|" << endl;
			}
			cout << "-----------------------------------------------------------------------------------------------------------------------";
			
			usleep(10000);
			
			system("CLS");
	}
}

void tea(){
	cout << "          ------ \n";
	cout << "           |  |  \n";
	cout << "-----------------\n";
	cout << "                |\n";
	cout << "-----------     |\n";
	cout << "           |    |\n";
	cout << "           |____|\n";
	sleep(1);
	for(int i=0;i<8;i++){
	cout << "             ||  \n";
		usleep(500000);
	}
	cout << "\n";
	cout << "         | | | | |    \n";
	cout << "         __________   \n";
	cout << "         |        |--|\n";
	cout << "         |  TEA   |  |\n";
	cout << "         |        |--|\n";
	cout << "         |________|   \n";
	cout << "        ------------  \n";
	cout << "        |__________|  \n";
	sleep(2);

}

void cake(){
	int x;
	sleep(2);
	cout << "         ()      \n";
	cout << "         ||      \n";
	cout << "    -----------\n";
	cout << "   |           |\n";
	cout << "  |             |\n";
	cout << " |_______________|\n";
	cout << "  |_____________|\n";
	cout << "   -------------\n" ;

}

void cafe(){
	cout << "\n \n \n \n \n \n \n \n \n \n \n";
	cout << "          ------ \n";
	cout << "           |  |  \n";
	cout << "-----------------\n";
	cout << "                |\n";
	cout << "-----------     |\n";
	cout << "           |    |\n";
	cout << "           |____|\n";
	sleep(1);
	for(int i=0;i<8;i++){
	cout << "             ||  \n";
		usleep(500000);
	}
	cout << "\n";
	cout << "         | | | | |    \n";
	cout << "         __________   \n";
	cout << "         |        |--|\n";
	cout << "         |  mocha |  |\n";
	cout << "         |  cafee |--|\n";
	cout << "         |________|   \n";
	cout << "        ------------  \n";
	cout << "        |__________|  \n";
	sleep(2);

}

int main ()
{
	loading () ;
	
	char a = 'a' + 160  , b = 'a' + 161 ;
	int way ;
	int countinu ;
	
	an ("\t \t \tsalam") ;
	an ("be barname man khosh omadi !!!") ;
	an ("che kari az dast man bar miad ? ");
	cout <<  "1)" << a ;
	an ("mohasebe daramad va sanavat karmand .") ;
	cout <<  "2)" <<  a ;
	an ("namaiesh dokme haie makhfi keyboard .") ;
	cout << "3)" << a ;
	an ("kharide tore mosaferati .") ;
	cout << "4)" << a ;
	an ("raftan be coffee shop .") ;
	cout << "5)" << b ;
	an ("hack kardan dastgahe khod .") ;
	cout << endl << endl ;
	an ("kode karet ro vared kon ...");
	
	cin >> way ;
	if (way >= 6 )
	{
		an ("adade kamtar az 6 vared kon ");
		cin >> way ;
	}
	
	switch (way)
	{
		case 1 :
		{
			system("CLS");
			sleep (2);
			int  x , san , counter , answer = 0 ;
			an ("in hame gozine khob dade bodam in ro omadi !!!");
			an ("khob hala bikhial");
			an ("in karmand to iek mah cheghadr dar miare ?");
			cin >> x ;
	
			x = x * 12 ;
	
			for (int i = 1 ; i <= 30 ; i ++)
			{
				answer += x ;
				san += x / 12 ;
				x += x * (0.1) ;
			}
			
			an ("khob in karmande badbakht to 30 sal kar kardanesh ");
			cout << answer;
			an ("dar miare v akhare in 30 sal kar kardan behesh ");
			cout << san ;
			an ("sanavat midan .");
			cout << endl << endl ;
			sleep (3);
			an ("hanoz bavaram nemishe ke in gozine ro entekhab kardi ");
			
			for (int i = 0 ; i < 60 ; i++)
			{
				cout << a << b ;	
			}
			an ("baraie edame ie harf benevis v enter bezan ");
			cin >> countinu;
			break ;
		}
		case 2 : 
		{
			system("CLS");
			sleep (2);
			
			char s = 'a';
	
			for (int i = 1 ; i <256 ; i ++)
			{
				s += i ;
				cout << "a + "<< i << " = "<< s << endl ;
				s -= i ;
			}
			an ("jaleb bod mage na ");
			an ("code in barname asone v intori neveshte mishe ... ");
			cout << "char s = 'a';" << endl << "for (int i = 1 ; i <256 ; i ++)" << endl << "{"<< endl << "s += i ;"<< endl << "cout << 'a +' << i << ' = '<< s << endl ;";
			cout << endl << "s -= i ;"<< endl << "}"<< endl;
			sleep (3);
			an ("khob dige man miram felan") ;
			an ("baraie edame ie harf benevis v enter bezan ");
			cin >> countinu;
			break ;
		}
		case 3 :
		{
			system("CLS");
			sleep (2);
			
			int teravel ;
			char answer ;
			sleep (2);
			an ("khob koja mikhai safar koni ? ");
			
			cout <<  "1)" << a ;
			an ("Mashhad") ;
			cout <<  "2)" << a ;
			an ("Make") ;
			cout <<  "3)" << a ;
			an ("Karbala") ;
			cout <<  "4)" << b ;
			an ("America") ;
			
			cin >> teravel ;
			if (teravel >= 5 )
			{
				an ("adade kamtar az 5 vared kon ");
				cin >> teravel ;
			}
			
			if (teravel == 4 )
			{
				an ("in gozine ro baraie shokhi gozashte bodam jedi gerefti XD ");
				for (int i = 0 ; i < 60 ; i++)
				{
					cout << a << b ;
				}
				break ; 
			}
			else 
			{
				an ("khob pas ye mashin midim ba hamon boro ...");
				sleep (5) ;
				car () ;
				
				an ("koja mikhai beri ? ");
				cout << endl ;
				cout <<  "1)" << a ;
				an ("haram") ;
				cout <<  "2)" << b ;
				an ("bongahe hamsar iabi ") ;
				
				cin >> teravel ;
				if (teravel >= 3 )
				{
					an ("adade kamtar az 6 vared kon ");
					cin >> teravel ;
				}
				
				switch (teravel)
				{
					case 1 :
					{
						an ("afarin ke dar dame sheitan naioftadi .");
						sleep (3);
						an ("agar dost dari mitoni beri iekhorde khane efaf ? (y/n)");
						
						cin >> answer ;
						if (answer == 'n'|| answer == 'N')
						{
							an ("ahsant be in farde pak daman ");
							an ("mitonam shomare shoma ro dashte basham ");
							cin >> answer ;
							break ;
						}
						else 
						{
							an ("midoni manzoram az khane efaf chie ? (y/n)");
							
							cin >> answer ;
							
							if (answer == 'n'|| answer == 'N')
							{
								an ("hamon behtar ke nemidoni ");
								an ("boro khone dar ham poshted beband ");
								sleep (2);
								an ("by");
								break ; 
							}
							else 
							{
								an ("badbakhte kheirnadide omadi shahre ziarati ");
								an ("inja ham dast az sar in karat bar nemidari ");
								an ("aslan man dige bahat kari nadaram .");
								break ;
							}
							
						}
						
					}
					case 2 :
					{
						an ("badbakhte kheirnadide omadi shahre ziarati ");
						an ("inja ham dast az sar in karat bar nemidari ");
						an ("aslan man dige bahat kari nadaram .");
						break ;
					}
				}
			}
			an ("baraie edame ie harf benevis v enter bezan ");
			cin >> countinu;
			break ;
		}
		case 4 :
		{
			system("CLS");
			sleep (2);
			
			char answer ;
			
			an ("be coffee shope non v goh khosh omadid ") ;
			an ("cake biaram baraton ? ");
			
			cin >> answer ;
			
			if (answer == 'n' || answer == 'N')
			{
				an ("chera ?");
				an ("ie cake be hesab man baraton miaram .");
			}
			
			an ("chaee ia mocha cafee biaram ? (chaee/ghahve)");
			
			cin >> answer ;
			
			if (answer == 'c' || answer == 'C')
			{
				tea ();
				cake ();
			}
			else 
			{
				cafe ();
				cake ;
			}
			cout << endl ;
			an ("khedmate shoma ...");
			an ("omidvaram az coffee shope non v gohe ma razi bashid .");
			sleep (5);
			an ("baraie edame ie harf benevis v enter bezan ");
			cin >> countinu;
			break ;
		}
		case 5 :
		{
			system("CLS");
			sleep (2);
			
			int answer ;
			
			an ("mikhai systeme khodet ro hack koni ? (y/n)");
			
			cin >> answer ;
			
			if (answer == 'n' || answer == 'N')
			{
				an ("goftam enghadr oskol nisti ke gand bezani be system khodet .");
				an ("midonam ie kermi oftade mige bezar hack konam bebinam chi mishe ");
				cout << a << endl ;
				an ("bezar hack konam ? (y/n)");
				
				cin >> answer ;
				
				if (answer == 'n' || answer == 'N')
				{
					an ("kheirnabini");
					an ("bia nazaret ro rajeb be barname bede v boro ");
					
					sleep (5);
					break ;
				}
				else 
				{
					an ("ghable shoroe hack behet begam ...");
					an ("harja pashimon shodi baiad goshit ro koaln kahmosh roshan koni .");
					
					sleep (2);
					loading ();
				
					while (true)
					{
						cout << a << b ;
					}	
				}
			}
			else 
			{
				an ("khodet gofti ");
				an ("harja pashimon shodi baiad goshit ro koaln kahmosh roshan koni .");
				sleep (2);
				loading ();
				
				while (true)
				{
					cout << a << b << endl ;
				}
			}
		}
	}
	
	int star ;
	
	an ("be barname az 1 ta 5 chand midi ");
	
	cin >> star ;
	
	if (star < 1 || star > 5)
	{
		while (true)
		{
			an ("migam ie adad beine 1 ta 5");
			cin >> star ;
			if (star < 6 || star > 0 )
			{
				break ;
			}
		}
	}
	else if (star != 5 )
	{
		while (true)
		{
			an ("bishtar bede !!!");
			cin >> star ;
			if (star == 5 )
			{
				an ("pas barname khobi sakhtam man ...");
				an ("iadet bashe ke barname ro chand bar run koni ta jahaie dige barname ro ham bebini ");
				break ;
			}
		}
	}
	return 0 ;
}