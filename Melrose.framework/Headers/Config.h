//
//  Config.h
//  Channel
//
//  Created by Savalas Colbert on 6/12/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#ifndef Config_h
#define Config_h


// Change this url depending on the name of your web hosting.
#define URL_BASE_DEPRECATED @"https://admin.tapreplay.com/channel/channel_app"
#define URL_BASE_STAGE @"https://admin.tapreplay.com/channel/channel_app"
//#define URL_BASE_PROD @"http://admin.tapreplay.com/channel/channel_app"
#define URL_BASE_DEVELOPMENT @"https://admin.tapreplay.com/channel/channel_app"
#define URL_BASE_PROD @"https://member.tapreplay.com/api/channel/channel_app"
#define URL_BASE URL_BASE_PROD

//Helpers
#define CURRENT_IDIOM UI_USER_INTERFACE_IDIOM()

#define IS_IPAD UIUserInterfaceIdiomPad

#define IS_IPHONE UIUserInterfaceIdiomPhone

#define DOES_SUPPORT_IOS6_1_OR_BELOW (floor(NSFoundationVersionNumber) <= NSFoundationVersionNumber_iOS_6_1) ? YES : NO

#define DOES_SUPPORT_IOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7) ? YES : NO

#define LOCALIZED(str) NSLocalizedString(str, nil)

#define LOCALIZED_NOT_NULL(str) NSLocalizedString(str, @"")

#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

#define IS_IPHONE_6_PLUS_AND_ABOVE ( [[UIScreen mainScreen] scale] > 2.1 ) ? YES : NO

#define NULL_TO_NIL(obj) ({ __typeof__ (obj) __obj = (obj); __obj == [NSNull null] ? nil : obj; })





#endif /* Config_h */
