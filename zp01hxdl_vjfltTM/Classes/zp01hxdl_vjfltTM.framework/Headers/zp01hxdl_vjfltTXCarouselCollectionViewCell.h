//
//  TXCustomCollectionViewCell.h
//  slidetext
//
//  Created by 新华龙mac on 2018/1/16.
//  Copyright © 2018年 新华龙mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "zp01hxdl_vjfltTXCarouselCellModel.h"
@interface zp01hxdl_vjfltTXCarouselCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIView *containerView;
@property (weak, nonatomic) IBOutlet UIImageView *imgView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;


-(void)setCarouselCellModel:(zp01hxdl_vjfltTXCarouselCellModel *)model;

@property(nonatomic,copy)void(^block)(void);

@end
