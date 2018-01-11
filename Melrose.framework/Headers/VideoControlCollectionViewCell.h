//
//  VideoControlCollectionViewCell.h
//  Channel
//
//  Created by tapReplay Office 2 on 29/06/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Button.h"
@interface VideoControlCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imgButtonControl;
@property (weak, nonatomic) IBOutlet UILabel *lblBtnName;

-(void)configureCellWithButton:(Button *)button andIndexPath:(NSIndexPath *)indexPath andIfListContainVideo:(BOOL)ifListContainVideo;
@end
