#include "GUI.h"



GUI::GUI()
{
}

void GUI::SetTextures(Texture Spades[15], Texture Hearts[15], Texture Diamonds[15], Texture Clubs[15], Texture &Background,Texture &CardsHolder)
{
	///////////////////////Spades Textures////////////////////
	Spades[2].loadFromFile("CardsTextures/2_of_spades.jpg");
	Spades[3].loadFromFile("CardsTextures/3_of_spades.jpg");
	Spades[4].loadFromFile("CardsTextures/4_of_spades.jpg");
	Spades[5].loadFromFile("CardsTextures/5_of_spades.jpg");
	Spades[6].loadFromFile("CardsTextures/6_of_spades.jpg");
	Spades[7].loadFromFile("CardsTextures/7_of_spades.jpg");
	Spades[8].loadFromFile("CardsTextures/8_of_spades.jpg");
	Spades[9].loadFromFile("CardsTextures/9_of_spades.jpg");
	Spades[10].loadFromFile("CardsTextures/10_of_spades.jpg");
	Spades[11].loadFromFile("CardsTextures/jack_of_spades2.jpg");
	Spades[12].loadFromFile("CardsTextures/queen_of_spades2.jpg");
	Spades[13].loadFromFile("CardsTextures/king_of_spades2.jpg");
	Spades[14].loadFromFile("CardsTextures/ace_of_spades.jpg");
	///////////////////////Hearts Textures//////////////////////
	Hearts[2].loadFromFile("CardsTextures/2_of_hearts.jpg");
	Hearts[3].loadFromFile("CardsTextures/3_of_hearts.jpg");
	Hearts[4].loadFromFile("CardsTextures/4_of_hearts.jpg");
	Hearts[5].loadFromFile("CardsTextures/5_of_hearts.jpg");
	Hearts[6].loadFromFile("CardsTextures/6_of_hearts.jpg");
	Hearts[7].loadFromFile("CardsTextures/7_of_hearts.jpg");
	Hearts[8].loadFromFile("CardsTextures/8_of_hearts.jpg");
	Hearts[9].loadFromFile("CardsTextures/9_of_hearts.jpg");
	Hearts[10].loadFromFile("CardsTextures/10_of_hearts.jpg");
	Hearts[11].loadFromFile("CardsTextures/jack_of_hearts2.jpg");
	Hearts[12].loadFromFile("CardsTextures/queen_of_hearts2.jpg");
	Hearts[13].loadFromFile("CardsTextures/king_of_hearts2.jpg");
	Hearts[14].loadFromFile("CardsTextures/ace_of_hearts.jpg");
	//////////////////////Diamonds Textures/////////////////////
	Diamonds[2].loadFromFile("CardsTextures/2_of_diamonds.jpg");
	Diamonds[3].loadFromFile("CardsTextures/3_of_diamonds.jpg");
	Diamonds[4].loadFromFile("CardsTextures/4_of_diamonds.jpg");
	Diamonds[5].loadFromFile("CardsTextures/5_of_diamonds.jpg");
	Diamonds[6].loadFromFile("CardsTextures/6_of_diamonds.jpg");
	Diamonds[7].loadFromFile("CardsTextures/7_of_diamonds.jpg");
	Diamonds[8].loadFromFile("CardsTextures/8_of_diamonds.jpg");
	Diamonds[9].loadFromFile("CardsTextures/9_of_diamonds.jpg");
	Diamonds[10].loadFromFile("CardsTextures/10_of_diamonds.jpg");
	Diamonds[11].loadFromFile("CardsTextures/jack_of_diamonds2.jpg");
	Diamonds[12].loadFromFile("CardsTextures/queen_of_diamonds2.jpg");
	Diamonds[13].loadFromFile("CardsTextures/king_of_diamonds2.jpg");
	Diamonds[14].loadFromFile("CardsTextures/ace_of_diamonds.jpg");
	//////////////////////////Clubs Textures/////////////////////////
	Clubs[2].loadFromFile("CardsTextures/2_of_clubs.jpg");
	Clubs[3].loadFromFile("CardsTextures/3_of_clubs.jpg");
	Clubs[4].loadFromFile("CardsTextures/4_of_clubs.jpg");
	Clubs[5].loadFromFile("CardsTextures/5_of_clubs.jpg");
	Clubs[6].loadFromFile("CardsTextures/6_of_clubs.jpg");
	Clubs[7].loadFromFile("CardsTextures/7_of_clubs.jpg");
	Clubs[8].loadFromFile("CardsTextures/8_of_clubs.jpg");
	Clubs[9].loadFromFile("CardsTextures/9_of_clubs.jpg");
	Clubs[10].loadFromFile("CardsTextures/10_of_clubs.jpg");
	Clubs[11].loadFromFile("CardsTextures/jack_of_clubs2.jpg");
	Clubs[12].loadFromFile("CardsTextures/queen_of_clubs2.jpg");
	Clubs[13].loadFromFile("CardsTextures/king_of_clubs2.jpg");
	Clubs[14].loadFromFile("CardsTextures/ace_of_clubs.jpg");
	///////////////////////////////////////////////////////////////
	Background.loadFromFile("CardsTextures/BackGround.jpg");
	CardsHolder.loadFromFile("CardsTextures/CardsHolder.jpg");
}
void GUI::PlayerCardsSetup(vector < pair<int, string>> Players, interactiveButton Card[14], Texture Spades[15], Texture Hearts[15], Texture Diamonds[15], Texture Clubs[15])
{
	int j = 0;
	while (j != 13)
	{
		if (Players[j].second == "Spades")
		{
			Card[j].normal = Spades[Players[j].first];
			Card[j].shape.setPosition(120, 570);
			Card[j].TypeAndValue.first = "Spades";
			Card[j].TypeAndValue.second = Players[j].first;
		}
		else if (Players[j].second == "Hearts")
		{
			Card[j].normal = Hearts[Players[j].first];
			Card[j].shape.setPosition(120, 570);
			Card[j].TypeAndValue.first = "Hearts";
			Card[j].TypeAndValue.second = Players[j].first;

		}
		else if (Players[j].second == "Diamonds")
		{
			Card[j].normal = Diamonds[Players[j].first];
			Card[j].shape.setPosition(120, 570);
			Card[j].TypeAndValue.first = "Diamonds";
			Card[j].TypeAndValue.second = Players[j].first;
		}
		else if (Players[j].second == "EClubs")
		{
			Card[j].normal = Clubs[Players[j].first];
			Card[j].shape.setPosition(120, 570);
			Card[j].TypeAndValue.first = "EClubs";
			Card[j].TypeAndValue.second = Players[j].first;
		}
		normalize(Card[j]);
		j++;
	}
}
void GUI::GameDesignSetUp(Texture &avatar1,Sprite &Avatar1, Texture &avatar2, Sprite &Avatar2, Texture &avatar3, Sprite &Avatar3, Texture &SHDC, Sprite &shdc, Texture &CallingWindow, Sprite &callingwindow, Sprite &callingwindow2, interactiveButton CallNumber[14], interactiveButton CallColor[4],interactiveButton Choice[2])
{
	int factor=12;
	avatar1.loadFromFile("CardsTextures/Avatar1.jpg");
	Avatar1.setTexture(avatar1);

	avatar2.loadFromFile("CardsTextures/Avatar2.jpg");
	Avatar2.setTexture(avatar2);
	
	avatar3.loadFromFile("CardsTextures/Avatar3.jpg");
	Avatar3.setTexture(avatar3);

	SHDC.loadFromFile("CardsTextures/SHDC.png");
	shdc.setTexture(SHDC);

	CallingWindow.loadFromFile("CardsTextures/CallingWindow.jpg");
	callingwindow.setTexture(CallingWindow);
	callingwindow2.setTexture(CallingWindow);

	CallNumber[0].normal.loadFromFile("CardsTextures/0.jpg");
	CallNumber[1].normal.loadFromFile("CardsTextures/1.jpg");
	CallNumber[2].normal.loadFromFile("CardsTextures/2.jpg");
	CallNumber[3].normal.loadFromFile("CardsTextures/3.jpg");
	CallNumber[4].normal.loadFromFile("CardsTextures/4.jpg");
	CallNumber[5].normal.loadFromFile("CardsTextures/5.jpg");
	CallNumber[6].normal.loadFromFile("CardsTextures/6.jpg");
	CallNumber[7].normal.loadFromFile("CardsTextures/7.jpg");
	CallNumber[8].normal.loadFromFile("CardsTextures/8.jpg");
	CallNumber[9].normal.loadFromFile("CardsTextures/9.jpg");
	CallNumber[10].normal.loadFromFile("CardsTextures/10.jpg");
	CallNumber[11].normal.loadFromFile("CardsTextures/11.jpg");
	CallNumber[12].normal.loadFromFile("CardsTextures/12.jpg");
	CallNumber[13].normal.loadFromFile("CardsTextures/13.jpg");

	CallNumber[0].clicked.loadFromFile("CardsTextures/0Clicked.jpg");
	CallNumber[1].clicked.loadFromFile("CardsTextures/1Clicked.jpg");
	CallNumber[2].clicked.loadFromFile("CardsTextures/2Clicked.jpg");
	CallNumber[3].clicked.loadFromFile("CardsTextures/3Clicked.jpg");
	CallNumber[4].clicked.loadFromFile("CardsTextures/4Clicked.jpg");
	CallNumber[5].clicked.loadFromFile("CardsTextures/5Clicked.jpg");
	CallNumber[6].clicked.loadFromFile("CardsTextures/6Clicked.jpg");
	CallNumber[7].clicked.loadFromFile("CardsTextures/7Clicked.jpg");
	CallNumber[8].clicked.loadFromFile("CardsTextures/8Clicked.jpg");
	CallNumber[9].clicked.loadFromFile("CardsTextures/9Clicked.jpg");
	CallNumber[10].clicked.loadFromFile("CardsTextures/10Clicked.jpg");
	CallNumber[11].clicked.loadFromFile("CardsTextures/11Clicked.jpg");
	CallNumber[12].clicked.loadFromFile("CardsTextures/12Clicked.jpg");
	CallNumber[13].clicked.loadFromFile("CardsTextures/13Clicked.jpg");

	CallColor[0].normal.loadFromFile("CardsTextures/Spade.png");
	CallColor[1].normal.loadFromFile("CardsTextures/Heart.png");
	CallColor[2].normal.loadFromFile("CardsTextures/Diamond.png");
	CallColor[3].normal.loadFromFile("CardsTextures/Club.png");

	CallColor[0].clicked.loadFromFile("CardsTextures/SpadeClicked.jpg");
	CallColor[1].clicked.loadFromFile("CardsTextures/HeartClicked.jpg");
	CallColor[2].clicked.loadFromFile("CardsTextures/DiamondClicked.jpg");
	CallColor[3].clicked.loadFromFile("CardsTextures/ClubClicked.jpg");

	Choice[0].normal.loadFromFile("CardsTextures/Pass.jpg");
	Choice[1].normal.loadFromFile("CardsTextures/Call.jpg");

	for (int i = 0; i < 2; i++)
	{
		normalize(Choice[i]);
		Choice[i].shape.setSize(Vector2f(100.0f, 29.0f));
		if(i==0)
			Choice[i].shape.setPosition(12, 270.0f);
		else if(i==1)
			Choice[i].shape.setPosition(300, 270.0f);
		RectButtonAssign(Choice[i]);
		Choice[i].TypeAndValue.second = i;
	}
	factor = 12;
	for (int i = 0; i <= 6; i++)
	{
		normalize(CallNumber[i]);
		CallNumber[i].shape.setSize(Vector2f(67.0f, 50.0f));
		CallNumber[i].shape.setPosition(factor, 100.0f);
		RectButtonAssign(CallNumber[i]);
		CallNumber[i].TypeAndValue.second = i;
		factor += 67;
	}

	factor = 12;
	
	for (int i = 7; i <= 13; i++)
	{
		if (i <= 9)
		{
		normalize(CallNumber[i]);
		CallNumber[i].shape.setSize(Vector2f(67.0f, 50.0f));
		CallNumber[i].shape.setPosition(factor, 155.0f);
		RectButtonAssign(CallNumber[i]);
		CallNumber[i].TypeAndValue.second = i;
		factor += 67;
		}
		else
		{
			normalize(CallNumber[i]);
			CallNumber[i].shape.setSize(Vector2f(67.0f, 50.0f));
			CallNumber[i].shape.setPosition(factor, 155.0f);
			RectButtonAssign(CallNumber[i]);
			CallNumber[i].TypeAndValue.second = i;
			factor += 67;
		}
	}

	factor = 12;
	
	for (int i = 0; i <= 3; i++)
	{
		normalize(CallColor[i]);
		CallColor[i].shape.setSize(Vector2f(67.0f, 50.0f));
		CallColor[i].shape.setPosition(factor, 210.0f);
		RectButtonAssign(CallColor[i]);
		CallColor[i].TypeAndValue.second = i;
		factor += 112.5;
	}



	Avatar1.setPosition(90, 230);
	Avatar2.setPosition(480, 43);
	Avatar3.setPosition(817, 230);
	shdc.setPosition(480, 230);
	callingwindow.setPosition(275, 125);
	callingwindow2.setPosition(275, 125);


}

 string GUI::TrumpDes(vector<pair<int, string>> Bids,int &Caller,pair<int,string>UserBid)
{
	 pair<int,string> max = Bids[0];
		Caller = 0;
	 for (int  i = 1; i < 3; i++)
	 {
		 if (Bids[i].first > max.first)
		 {
			 Caller = i;
			 max = Bids[i];
		 }
		 else if (Bids[i].first == max.first)
		 {
			 if (Bids[i].second > max.second)
			 {
				 Caller = i;
				 max = Bids[i];
			 }
		 }
	 }

	 if (UserBid.first > max.first)
	 {
		 Caller = 3;
		 max = UserBid;
	 }


	 return max.second;
}




