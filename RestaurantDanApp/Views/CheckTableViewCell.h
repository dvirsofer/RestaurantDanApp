//
//  CheckTableViewCell.h
//  RestaurantDanApp
//
//  Created by Or on 6/25/15.
//  Copyright (c) 2015 DvirSofer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CheckTableViewCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UIImageView *foodImage;
@property (nonatomic, strong) IBOutlet UILabel *foodName;
@property (nonatomic, strong) IBOutlet UILabel *foodPrice;
@property (nonatomic, strong) IBOutlet UILabel *foodTarget;

@end
