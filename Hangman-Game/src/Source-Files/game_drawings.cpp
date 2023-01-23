#include "game_drawings.hpp"

//25 x 80

int game_drawings::intro()
{
	game_utility::cursor_fill_level(0);

	std::cout << "                                                                               " << std::endl;
	std::cout << "                                                                               " << std::endl;
	game_utility::change_foreground_color(foreground::RXXD);
	std::cout << "                              H  A  N  G  M  A  N                              " << std::endl;
	game_utility::change_foreground_color(foreground::RGBD);
	std::cout << "                             _____________________                             " << std::endl;
	std::cout << "                            |---------------------|                            " << std::endl;
	std::cout << "                            ||  //                |                            " << std::endl;
	std::cout << "                            || //                 |                            " << std::endl;
	std::cout << "                            ||//                  |                            " << std::endl;
	std::cout << "                            ||/                   O                            " << std::endl;
	std::cout << "                            ||                   \\|/                          " << std::endl;
	std::cout << "                            ||                    |                            " << std::endl;
	std::cout << "                            ||                   / \\                          " << std::endl;
	std::cout << "                            ||                                                 " << std::endl;
	std::cout << "                            ||                                                 " << std::endl;
	std::cout << "                            ||                                                 " << std::endl;
	std::cout << "                            ||                                                 " << std::endl;
	std::cout << "                           //\\\\                                              " << std::endl;
	std::cout << "                          //  \\\\                                             " << std::endl;
	std::cout << "                         //    \\\\                                            " << std::endl;
	std::cout << "                        //      \\\\                                           " << std::endl;
	std::cout << "                       //        \\\\                                          " << std::endl;
	std::cout << "                      //          \\\\                                         " << std::endl;
	std::cout << "                                                                               " << std::endl;
	std::cout << "               Press ";
	game_utility::change_foreground_color(foreground::RXXD);
	std::cout << "ENTER";
	game_utility::change_foreground_color(foreground::RGBD);
	std::cout << " to continue or any other key to exit!               " << std::endl;
	std::cout << "                                                                               " << std::endl;

	game_utility::cursor_fill_level(25);

	do
	{
		if (_kbhit())
		{
			if (game_utility::get_key() != ENTER_KEY)
			{
				return 0;
			}
			return 1;
		}
	} while (true);

	return 1;
}

void game_drawings::outro()
{
	game_utility::cursor_fill_level(0);

	std::cout << "                                                                               " << std::endl;
	std::cout << "                                                                               " << std::endl;
	game_utility::change_foreground_color(foreground::RXXD);
	std::cout << "                              H  A  N  G  M  A  N                              " << std::endl;
	game_utility::change_foreground_color(foreground::RGBD);
	std::cout << "                             _____________________                             " << std::endl;
	std::cout << "                            |---------------------|                            " << std::endl;
	std::cout << "                            ||  //                |                            " << std::endl;
	std::cout << "                            || //                 |                            " << std::endl;
	std::cout << "                            ||//                  |                            " << std::endl;
	std::cout << "                            ||/                   O                            " << std::endl;
	std::cout << "                            ||                   \\|/                          " << std::endl;
	std::cout << "                            ||                    |                            " << std::endl;
	std::cout << "                            ||                   / \\                          " << std::endl;
	std::cout << "                            ||                                                 " << std::endl;
	std::cout << "                            ||                                                 " << std::endl;
	std::cout << "                            ||                                                 " << std::endl;
	std::cout << "                            ||                                                 " << std::endl;
	std::cout << "                           //\\\\                                              " << std::endl;
	std::cout << "                          //  \\\\                                             " << std::endl;
	std::cout << "                         //    \\\\                                            " << std::endl;
	std::cout << "                        //      \\\\                                           " << std::endl;
	std::cout << "                       //        \\\\                                          " << std::endl;
	std::cout << "                      //          \\\\                                         " << std::endl;
	std::cout << "                                                                               " << std::endl;
	game_utility::change_foreground_color(foreground::RXXD);
	std::cout << "                        THANK YOU FOR PLAYING THE GAME!                        " << std::endl;
	game_utility::change_foreground_color(foreground::RGBD);
}

