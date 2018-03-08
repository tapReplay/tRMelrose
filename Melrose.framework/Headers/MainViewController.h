//
//  MainViewController.h
//  Channel
//
//  Created by Savalas Colbert on 6/12/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface MainViewController : UIViewController{
   Video *playerVideo;
}
@property (nonatomic) UIView *focusedView;

@property(nonatomic,strong)NSString * strAppName;

@end
