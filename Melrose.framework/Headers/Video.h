//
//  Video.h
//  Channel
//
//  Created by Savalas Colbert on 6/12/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <Foundation/Foundation.h>
@class VideoVideo;

@interface Video : NSObject
   @property (nonatomic, strong) NSNumber * cv_id;
   @property (nonatomic, strong) NSString * cv_name;
   @property (nonatomic, strong) NSString * cv_info;
   @property (nonatomic, strong) NSString * img_url;
   @property (nonatomic,strong)  NSString * img_url_bg; 
   @property (nonatomic, strong) VideoVideo * video;
   @property (nonatomic, strong) NSNumber * tsCreated;
   @property (nonatomic, strong) NSNumber * tsUpdated;
   @property (nonatomic,strong)  NSNumber * channel_id;
   @property (nonatomic,strong)  NSNumber * tapshelf_status;
   @property(nonatomic,strong)NSString * categoryNames;
   -(id)initWithJSON:(id)json;
@end
