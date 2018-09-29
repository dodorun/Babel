//
// EPITECH PROJECT, 2018
// CPP_babel_2018
// File description:
// MainPage.hpp
//

#ifndef CPP_BABEL_2018_MAINPAGE_HPP
#define CPP_BABEL_2018_MAINPAGE_HPP

#include <src/client/gui/components/Button.hpp>
#include <src/client/gui/components/Label.hpp>
#include <src/client/gui/components/ListWidget.hpp>
#include <src/client/ClientInfo.hpp>
#include <QtNetwork/QNetworkInterface>
#include <QtNetwork/QHostInfo>
#include <QtNetwork/QNetworkDatagram>
#include <QtNetwork/QHostAddress>
#include <QtNetwork/QUdpSocket>
#include "ConnectionPage.hpp"
#include "ABabelPage.hpp"

namespace babel {
	namespace client {
		class MainPage : public ABabelPage
		{
		public:
			explicit MainPage(client::ClientInfo &_infos);
			void initSocket();
			void readData();
		private:
			QUdpSocket _udpSocket;
			Button *_sender;
		    enum QGroupeBoxType {
			CONTACT,
			MAIN
		    	};
		    enum WidgetType {
		        FAVORITE,
		        SERVER,
		        NAME
		    	};
		    	//std::array<std::unique_ptr<Button>, 2> _buttons;
		    	std::array<std::unique_ptr<Label>, 3> _label;
		    	//std::array<std::unique_ptr<Input>, 4> _inputs;
		    	std::array<std::unique_ptr<QGroupBox>, 2> _container;
		    	std::array<std::unique_ptr<ListWidget>, 2> _list;
		    	std::unique_ptr<Image> _logo;
		    void sendData();
		protected:
			void connections() override;
		};

	}
}


#endif /* CPP_BABEL_2018_MAINPAGE_HPP */