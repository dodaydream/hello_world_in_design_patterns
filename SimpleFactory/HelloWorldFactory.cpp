#include "HelloWorld.h"

HelloWorld* HelloWorldFactory::createHelloWorld (short lang) {
	switch (lang) {
		case LANG_EN:
			return new HelloWorldEn();
			break;
		case LANG_JP:
			return new HelloWorldJp();
			break;
		case LANG_ZH:
			return new HelloWorldZh();
			break;
		default:
			return new HelloWorldEn();
			break;
	}
}