int game_drawings::hangman(int level)
{
	switch (level)
	{
	case 0:
		{
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		break;
		}
	case 1:
		{
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                                                                               " << std::endl;
		std::cout << "                           //\\\\                                              " << std::endl;
		std::cout << "                          //  \\\\                                             " << std::endl;
		std::cout << "                         //    \\\\                                            " << std::endl;
		std::cout << "                        //      \\\\                                           " << std::endl;
		std::cout << "                       //        \\\\                                          " << std::endl;
		std::cout << "                      //          \\\\                                         " << std::endl;
		std::cout << "                                                                               " << std::endl;
		break;
		}
	case 2:
		{
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                           //\\\\                                              " << std::endl;
		std::cout << "                          //  \\\\                                             " << std::endl;
		std::cout << "                         //    \\\\                                            " << std::endl;
		std::cout << "                        //      \\\\                                           " << std::endl;
		std::cout << "                       //        \\\\                                          " << std::endl;
		std::cout << "                      //          \\\\                                         " << std::endl;
		std::cout << "                                                                               " << std::endl;
		break;
		}
	case 3:
		{
		std::cout << "                            ||    //                                           " << std::endl;
		std::cout << "                            ||   //                                            " << std::endl;
		std::cout << "                            ||  //                                             " << std::endl;
		std::cout << "                            || //                                              " << std::endl;
		std::cout << "                            ||//                                               " << std::endl;
		std::cout << "                            ||/                                                " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                           //\\\\                                              " << std::endl;
		std::cout << "                          //  \\\\                                             " << std::endl;
		std::cout << "                         //    \\\\                                            " << std::endl;
		std::cout << "                        //      \\\\                                           " << std::endl;
		std::cout << "                       //        \\\\                                          " << std::endl;
		std::cout << "                      //          \\\\                                         " << std::endl;
		std::cout << "                                                                               " << std::endl;
		break;
		}
	case 4:
		{
		std::cout << "                             ______________________                            " << std::endl;
		std::cout << "                            |---------------------|                            " << std::endl;
		std::cout << "                            ||  //                                             " << std::endl;
		std::cout << "                            || //                                              " << std::endl;
		std::cout << "                            ||//                                               " << std::endl;
		std::cout << "                            ||/                                                " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                           //\\\\                                              " << std::endl;
		std::cout << "                          //  \\\\                                             " << std::endl;
		std::cout << "                         //    \\\\                                            " << std::endl;
		std::cout << "                        //      \\\\                                           " << std::endl;
		std::cout << "                       //        \\\\                                          " << std::endl;
		std::cout << "                      //          \\\\                                         " << std::endl;
		std::cout << "                                                                               " << std::endl;
		break;
		}
	case 5:
		{
		std::cout << "                             _____________________                             " << std::endl;
		std::cout << "                            |---------------------|                            " << std::endl;
		std::cout << "                            ||  //                |                            " << std::endl;
		std::cout << "                            || //                 |                            " << std::endl;
		std::cout << "                            ||//                  |                            " << std::endl;
		std::cout << "                            ||/                                                " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                           //\\\\                                              " << std::endl;
		std::cout << "                          //  \\\\                                             " << std::endl;
		std::cout << "                         //    \\\\                                            " << std::endl;
		std::cout << "                        //      \\\\                                           " << std::endl;
		std::cout << "                       //        \\\\                                          " << std::endl;
		std::cout << "                      //          \\\\                                         " << std::endl;
		std::cout << "                                                                               " << std::endl;
		break;
		}
	case 6:
		{
		std::cout << "                             _____________________                             " << std::endl;
		std::cout << "                            |---------------------|                            " << std::endl;
		std::cout << "                            ||  //                |                            " << std::endl;
		std::cout << "                            || //                 |                            " << std::endl;
		std::cout << "                            ||//                  |                            " << std::endl;
		std::cout << "                            ||/                   O                            " << std::endl;
		std::cout << "                            ||                   \\|/                          " << std::endl;
		std::cout << "                            ||                    |                            " << std::endl;
		std::cout << "                            ||                   / \\                          " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                            ||                                                 " << std::endl;
		std::cout << "                           //\\\\                                              " << std::endl;
		std::cout << "                          //  \\\\                                             " << std::endl;
		std::cout << "                         //    \\\\                                            " << std::endl;
		std::cout << "                        //      \\\\                                           " << std::endl;
		std::cout << "                       //        \\\\                                          " << std::endl;
		std::cout << "                      //          \\\\                                         " << std::endl;
		std::cout << "                                                                               " << std::endl;
		break;
		}
	default:
		{
		break;
		}
	}
	return 1;
}