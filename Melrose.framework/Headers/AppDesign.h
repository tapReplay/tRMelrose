//
//  AppDesign.h
//  Channel
//
//  Created by Savalas Colbert on 6/24/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppDesign : NSObject
    @property (nonatomic, strong) NSNumber * cad_id;
    @property (nonatomic, strong) NSNumber * ca_id;
    @property (nonatomic, strong) NSString * cad_primary_color;
    @property (nonatomic, strong) NSString * cad_secondary_color;
    @property (nonatomic, strong) NSNumber * cad_status;
    @property (nonatomic, strong) NSNumber * user_id;
    @property (nonatomic, strong) NSString * tsCreated;
    @property (nonatomic, strong) NSString * tsUpdated;
    @property (nonatomic, strong) NSArray * buttons;

    -(id)initWithJSON:(id)json;
@end
