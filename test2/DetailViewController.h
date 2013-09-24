//
//  DetailViewController.h
//  test2
//
//  Created by Stephane Cros on 9/24/13.
//  Copyright (c) 2013 Stephane Cros. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
