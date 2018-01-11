//
//  Button.h
//  Button
//
//  Created by Savalas Colbert on 6/24/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ButtonState.h"
@interface Button : NSObject
@property (nonatomic, strong) NSString * action;
@property(nonatomic,strong)ButtonState * on;
@property(nonatomic,strong)ButtonState * off;
@property (nonatomic, strong) NSString * name;
-(id)initWithJSON:(id)json;
@end
