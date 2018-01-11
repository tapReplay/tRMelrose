//
//  ChannelManager.h
//  Channel
//
//  Created by tapReplay Office 2 on 29/06/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "App.h"
@interface ChannelManager : NSObject
@property (nonatomic,strong)NSString * secret;
@property (nonatomic,strong)NSString * token;
@property (nonatomic,strong)NSNumber * cid;
@property (nonatomic,strong)NSNumber * channelAppId;
+ (id)sharedManager;
@end
