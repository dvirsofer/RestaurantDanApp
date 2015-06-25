//
//  CheckTableViewCell.m
//  RestaurantDanApp
//
//  Created by Or on 6/25/15.
//  Copyright (c) 2015 DvirSofer. All rights reserved.
//

#import "CheckTableViewCell.h"

@implementation CheckTableViewCell

@synthesize foodImage = _foodImage;
@synthesize foodName = _foodName;
@synthesize foodPrice = _foodPrice;
@synthesize foodTarget = _foodTarget;

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];
    
    // Configure the view for the selected state
}


@end
