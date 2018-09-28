/*
** EPITECH PROJECT, 2018
** CPP_Babel_2018
** File description:
** Button.hpp
*/

#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QFontDatabase>
#include <QApplication>
#include <QRegion>
#include <QRect>
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include "Size.hpp"
#include <QHoverEvent>

#ifndef BUTTON_HPP_
#define BUTTON_HPP_


namespace babel {
	namespace client {

const QString STYLEREDBUTTON = "QPushButton { background-color: #ed1b24;"
    		"font: bold 30px;}"
		"QPushButton:focus {"
		"outline: 0;}"
		"QPushButton:pressed {"
		"background-color: #cd1b24;}";
const QString STYLEGREENBUTTON = "QPushButton { background-color: #3ab54a;"
    		"font: bold 30px;}"
		"QPushButton:focus {"
		"outline: 0;}"
		"QPushButton:pressed {"
		"background-color: #0ab54a}";
const QString STYLEDEFBUTTON = "QPushButton { background-color: #f04c00;"
		"border: none;"
  		"border-radius: 15px;"
		"height:30px;"
		"margin: 10px;"
    		"font: 15px;}"
		"QPushButton:hover {"
		"color: #ffffff;}"
		"QPushButton:pressed {"
		"color: #ffffff;"
		"background-color: #d34200}";
const QString STYLEDEFA = "QPushButton { background-color: #3d3d3d;"
		"border: none;"
		"color: #f04c00;"
    		"font: bold 15px;}"
		"QPushButton:focus {"
		"outline: 0;}"
		"QPushButton:pressed {"
		"color: #d5d5d5}";

class Button : public QPushButton
{
	public:
		Button(const QString &text, const QString style, Size size);
		~Button();

	protected:
	private:
};
	}
}

#endif /* !BUTTON_HPP_ */
