//
//  CategoryHeaderTableViewCell.h
//  Channel
//
//  Created by Savalas Colbert on 6/24/17.
//  Copyright © 2017 tapReplay. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Category;

@interface CategoryHeaderTableViewCell : UITableViewCell
    -(void)configureCellWithCategory:(Category *)thCategory;
    +(NSString*)getReuseIdentifier;
@end
