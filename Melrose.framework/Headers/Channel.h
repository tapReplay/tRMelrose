//
//  Channel.h
//  Channel
//
//  Created by Savalas Colbert on 6/24/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Channel : NSObject
    @property (nonatomic, strong) NSNumber * channel_id;
    @property (nonatomic, strong) NSNumber * client_id;
    @property (nonatomic, strong) NSString * channel_name;
    @property (nonatomic, strong) NSNumber * channel_type;
    @property (nonatomic, strong) NSString * location;
    @property (nonatomic, strong) NSString * bio;
    @property (nonatomic, strong) NSString * img_url;
    @property (nonatomic, strong) NSString * contact_number;
    @property (nonatomic, strong) NSString * tsCreated;
    @property (nonatomic, strong) NSString * tsUpdated;

    -(id)initWithJSON:(id)json;
@end
