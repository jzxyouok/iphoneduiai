//
//  FeedListCell.h
//  iphoneduiai
//
//  Created by yinliping on 12-10-28.
//  Copyright (c) 2012年 duiai.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AsyncImageView.h"
@interface FeedListCell : UITableViewCell
@property(strong,nonatomic)UIImageView *arrowImgView;
@property(strong,nonatomic)AsyncImageView *headImgView;
@property(strong,nonatomic)UILabel* titleLabel,*contentLabel;
@property(strong,nonatomic)UIView *backgroundView,*selectedBackgroundView;

@end
