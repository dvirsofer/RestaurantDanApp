//
//  CheckTableViewController.h
//  RestaurantDanApp
//
//  Created by Or on 6/25/15.
//  Copyright (c) 2015 DvirSofer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CheckTableViewCell.h"

@interface CheckTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *foodImages;
@property (nonatomic, strong) NSArray *foodNames;
@property (nonatomic, strong) NSArray *foodPrices;
@property (nonatomic, strong) NSArray *foodTargets;

@end
