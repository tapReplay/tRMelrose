//
//  VideoVideo.h
//  Channel
//
//  Created by Savalas Colbert on 6/28/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VideoVideo : NSObject
    @property (nonatomic, strong) NSNumber * _id;
    @property (nonatomic, strong) NSNumber * video_id;
    @property (nonatomic, strong) NSString * video_url;
    @property (nonatomic, strong) NSString * _description;
    @property (nonatomic, strong) NSString * filename;
    @property (nonatomic, strong) NSNumber * length;
    @property (nonatomic, strong) NSNumber * ranking;
    @property (nonatomic, strong) NSNumber * tsCreated;
    @property (nonatomic, strong) NSNumber * tsUpdated;
    -(id)initWithJSON:(id)json;
@end
