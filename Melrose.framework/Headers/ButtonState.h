//
//  ButtonState.h
//  ButtonState
//
//  Created by Savalas Colbert on 6/24/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface ButtonState : NSObject

@property (nonatomic, strong) NSString * imgUrl1;
@property (nonatomic, strong) NSString * imgUrl2;

    -(id)initWithJSON:(id)json;
@end
