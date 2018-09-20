//
// EPITECH PROJECT, 2018
// CPP_babel_2018 - Server.hpp
// File description:
// Created by Gregory EPLE
//

#ifndef CPP_BABEL_2018_SERVER_HPP
#define CPP_BABEL_2018_SERVER_HPP

#include <vector>
#include <algorithm>
#include <src/common/User.hpp>

namespace babel {
	namespace server {
		class Server {
		public:
			Server();
			void addClient(common::User user);
			void removeClient(common::User user);

		private:
			std::vector<common::User> _clients;
		};
	}
}


#endif //CPP_BABEL_2018_SERVER_HPP