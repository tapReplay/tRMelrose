//
//  TRChannelMelrose.h
//  Melrose
//
//  Created by tapReplay Office 2 on 08/01/18.
//  Copyright © 2018 tapReplay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/Uikit.h>
@interface TRChannelMelrose : NSObject
- (id)initWithWindow:(UIWindow *)mainWindow  andSecret:(NSString *)secret andToken:(NSString *)token andChannelAppId:(NSNumber *)channelAppId andCid:(NSNumber *)cid andAppName:(NSString *)strAppName;
@end