void GUI::ProgramRun(RenderWindow &window,interactiveButton Card[14], Sprite BackGround,interactiveButton RoundDone,Sprite CardsHolder, vector<pair<int, string >> &Bids, vector < vector < pair<int, string>>> Players )
{

	AiPlayer Ai;
	CardDeck Deck;
	vector <pair<int, string>> CardsOnGround;
	vector<vector<pair<int, int>>> Halemm(4);
	int KolElLammat[4] = {};
	memset(KolElLammat, 0, 4);
	string status;

	int TotalLammat = 0;
	string Trump;
	pair<int, string> UserBid;

	interactiveButton CallNumber[14];
	interactiveButton CallColor[4];
	interactiveButton Choice[2];

	Texture avatar1;
	Sprite Avatar1;
	Texture avatar2;
	Sprite Avatar2;
	Texture avatar3;
	Sprite Avatar3;
	Texture SHDC;
	Sprite shdc;
	Texture CallingWindow;
	Sprite callingwindow;
	Sprite callingwindow2;

	GameDesignSetUp(avatar1, Avatar1, avatar2, Avatar2, avatar3, Avatar3, SHDC, shdc, CallingWindow,callingwindow,callingwindow2,CallNumber,CallColor,Choice);

	Text text;
	Font font;
	pair<string, string> HighestBid;
	HighestBid.first=to_string(Bids[0].first);
	HighestBid.second = Bids[0].second;

	font.loadFromFile("ObelixPro-cyr.ttf");
	text.setFont(font);
	text.setString("The Highest Bid Till now is : "+HighestBid.first+" Of "+HighestBid.second);
	text.setPosition(290,180);
	text.setCharacterSize(15);
	text.setFillColor(Color::Black);
	text.Bold;
	
	CardsHolder.setPosition(95, 460);

	


	for (int i = 0; i < 13; i++)
		{
		Card[i].shape.setSize(Vector2f(75, 108));
		}
	float factorx = 60;
	bool roundstarted = true;
	int i = 0, i2=0;
	int h = 0;
	bool finalcall = false;
	bool usertturn = false;
	Vector2f destination = Vector2f(1000, 550);
	
	string mode = "in_game";
	bool checkCallNumber[14] = {};
	memset(checkCallNumber, 0, 14);
	bool checkCallColor[4] = {};
	memset(checkCallColor, 0, 4);
	bool ishovered[13] = {};
	memset(ishovered, 0, 13);
	while (window.isOpen())
	{
		Event E;
		while (window.pollEvent(E))
		{
			switch (E.type)
			{
			case Event::Closed:
				window.close();
				break;
			default:
				break;
			}
		}

		if (i != 13)
		{
			if (Card[i].shape.getPosition().y >= destination.y)
			{
				
				Card[i].shape.move(0,-100);
			}
			else
			{
				i++;
				Card[i].shape.move(factorx, 0);
				factorx += 60;
			}
		}

			if (roundstarted && i==13)
			{
				mode = "UserCalling";
			}
			

		if (h != 1 && i == 13&& !roundstarted)
		{
			for (int f = 0; f < 13; f++)
			{
				RectButtonAssign(Card[f]);
			}
			h++;
		}

	
		for (int p = 0; p < 13; p++)
		{

			if (isButtonHovered(Card[p], window))
			{
				if (ishovered[p] == 0)
				{
				ishovered[p] = 1;
				Card[p].shape.move(0, -20);
				}
			}
			else
			{
				if (ishovered[p] == 1)
				{
					ishovered[p] = 0;
					Card[p].shape.move(0, 20);
				}

			}
		} 
		
		for (int p = 0; p < 13; p++)
		{
			if (ibuttonAutoHover(Card[p], window))
			{
				Card[p].shape.setPosition(500, 150);
				Card[p].Reset();
				hang();
			}
		}
		
		if (mode == "UserCalling")
		{
			RenderWindow CallingWindow1(VideoMode(502,325), "Estimation" , Style::Close | Style::Resize);
			//here
			callingwindow.setPosition(0, 0);
			text.setPosition(9, 53);
		while (CallingWindow1.isOpen())
		{

			Event E;
			while (window.pollEvent(E))
			{
				switch (E.type)
				{
				case Event::Closed:
					window.close();
					break;
				default:
					break;
				}
			}

			

				for (int c = 0; c <= 13; c++)
				{
					if (ibuttonAutoHover(CallNumber[c], CallingWindow1))
					{
						memset(checkCallNumber, 0, 14);
						checkCallNumber[c] = 1;
					}
				}
				for (int c = 0; c <= 13; c++)
				{
					if (checkCallNumber[c])
					{
					CallNumber[c].shape.setTexture(&CallNumber[c].clicked);
						UserBid.first = CallNumber[c].TypeAndValue.second;

					}
				}


				for (int c = 0; c <= 3; c++)
				{
					if (ibuttonAutoHover(CallColor[c], CallingWindow1))
					{
						memset(checkCallColor, 0, 4);
						checkCallColor[c] = 1;
					}
				}
				for (int c = 0; c <= 3; c++)
				{
					if (checkCallColor[c])
					{
						CallColor[c].shape.setTexture(&CallColor[c].clicked);

						if (CallColor[c].TypeAndValue.second == 0)
							UserBid.second = "Spades";
						else if (CallColor[c].TypeAndValue.second == 1)
							UserBid.second = "Hearts";
						else if (CallColor[c].TypeAndValue.second == 2)
							UserBid.second = "Diamonds";
						else if (CallColor[c].TypeAndValue.second == 3)
							UserBid.second = "EClubs";
					}
				}

				for (int c = 0; c <= 1; c++)
				{
					if (ibuttonAutoHover(Choice[c], CallingWindow1))
					{
						if (Choice[c].TypeAndValue.second)
						{
							mode = "BeforeFinalCalling";
							Bids.push_back(UserBid);
							Trump = TrumpDes(Bids, Caller, UserBid);
							CallingWindow1.close();
							roundstarted = false;
						}
						else
						{
							UserBid.first = 0;
							UserBid.second = "0";
							mode = "BeforeFinalCalling";
							Bids.push_back(UserBid);
							Trump = TrumpDes(Bids, Caller, UserBid);
							CallingWindow1.close();
							roundstarted = false;

						}
					}
				}



		CallingWindow1.clear();
		CallingWindow1.draw(callingwindow);
		CallingWindow1.draw(text);
		for (int c = 0; c <= 13; c++)
		{
			CallingWindow1.draw(CallNumber[c].shape);
		}
		for (int c = 0; c <= 3; c++)
		{
			CallingWindow1.draw(CallColor[c].shape);
		}
		for (int c = 0; c <= 1; c++)
		{
			CallingWindow1.draw(Choice[c].shape);
		}

		CallingWindow1.display();

			}
		}


		if (mode == "BeforeFinalCalling")
		{
			int v;
			if (Trump == "Spades")v = 0;
			if (Trump == "Hearts")v = 1;
			if (Trump == "Diamonds")v = 2;
			if (Trump == "EClubs")v = 3;


				normalize(CallNumber[UserBid.first]);
			for (int x = 0; x < 4; x++)
			{
				if (CallColor[x].TypeAndValue.second == v)
				{
					CallColor[v].shape.setTexture(&CallColor[v].clicked);
				}
				else
				{
					CallColor[x].Reset();
					CallColor[x].shape.setSize(Vector2f(0, 0));
				}
			}
			Choice[0].Reset();
			Choice[0].shape.setSize(Vector2f(0, 0));
			text.setString("Choose your Finall Call , Trump is : " + Trump);
			mode = "FinalCalling";

		}
		
			if (mode == "FinalCalling")
			{


				RenderWindow CallingWindow2(VideoMode(502, 325), "Estimation", Style::Close | Style::Resize);



		for (int c=0,b=Caller;c<4;c++)
		{
			int temp = 0;
			if (b == 3)//User Final Call
			{
				while (CallingWindow2.isOpen())
				{

					Event E;
					while (window.pollEvent(E))
					{
						switch (E.type)
						{
						case Event::Closed:
							window.close();
							break;
						default:
							break;
						}
					}


					for (int c = 0; c <= 13; c++)
					{
						if (ibuttonAutoHover(CallNumber[c], CallingWindow2))
						{
							finalcall = true;
							memset(checkCallNumber, 0, 14);
							checkCallNumber[c] = 1;
						}
					}

					for (int c = 0; c <= 13; c++)
					{
						if (checkCallNumber[c])
						{
							CallNumber[c].shape.setTexture(&CallNumber[c].clicked);
							UserBid.first = CallNumber[c].TypeAndValue.second;

						}
					}
			
						if (ibuttonAutoHover(Choice[1], CallingWindow2) && finalcall)
						{
							TotalLammat += UserBid.first;
							b = (b + 1) % 4;
							CallingWindow2.close();
							mode = "Playing";
							break;
						}

						CallingWindow2.clear();
						CallingWindow2.draw(callingwindow);
						CallingWindow2.draw(text);
						for (int c = 0; c <= 13; c++)
						{
							CallingWindow2.draw(CallNumber[c].shape);
						}

						for (int c = 0; c <= 3; c++)
						{
							CallingWindow2.draw(CallColor[c].shape);
						}

						CallingWindow2.draw(Choice[1].shape);

						CallingWindow2.display();

				}
				cout << UserBid.first<<" "<<Trump<< endl;
				continue;
			}
			if (c == 3 )
			{
				
			temp = Ai.FinalCall(Trump,Players[b], -1, TotalLammat,Halemm[b]);
			TotalLammat += temp;

			cout << temp << " " << Trump << endl;

			if(finalcall)
			mode = "Playing";
							
			(TotalLammat > 13) ? status = "Over" : status = "Under";

			break;
			}
			
			temp = Ai.FinalCall(Trump, Players[b], b, TotalLammat,Halemm[b]);
			
			cout << temp << " " << Trump << endl;
			TotalLammat += temp;

			b =(b+ 1) % 4;
		}

		
		}

		
		
		if (mode == "Playing")
		{
			
			pair<int, string> ground;
			int Lammat=0,FinalCall=0;
			Ai.CardDes(Deck.Cards(), ground, Trump, Players[0], status, Lammat, FinalCall);


		}


		window.clear();
		window.draw(BackGround);
		window.draw(RoundDone.shape);
		window.draw(CardsHolder);
		window.draw(Avatar1);
		window.draw(Avatar2);
		window.draw(Avatar3);
		window.draw(shdc);
		for (int i = 0; i < 13; i++)
		{
			
				window.draw(Card[i].shape);
			
		}

		/*if (mode == "FinalCalling")
		{
			window.draw(callingwindow);
			window.draw(text);
			for (int c = 0; c <= 13; c++)
			{
				window.draw(CallNumber[c].shape);
			}

			for (int c = 0; c <= 3; c++)
			{
				window.draw(CallColor[c].shape);
			}

			window.draw(Choice[1].shape);
		}*/
		
		window.display();
	}

}
void GUI::normalize(interactiveButton &ib)
{
	ib.shape.setTexture(&ib.normal);
}
void GUI::RectButtonAssign(interactiveButton &ib)
{
	ib.button.lowerLimit = ib.shape.getPosition();
	ib.button.upperLimit.x = ib.button.lowerLimit.x + ib.shape.getSize().x -15 ;
	ib.button.upperLimit.y = ib.button.lowerLimit.y + ib.shape.getSize().y;
}
bool GUI::LMB()
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		return 1;
	else
		return 0;
}
bool GUI::isButtonHovered(interactiveButton ib, RenderWindow &window)
{
	Button AButton = ib.button;
	sf::Vector2i original = sf::Mouse::getPosition(window);
	if (original.x<AButton.upperLimit.x&& original.x>AButton.lowerLimit.x && original.y<AButton.upperLimit.y && original.y>AButton.lowerLimit.y)
	{
		return 1;
	}

	return 0;
}
bool GUI::ibuttonAutoHover(interactiveButton &ib, sf::RenderWindow &window)
{
	if (isButtonHovered(ib, window))
	{
		if (LMB())
			return 1;
	}
	else
		normalize(ib);
	return 0;
}
void GUI::hang()
{
	while (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		continue;
}

void GUI::GameDesign()
{
	
}

GUI::~GUI()
{
}
