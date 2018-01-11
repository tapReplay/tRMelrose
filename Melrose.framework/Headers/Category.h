//
//  Category.h
//  Channel
//
//  Created by Savalas Colbert on 6/12/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Category : NSObject
   @property (nonatomic, strong) NSNumber * cc_id;
   @property (nonatomic, strong) NSString * cc_name;
   @property (nonatomic, strong) NSString * img_url;
   @property (nonatomic, strong) NSArray  * channel_videos;
   @property (nonatomic, strong) NSString * tsCreated;
   @property (nonatomic, strong) NSString * tsUpdated;

   -(id)initWithJSON:(id)json;
@end
