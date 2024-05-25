//#include<iostream>
//#include<sstream>
//#include<ctime>
//#include<cstdlib>
//#include<SFML/Graphics.hpp>
//#include<SFML/Audio.hpp>
//using namespace sf;
//int main()
//{
//	Music music;
//	music.openFromFile("Faded.mp3");
//	music.play();
//
//	srand(time(0));
//	RenderWindow window(VideoMode(1500, 1000), "Snake Game");
//	Font font;
//	font.loadFromFile("arial.ttf");
//	Text text;
//	text.setFont(font);
//	text.setString(" Snake");
//	text.setCharacterSize(50);
//	text.setFillColor(Color::Cyan);
//	text.setPosition(640, 10);
//
//	Text Score;
//	Score.setFont(font);
//	Score.setString("Score: ");
//	Score.setCharacterSize(50);
//	Score.setFillColor(Color::Cyan);
//	Score.setPosition(20, 10);
//	Text num;
//	num.setFont(font);
//	num.setCharacterSize(50);
//	num.setFillColor(Color::Blue);
//	num.setPosition(150, 10);
//	std::stringstream ss;
//
//	Texture snake;
//	snake.loadFromFile("Pic.jpg");
//
//	Texture t1, t2;            //snake and fruit
//	Texture b;                 //boundary horizontal and vertical
//	t1.loadFromFile("green.png");
//	if (!(t1.loadFromFile("green.png")))
//		std::cout << "Error";
//	t2.loadFromFile("red.png");
//	b.loadFromFile("purple.png");
//
//	Sprite s1[100];
//	for (int i = 0; i < 100; i++) {
//		s1[i].setTexture(t1);
//	}
//	Sprite s2(t2);
//	Sprite b1(b);
//	Sprite b2(b);
//	Sprite b3(b);
//	Sprite b4(b);
//	Sprite sn(snake);
//	float s1pos_x = 50, s1pos_y = 150;
//	float s2pos_x = 50+rand()%1300, s2pos_y = 100+rand() % 750;
//	int size1 = 4, size2 = 2;
//
//	sn.setScale(0.8,0.95);
//	
//	s1[0].setPosition(s1pos_x, s1pos_y);
//	s1[0].setScale(size1, size2);
//	s2.setPosition(s2pos_x, s2pos_y);
//	s2.setScale(1, 1);
//
//	b1.setPosition(10, 80);
//	b1.setScale(97, 2);
//	b2.setPosition(10, 80);
//	b2.setScale(2, 55);
//	b3.setPosition(10, 900);
//	b3.setScale(98, 2);
//	b4.setPosition(1450, 80);
//	b4.setScale(2, 55);
//
//	bool up = false, right = false, left = false, down = false;
//	int score = 0;
//
//	while (window.isOpen())
//	{
//		Event event;
//		while (window.pollEvent(event)) {
//
//			if (event.type == Event::Closed)
//				window.close();
//			if (event.type == Event::KeyPressed) {
//				if (event.key.scancode == Keyboard::Scan::Right) {
//					right = true;
//					left = false;
//					up = false;
//					down = false;
//				}
//				else if (event.key.scancode == Keyboard::Scan::Left) {
//					right = false;
//					left = true;
//					up = false;
//					down = false;
//				}
//				else if (event.key.scancode == Keyboard::Scan::Down) {
//					right = false;
//					left = false;
//					up = false;
//					down = true;
//				}
//				else if (event.key.scancode == Keyboard::Scan::Up) {
//					right = false;
//					left = false;
//					up = true;
//					down = false;
//				}
//			}
//		}
//
//		if (up) {
//			s1pos_y -=0.3;
//			s1[0].setPosition(s1pos_x, s1pos_y);
//			s1[0].setScale(size1, size2);
//		}
//		else if (down) {
//			s1pos_y +=0.3;
//			s1[0].setPosition(s1pos_x, s1pos_y);
//			s1[0].setScale(size1, size2);
//		}
//		else if (right) {
//			s1pos_x +=0.3;
//			s1[0].setPosition(s1pos_x, s1pos_y);
//			s1[0].setScale(size1, size2);
//		}
//		else if (left) {
//			s1pos_x -=0.3;
//			s1[0].setPosition(s1pos_x, s1pos_y);
//			s1[0].setScale(size1, size2);
//		}
//
//		if (s1[0].getGlobalBounds().contains(s2pos_x, s2pos_y)) {
//			s2pos_x = 50 + rand() % 1300, s2pos_y = 100 + rand() % 750;
//			s2.setPosition(s2pos_x, s2pos_y);
//			size1++;
//			s1[0].setScale(size1, size2);
//			ss.str("");
//			score++;
//			ss << score;
//			num.setString(ss.str());
//		}
//		if (b1.getGlobalBounds().contains(s1pos_x, s1pos_y)) {
//		    s1pos_y = 900;
//			s1[0].setPosition(s1pos_x, s1pos_y);
//		}
//		else if (b3.getGlobalBounds().contains(s1pos_x, s1pos_y)) {
//			s1pos_y = 120;
//			s1[0].setPosition(s1pos_x, s1pos_y);
//		}
//	    else if (b2.getGlobalBounds().contains(s1pos_x, s1pos_y)) {
//			s1pos_x = 1400;
//			s1[0].setPosition(s1pos_x, s1pos_y);
//		}
//		else if (b4.getGlobalBounds().contains(s1pos_x, s1pos_y)) {
//			s1pos_x = 50;
//			s1[0].setPosition(s1pos_x, s1pos_y);
//		}
//
//		window.clear();
//		window.draw(sn);
//		window.draw(Score);
//		window.draw(num);
//		window.draw(text);
//		window.draw(s1[0]);
//		window.draw(s2);
//		window.draw(b1);
//		window.draw(b2);
//		window.draw(b3);
//		window.draw(b4);
//		window.display();
//	}
//	return 0;
//}