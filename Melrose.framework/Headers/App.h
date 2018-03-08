//
//  App.h
//  Channel
//
//  Created by Savalas Colbert on 6/24/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Channel;
@class AppDesign;

@interface App : NSObject
    @property (nonatomic, strong) NSNumber * ca_id;
    @property (nonatomic, strong) NSString * channel_id;
    @property (nonatomic, strong) NSString * ca_name;
    @property (nonatomic, strong) NSString * ca_info;
    @property (nonatomic, strong) NSNumber * ca_type;
    @property (nonatomic, strong) NSNumber * user_id;
    @property (nonatomic, strong) Channel  * channel;
    @property (nonatomic, strong) AppDesign * app_design;
    @property (nonatomic, strong) NSArray  * channel_categories;
    @property (nonatomic, strong) NSString * tsCreated;
    @property (nonatomic, strong) NSString * tsUpdated;
    @property (nonatomic, strong) NSString * appIcon;

    -(id)initWithJSON:(id)json;
@end
