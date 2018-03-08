//
//  VideoDetailViewController.h
//  Channel
//
//  Created by Savalas Colbert on 6/24/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Video.h"
#import "Category.h"

@interface VideoDetailViewController : UIViewController
    @property (nonatomic, strong) Video * thisVideo;
    @property (nonatomic, strong) Category * thisCategory;
    @property (nonatomic, strong) NSArray * arrVideoControllers;
@end
