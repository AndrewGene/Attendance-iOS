//
//  DetailViewController.h
//  Attendance
//
//  Created by Andrew Goodwin on 9/4/14.
//  Copyright (c) 2014 Andrew Goodwin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
