//
//  Categories.h
//  Channel
//
//  Created by Savalas Colbert on 6/24/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Categories : NSObject
    @property (nonatomic, strong) NSNumber * cc_id;
    @property (nonatomic, strong) NSNumber * channel_id;
    @property (nonatomic, strong) NSString * cc_name;
    @property (nonatomic, strong) NSString * cc_info;
    @property (nonatomic, strong) NSNumber * rule_id;
    @property (nonatomic, strong) NSNumber * user_id;
    @property (nonatomic, strong) NSNumber * update_user_id;
    @property (nonatomic, strong) NSNumber * cc_status;
    @property (nonatomic, strong) NSString * img_url;
    @property (nonatomic, strong) NSArray * channel_videos;
    @property (nonatomic, strong) NSString * tsCreated;
    @property (nonatomic, strong) NSString * tsUpdated;

@end
