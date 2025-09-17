//quiz
#include<iostream>
using namespace std;
int main(){
	string name;
	
	char start, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, sure;
	
	float c=100, c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,e,m,ha,b,score,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10;
	
	int h=1, bet1, bet2, bet3, bet4, bet5, bet6, bet7, bet8, bet9, bet10,total,th=0;
	
	cout<<"\033[34m\033[1m*------------------------------------------------------------------------------------------------*"<<endl;
	cout<<"*                                                                                                *"<<endl;
	cout<<"*                                           Welcome to                                           *"<<endl;
	cout<<"*                                                                                                *"<<endl;
	cout<<"*                                       QUIZ WITH A TWIST!                                       *"<<endl;
	cout<<"*                                                                                                *"<<endl;
	cout<<"*------------------------------------------------------------------------------------------------*\033[0m"<<endl;
	cout<<"Please Enter your first name: ";
	cin>>name;
	cout<<"                                             "<<endl;
	cout<<"Welcome to Quiz with a Twist "<<name<<"!"<<endl<<endl;
	
//Mechanics
	
	cout<<"                             \033[1m\033[5m\033[31m!! Please read this before you start. !!\033[0m"<<endl<<endl;
	cout<<"\033[31mThis quiz follows a betting system.\033[0m"<<endl<<endl;
	cout<<"\033[31m!\033[0mAt the beginning of the quiz, you will be given a Quiz Starter Pack containing \033[32m100 Credits\033[0m and \033[35m1 Hint\033[0m."<<endl<<endl;
	cout<<"\033[31m!\033[0mThe total score for this quiz is 10."<<endl<<endl;
	cout<<"\033[31m! Note:\033[0m The score out of 10 is not based solely on the number of correct answers, because each level has a multiplier."<<endl<<endl;
	cout<<"\033[31m! Note:\033[0m It is possible to achieve a perfect score with just 8 correct answers because of the multiplier applied at each level."<<endl<<endl;
	cout<<"\033[31m!\033[0mThis Quiz has 4 levels. Each level has a minimum and maximum bet. Every difficulty level has a unique multiplier and cost of hint."<<endl<<endl;
		cout<<"                           Level       Difficulty      Min Bet    Max Bet     Multiplier     Cost of hint"<<endl;
		cout<<"                             1           Easy            01         10            1x          0.1 Credits"<<endl;
		cout<<"                             2          Medium           11         20           1.2x         0.2 Credits"<<endl;
		cout<<"                             3           Hard            21         30           1.3x         0.3 Credits"<<endl;
		cout<<"                             4           Boss            31         40           1.5x         0.4 Credits"<<endl<<endl;
	
	cout<<"\033[31m!\033[0mBet first, Before the questions revealed."<<endl<<endl;
	cout<<"\033[31m!\033[0mThe category of the questions is revealed while you place your bet, before the questions are shown."<<endl<<endl;
	cout<<"\033[31m!\033[0mThe total score will be rounded to the nearest whole number."<<endl<<endl;
	cout<<"\033[31m!\033[0mThe 100 credits from the Quiz Starter Pack will be deducted once the quiz is completed."<<endl<<endl;
	cout<<"\033[31m!\033[0mYour overall credit will automatically be converted into bonus points for your next quiz at a ratio of 1:100."<<endl<<endl;
		cout<<"                           Credits      Bonus Points       "<<endl;
		cout<<"                             100            Easy           "<<endl;
		cout<<"                             200           Medium          "<<endl;
		cout<<"                             300            Hard           "<<endl<<endl;
		
	cout<<"\033[31m!\033[0mThe total score will be calculated by adding the credits earned in each level, deviding it by the maximum bet, and then adding the scores from all 4 levels for the overall score."<<endl<<endl;
	
//Start

	cout<<"Start the quiz?(y/n) ";
	cin>>start;
	cout<<" "<<endl;
	cout<<"You've received \033[32m100 Credits\033[0m and \033[35m1 Hint\033[0m from the Quiz Starter Pack."<<endl<<endl;
	c=100;
	h=1;
	if(start=='y'||start=='Y'){
		
//Question Number 1

		cout<<"\033[32m               Welcome to the Easy Level!             \033[0m"<<endl<<endl;
		
		cout<<"Easy Level (1 out of 3)"<<endl<<endl;
		cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint: "<<h<<"\033[0m"<<endl;
		cout<<"Category: Animals     "<<endl;
		cout<<"Place your bet(1-10): ";
		cin>>bet1;
		
			if(bet1>=1 && bet1<=10){
				cout<<"      "<<endl;
				cout<<"1. What is a grouped of dolphins called?"<<endl;
				cout<<"    A. Pod        C. Bask"<<endl;
				cout<<"    B. Colony     D. Bevy"<<endl<<endl;
				cout<<"Plese enter the letter of your answer 0r type (h) for Hint: ";
				cin>>A1;
					//hint
					if(A1=='h' || A1 =='H'){
						th++;//total hint
						cout<<"   "<<endl;
						cout<<"\033[0m \033[35mHint: \033[0m This term is commonly used for a group of animals that swim together, and it's the same word used for a group of friends or companions."<<endl<<endl;
						h=h-1;
						cout<<"Plese enter the letter of your answer: ";
						cin>>A1;
						if(A1=='A' || A1 =='a'){	
							cout<<"    "<<endl<<endl;
							cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
							c=c+bet1;	
							b1=bet1;
							c1=b1/10;	
						}else{	
							cout<<"    "<<endl<<endl;
							cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
							c=c-bet1;
							c1=0;	
						}
					}else if(A1=='A' || A1 =='a'){	
						cout<<"    "<<endl<<endl;
						cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
						c=c+bet1;	
						b1=bet1;
						c1=b1/10;	
						
					}else{	
						cout<<"    "<<endl<<endl;
						cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
						c=c-bet1;
						c1=0;	
					}
			}else{
				cout<<"Invalid Bet";
			}
			
//Question Number 2
		cout<<""<<endl;
		cout<<"Easy Level (2 out of 3)"<<endl<<endl;
		if(h<1){
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint cost\033[0m"<< " 0.1 Credits"<<endl;
		
		}else{
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint: "<<h<<"\033[0m  "<<endl;
		}
		
		cout<<"Category: History "<<endl;
		cout<<"Place your bet(1-10): ";
		cin>>bet2;
		
			if(bet1>=1 && bet1<=10){
				cout<<"   "<<endl;
				cout<<"2. What is the oldest city in the Philippines?"<<endl;
				cout<<"    A. Manila        C. Makati"<<endl;
				cout<<"    B. Cebu          D. Parañaque"<<endl<<endl;
				cout<<"Plese enter the letter of your answer 0r type (h) for Hint: ";
				cin>>A2;
				
				if(A2=='h' || A2 =='H'){
					th++;//total hint
					if(h<1){
						cout<<"Hint used. 0.1 credits will be deducted from your credits."<<endl<<endl;
						c=c-0.1;
					}else{
						h=h-1;
					}
					cout<<"\033[0m \033[35mHint: \033[0m This city is often called the 'Queen City of the South' and was the site of the first Spanish settlement in the Philippines."<<endl<<endl;	
					cout<<"Plese enter the letter of your answer: ";
					cin>>A2;
					if(A2=='b' || A2=='B'){	
						cout<<"    "<<endl<<endl;
						cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
						c=c+bet2;	
						b2=bet2;
						c2=b2/10;	
						
					}else{	
						cout<<"    "<<endl<<endl;
						cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
						c=c-bet2;
						c2=0;
					}
				
				}else if(A2=='b' || A2=='B'){	
					cout<<"    "<<endl<<endl;
					cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
					c=c+bet2;	
					b2=bet2;
					c2=b2/10;	
					
				}else{	
					cout<<"    "<<endl<<endl;
					cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
					c=c-bet2;
					c2=0;	
					}
			}else{
				cout<<"Invalid Bet";
			}
//Question Number 3
		cout<<""<<endl;
		cout<<"Easy Level (3 out of 3)"<<endl<<endl;
		if(h<1){
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint cost\033[0m"<< " 0.1 Credits"<<endl;
			
		}else{
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint: "<<h<<"\033[0m  "<<endl;
		}
		
		cout<<"Category: Sports "<<endl;
		cout<<"Place your bet(1-10): ";
		cin>>bet3;
		
			if(bet1>=1 && bet1<=10){
				cout<<"   "<<endl;
				cout<<"3. What sport is known as The King of Sports?"<<endl;
				cout<<"    A. Tennis        C. Baseball"<<endl;
				cout<<"    B. Soccer        D. Basketball"<<endl<<endl;
				cout<<"Plese enter the letter of your answer 0r type (h) for Hint: ";
				cin>>A3;
				
				if(A3=='h' || A3 =='H'){
					th++;//total hint
					if(h<1){
						cout<<"Hint used. 0.1 credits will be deducted from your credits."<<endl<<endl;
						c=c-0.1;
					}else{
						h=h-1;
					}
					cout<<"\033[0m \033[35mHint: \033[0mThis sport is played in almost every country and is the centerpiece of the FIFA World Cup."<<endl<<endl;	
					cout<<"Plese enter the letter of your answer: ";
					cin>>A3;
					if(A3=='b' || A3=='B'){
						cout<<"    "<<endl<<endl;
						cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
						c=c+bet3;
						b3=bet3;
						c3=b3/10;	
					}else{
						cout<<"    "<<endl<<endl;
						cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
						c=c-bet3;
						c3=0;	
					}
				
				}else if(A3=='b' || A3=='B'){
					cout<<"    "<<endl<<endl;
					cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
					c=c+bet3;
					b3=bet3;
					c3=b3/10;
					
				}else{
					cout<<"    "<<endl<<endl;
					cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
					c=c-bet3;
					c3=0;	
					}
		    }else{
				cout<<"Invalid Bet";
			}
			
			e=c1+c2+c3;	//total score in Easy Level
		
//Question Number 4

		cout<<"\033[33m             Welcome to the Medium Level!             \033[0m"<<endl<<endl;
		
		cout<<"Medium Level (1 out of 3)"<<endl<<endl;
		if(h<1){
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint cost\033[0m"<< " 0.2 Credits"<<endl;
		
		}else{
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint: "<<h<<"\033[0m  "<<endl;
		}
		
		cout<<"Category: Technology "<<endl;
		cout<<"Place your bet(11-20): ";
		cin>>bet4;
		
			if(bet4>=11 && bet4<=20){
				cout<<"   "<<endl;
				cout<<"4. Who is known as the father of the modern computer?"<<endl;
				cout<<"    A. Tim Berners-Lee    C. Charles Babbage"<<endl;
				cout<<"    B. Gusion             D. None of the above"<<endl<<endl;
				cout<<"Plese enter the letter of your answer 0r type (h) for Hint: ";
				cin>>A4;
				
				if(A4=='h' || A4 =='H'){
					th++;//total hint
					if(h<1){
						cout<<"Hint used. 0.2 credits will be deducted from your credits."<<endl<<endl;
						c=c-0.2;
					}else{
						h=h-1;
					}
					cout<<"\033[0m \033[35mHint: \033[0mHis pioneering work laid the foundation for computing, and he collaborated with Ada Lovelace."<<endl<<endl;	
					cout<<"Plese enter the letter of your answer: ";
					cin>>A4;
					if(A4=='c' || A4=='C'){
						cout<<"    "<<endl<<endl;
						cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
						c=c+(1.2*bet4);
						b4=bet4*1.2;
						c4=b4/20;
					}else{
						cout<<"    "<<endl<<endl;
						cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
						c=c-bet4;	
						c4=0;
					}
				
				}else if(A4=='c' || A4=='C'){
					cout<<"    "<<endl<<endl;
					cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
				    c=c+(1.2*bet4);
				    b4=bet4*1.2;
					c4=b4/20;
				    		
				}else{
					cout<<"    "<<endl<<endl;
					cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
					c=c-bet4;
					c4=0;	
					}
			   
		    }else{
				cout<<"Invalid Bet";
			}
//Question Number 5
		cout<<""<<endl;
		cout<<"Medium Level (2 out of 3)"<<endl<<endl;
		if(h<1){
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint cost\033[0m"<< " 0.2 Credits"<<endl;
		
		}else{
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint: "<<h<<"\033[0m  "<<endl;
		}
		
		cout<<"Category: History "<<endl;
		cout<<"Place your bet(11-20): ";
		cin>>bet5;
		
			if(bet5>=11 && bet5<=20){
				cout<<"   "<<endl;
				cout<<"5. Who was the first President of the Philippines under the Malolos Republic?"<<endl;
				cout<<"    A. Andres Bonifacio    C. Apolinario Mabini"<<endl;
				cout<<"    B. Jose Rizal          D. Emilio Aguinaldo"<<endl<<endl;
				cout<<"Plese enter the letter of your answer 0r type (h) for Hint: ";
				cin>>A5;
				
				if(A5=='h' || A5 =='H'){
					th++;//total hint
					if(h<1){
						cout<<"Hint used. 0.2 credits will be deducted from your credits."<<endl<<endl;
						c=c-0.2;
					}else{
						h=h-1;
					}
					cout<<"\033[0m \033[35mHint: \033[0mHe led the Philippine Revolution and declared Philippine independence in 1898."<<endl<<endl;	
					cout<<"Plese enter the letter of your answer: ";
					cin>>A5;
					if(A5=='d' || A5=='D'){
						cout<<"    "<<endl<<endl;
						cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
						c=c+(1.2*bet5);
						b5=bet5*1.2;
						c5=b5/20;
					}else{
						cout<<"    "<<endl<<endl;
						cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
						c=c-bet5;
						c5=0;	
					}
				}else if(A5=='d' || A5=='D'){
					cout<<"    "<<endl<<endl;
					cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
					c=c+(1.2*bet5);
					b5=bet5*1.2;
					c5=b5/20;
						
				}else{
					cout<<"    "<<endl<<endl;
					cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
					c=c-bet5;
					c5=0;	
					}
				
			}else{
				cout<<"Invalid Bet";
			}
//Question Number 6
		cout<<""<<endl;
		cout<<"Medium Level (3 out of 3)"<<endl<<endl;
		if(h<1){
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint cost\033[0m"<< " 0.2 Credits"<<endl;
		
		}else{
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint: "<<h<<"\033[0m  "<<endl;
		}
		
		cout<<"Category: Geography "<<endl;
		cout<<"Place your bet(11-20): ";
		cin>>bet6;
		
			if(bet6>=11 && bet6<=20){
				cout<<"   "<<endl;
				cout<<"6. What body of water is located to the west of the Philippines?"<<endl;
				cout<<"    A. Philippine Sea          C. West Philippine Sea"<<endl;
				cout<<"    B. South China Sea         D. Celebes Sea"<<endl<<endl;
				cout<<"Plese enter the letter of your answer 0r type (h) for Hint: ";
				cin>>A6;
				
				if(A6=='h' || A6 =='H'){
					th++;//total hint
					if(h<1){
						cout<<"Hint used. 0.2 credits will be deducted from your credits."<<endl<<endl;
						c=c-0.2;
					}else{
						h=h-1;
					}
					cout<<"\033[0m \033[35mHint: \033[0mMajor body of water in Southeast Asia and is crucial for international shipping routes."<<endl<<endl;	
					cout<<"Plese enter the letter of your answer: ";
					cin>>A6;
					if(A6=='b' || A6=='B'){
						cout<<"    "<<endl<<endl;
						cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
						c=c+(1.2*bet5);
						b6=bet6*1.2;
						c6=b6/20;
					}else{
						cout<<"    "<<endl<<endl;
						cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
						c=c-bet6;
						c6=0;	
					}
				}else if(A6=='b' || A6=='B'){
					cout<<"    "<<endl<<endl;
					cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
					c=c+(1.2*bet5);
					b6=bet6*1.2;
					c6=b6/20;
								
				}else{
					cout<<"    "<<endl<<endl;
					cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
					c=c-bet6;
					c6=0;	
					}
			}else{
				cout<<"Invalid Bet";
			}
			
			m=(c4+c5+c6);	//total score in Medium Level
			
//Question Number 7

		cout<<"\033[35m             Welcome to the Hard Level!             \033[0m"<<endl<<endl;
		
		cout<<"Hard Level (1 out of 2)"<<endl<<endl;
		if(h<1){
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint cost\033[0m"<< " 0.3 Credits"<<endl;
		
		}else{
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint: "<<h<<"\033[0m  "<<endl;
		}
		
		cout<<"Category: Science  "<<endl;
		cout<<"Place your bet(21-30): ";
		cin>>bet7;
		
			if(bet7>=21 && bet7<=30){
				cout<<"   "<<endl;
				cout<<"7. Which type of cloud is commonly associated with thunderstorms and is the cause of most severe weather?"<<endl;
				cout<<"    A. Cirrostratus            C. Stratus"<<endl;
				cout<<"    B. Cumulonimbus            D. Altostratus"<<endl<<endl;
				cout<<"Plese enter the letter of your answer 0r type (h) for Hint: ";
				cin>>A7;
				
				if(A7=='h' || A7 =='H'){
					th++;//total hint
					if(h<1){
						cout<<"Hint used. 0.3 credits will be deducted from your credits."<<endl<<endl;
						c=c-0.3;
					}else{
						h=h-1;
					}
					cout<<"\033[0m \033[35mHint: \033[0mThis cloud is tall and puffy, often reaching high into the atmosphere. It can cause heavy rainfall, hail, lightning, and strong winds."<<endl<<endl;	
					cout<<"Plese enter the letter of your answer: ";
					cin>>A7;
					if(A7=='b' || A7=='B'){
						cout<<"    "<<endl<<endl;
						cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
						c=c+(1.3*bet7);
						b7=bet7*1.3;
						c7=b7/30;
					}else{
						cout<<"    "<<endl<<endl;
						cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
						c=c-bet7;
						c7=0;	
					}
				}else if(A7=='b' || A7=='B'){
					cout<<"    "<<endl<<endl;
					cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
					c=c+(1.3*bet7);
					b7=bet7*1.3;
					c7=b7/30;
						
				}else{
					cout<<"    "<<endl<<endl;
					cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
					c=c-bet7;
					c7=0;	
					}
	       }else{
				cout<<"Invalid Bet";
			}
//Question Number 8
	       cout<<""<<endl;
		cout<<"Hard Level (2 out of 2)"<<endl<<endl;
		if(h<1){
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint cost\033[0m"<< " 0.3 Credits"<<endl;
		
		}else{
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint: "<<h<<"\033[0m  "<<endl;
		}
		
		cout<<"Category: History  "<<endl;
		cout<<"Place your bet(21-30): ";
		cin>>bet8;
		
			if(bet8>=21 && bet8<=30){
				cout<<"   "<<endl;
				cout<<"8. Which Philippine artist is known for his Tandang Sora and Kasaysayan murals?"<<endl;
				cout<<"    A. Juan Luna               C. Carlos Botong Francisco"<<endl;
				cout<<"    B. Fernando Amorsolo       D. None of the Above"<<endl<<endl;
				cout<<"Plese enter the letter of your answer 0r type (h) for Hint: ";
				cin>>A8;
				
				if(A8=='h' || A8 =='H'){
					th++;//total hint
					if(h<1){
						cout<<"Hint used. 0.3 credits will be deducted from your credits."<<endl<<endl;
						c=c-0.3;
					}else{
						h=h-1;
					}
					cout<<"\033[0m \033[35mHint: \033[0mThis renowned Filipino artist is known for his historical murals that highlight important events in Philippine history, particularly the struggles for independence. He is often considered one of the leading figures in Philippine modern art and is famous for his nationalist themes."<<endl<<endl;	
					cout<<"Plese enter the letter of your answer: ";
					cin>>A8;
					if(A8=='c' || A8=='C'){
						cout<<"    "<<endl<<endl;
						cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
						c=c+(1.3*bet8);
						b8=bet8*1.3;
						c8=b8/30;
					}else{
						cout<<"    "<<endl<<endl;
						cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
						c=c-bet8;	
						c8=0;
					}
				}else if(A8=='c' || A8=='C'){
					cout<<"    "<<endl<<endl;
					cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
					c=c+(1.3*bet8);
					b8=bet8*1.3;
					c8=b8/30;
						
				}else{
					cout<<"    "<<endl<<endl;
					cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
					c=c-bet8;
					c8=0;	
					}
			}else{
				cout<<"Invalid Bet";
			}
			
			ha=(c7+c8);	//total score in Hard Level
			
//Question Number 9 

		cout<<"\033[31m             Welcome to the Boss Level!             \033[0m"<<endl<<endl;
			
		cout<<"Boss Level (1 out of 2)"<<endl<<endl;
		if(h<1){
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint cost\033[0m"<< " 0.4 Credits"<<endl;
		
		}else{
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint: "<<h<<"\033[0m  "<<endl;
		}
		
		cout<<"Category: Technology  "<<endl;
		cout<<"Place your bet(31-40): ";
		cin>>bet9;
		
			if(bet9>=31 && bet9<=40){
				cout<<"   "<<endl;
				cout<<"9. Who invented the first computer mouse?"<<endl;
				cout<<"    A. Douglas Engelbert       C. Bill Gates"<<endl;
				cout<<"    B. Alan Turnin             D. Balmond"<<endl<<endl;
				cout<<"Plese enter the letter of your answer 0r type (h) for Hint: ";
				cin>>A9;
				
				if(A9=='h' || A9 =='H'){
					if(h<1){
						cout<<"Hint used. 0.4 credits will be deducted from your credits."<<endl<<endl;
						c=c-0.4;
					}else{
						h=h-1;
					}
					cout<<"\033[0m \033[35mHint: \033[0mAmerican engineer invented the first computer mouse in the 1960s while working at the Stanford Research Institute. His invention was a key component of a new way of interacting with computers, making it easier to control on-screen elements"<<endl<<endl;	
					cout<<"Plese enter the letter of your answer: ";
					cin>>A9;
					if(A9=='a' || A9=='A'){
						th++;//total hint
						cout<<"    "<<endl<<endl;
						cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
						c=c+(1.5*bet9);
						b9=bet9*1.5;
						c9=b9/40;
					}else{
						cout<<"    "<<endl<<endl;
						cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
						c=c-bet9;
						c9=0;	
					}
				}else if(A9=='a' || A9=='A'){
					cout<<"    "<<endl<<endl;
					cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
					c=c+(1.5*bet9);
					b9=bet9*1.5;
					c9=b9/40;
					
				}else{
					cout<<"    "<<endl<<endl;
					cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
					c=c-bet9;
					c9=0;	
					}
			}else{
				cout<<"Invalid Bet";
			}
//Question Number 10
		cout<<""<<endl;
		cout<<"Boss Level (2 out of 2)"<<endl<<endl;
		if(h<1){
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint cost\033[0m"<< " 0.4 Credits"<<endl;
		
		}else{
			cout<<"\033[32mCredits: "<<c<<" \033[0m \033[35mHint: "<<h<<"\033[0m  "<<endl;
		}
		
		cout<<"Category: Science  "<<endl;
		cout<<"Place your bet(31-40): ";
		cin>>bet10;
		
			if(bet10>=31 && bet10<=40){
				cout<<"   "<<endl;
				cout<<"10. Who is credited with the discovery of the electron?"<<endl;
				cout<<"    A. Albert Einstein         C. Ernest Rutherford"<<endl;
				cout<<"    B. Neils Bohr              D. J.J. Thompson"<<endl<<endl;
				cout<<"Plese enter the letter of your answer 0r type (h) for Hint: ";
				cin>>A10;
				
				if(A10=='h' || A10 =='H'){
					th++;//total hint
					if(h<1){
						cout<<"Hint used. 0.4 credits will be deducted from your credits."<<endl<<endl;
						c=c-0.4;
					}else{
						h=h-1;
					}
					cout<<"\033[0m \033[35mHint: \033[0mThis British scientist made the discovery in 1897, using a cathode ray tube. His experiment showed that atoms were not indivisible, as previously thought, and led to the identification of subatomic particles."<<endl<<endl;	
					cout<<"Plese enter the letter of your answer: ";
					cin>>A10;
					if(A10=='d' || A10=='D'){
						cout<<"    "<<endl<<endl;
						cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
						c=c+(1.5*bet10);
						b10=bet10*1.5;
						c10=b10/40;
					}else{
						cout<<"    "<<endl<<endl;
						cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
						c=c-bet10;
						c10=0;	
					}
				}else if(A10=='d' || A10=='D'){
					cout<<"    "<<endl<<endl;
					cout<<"\033[34mYou've got the correct answer!!\033[0m"<<endl<<endl;
					c=c+(1.5*bet10);
					b10=bet10*1.5;
					c10=b10/40;
						
				}else{
					cout<<"    "<<endl<<endl;
					cout<<"\033[31mYou've got the wrong answer :(\033[0m"<<endl<<endl;
					c=c-bet10;
					c10=0;	
					}
			}else{
				cout<<"Invalid Bet";
			}
			c=c-100;
			b=(c9+c10);	//total score in Boss Level
			
			
			cout<<"Number of hints used: "<<"\033[35m"<<th<<"\033[0m"<<endl<<endl;
			cout<<"You have a total of \033[32m"<<c<<" credits\033[0m"<<endl<<endl;
			score=e+m+ha+b;	//total score out of 10
			total=score+0.5; //roundoff
			
			if(c <=199 && c >=100){
				cout<<"\033[31mAny remaining credit will be automatically converted into bonus points for next quizzes!\033[0m"<<endl<<endl<<endl;
				cout<<"You've earned 1 bonus point! You can use this bonus point in the next quiz by entering a redemption code."<<endl<<endl;
				cout<<"Redemption Code: BONUS2024XJ3K9Q"<<endl<<endl;
			}else if(c >=200 && c <=299){
				cout<<"\033[31mAny remaining credit will be automatically converted into bonus points for next quizzes!\033[0m"<<endl<<endl<<endl;
				cout<<"You've earned 2 bonus point! You can use this bonus point in the next quiz by entering a redemption code."<<endl<<endl;
				cout<<"Redemption Code: QUIZTWISTB7P2ZL"<<endl<<endl;
		    }else if(c >=300 && c <=400){
		    	cout<<"\033[31mAny remaining credit will be automatically converted into bonus points for next quizzes!\033[0m"<<endl<<endl<<endl;
				cout<<"You've earned 3 bonus point! You can use this bonus point in the next quiz by entering a redemption code."<<endl<<endl;
				cout<<"\033[34mRedemption Code:\033[0m QUIZQUIZD4R8F1"<<endl<<endl;
		    }else{
		    	cout<<"Sorry, you did not earn any bonus points this time. "<<endl<<endl;
		    }
			
			if(total>10){
				cout<<"*------------------------------------------------------------------------------------------------*"<<endl;
				cout<<"*                                                                                                *"<<endl;
				cout<<"*\033[32m                          Congratulations! You've completed the quiz.                           \033[0m*"<<endl;
				cout<<"*                                                                                                *"<<endl;
				cout<<"*\033[32m                         Congratulations! You've got a perfect score!!                          \033[0m*"<<endl;
				cout<<"*                                                                                                *"<<endl;
				cout<<"*\033[32m                                    Total Score is 10/10                                        \033[0m*"<<endl;
				cout<<"*                                                                                                *"<<endl;
				cout<<"*\033[32m                                    May kiss ka sakin:)                                         \033[0m*"<<endl;
				cout<<"*                                                                                                *"<<endl;
			    cout<<"*\033[34m                     Thankyou for participating in my QUIZ WITH A TWIST.                        \033[0m*"<<endl;
			    cout<<"*                                                                                                *"<<endl;
			    cout<<"*------------------------------------------------------------------------------------------------*"<<endl;
			}else if(total<=9 || total>=1 || c<=1){
				cout<<"*------------------------------------------------------------------------------------------------*"<<endl;
				cout<<"*                                                                                                *"<<endl;
				cout<<"*\033[32m                          Congratulations! You've completed the quiz.                           \033[0m*"<<endl;
				cout<<"*                                                                                                *"<<endl;
				cout<<"*\033[32m                                      Total Score is "<<total<<"/10                                       \033[0m*"<<endl;
				cout<<"*                                                                                                *"<<endl;
			    cout<<"*\033[34m                     Thankyou for participating in my QUIZ WITH A TWIST.                        \033[0m*"<<endl;
			    cout<<"*                                                                                                *"<<endl;
			    cout<<"*------------------------------------------------------------------------------------------------*"<<endl;
				
		   }else{
		   		cout<<"*------------------------------------------------------------------------------------------------*"<<endl;
				cout<<"*                                                                                                *"<<endl;
				cout<<"*\033[32m                          Congratulations! You've completed the quiz.                           \033[0m*"<<endl;
				cout<<"*                                                                                                *"<<endl;
				cout<<"*\033[31m                                     Total Score is 0/10                                        \033[0m*"<<endl;
				cout<<"*                                                                                                *"<<endl;
			    cout<<"*\033[34m                     Thankyou for participating in my QUIZ WITH A TWIST.                        \033[0m*"<<endl;
			    cout<<"*                                                                                                *"<<endl;
			    cout<<"*------------------------------------------------------------------------------------------------*"<<endl;
		   		
		   }
	}else{
		cout<<"Invalid Answer";
	}
}

