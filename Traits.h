/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Traits.h
 * Author: rafael.luiz.cancian
 *
 * Created on 14 de Agosto de 2018, 19:36
 */

#ifndef TRAITS_H
#define TRAITS_H

#include "kernel/util/Util.h"
#include "userInterfaces/terminal/GenesysTerminalApp.h"
#include "userInterfaces/gui/qt/GenesysQtGUI.h"

template <typename T>
struct Traits {
};

/*
 *  Genesys Application
 */

template <> struct Traits<GenesysApplication_if> {
	static const Util::TraceLevel traceLevel = Util::TraceLevel::L8_mostDetailed;
	//typedef GenesysTerminalApp Application;
	typedef GenesysQtGUI Application;
};

#endif /* TRAITS_H */

