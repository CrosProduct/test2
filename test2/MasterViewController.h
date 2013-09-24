//
//  MasterViewController.h
//  test2
//
//  Created by Stephane Cros on 9/24/13.
//  Copyright (c) 2013 Stephane Cros. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
