//
//  VideoCollectionViewCell.h
//
//  Created by Savalas Colbert on 7/24/16.
//  Copyright © 2016 bumpTrack. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface VideoCollectionViewCell : UICollectionViewCell
   -(void)configureCellWithVideo:(Video *)theVideo;
    -(Video *)video;
    @property (weak, nonatomic) IBOutlet UIImageView *imageView;
   +(NSString*)getReuseIdentifier;

@end
