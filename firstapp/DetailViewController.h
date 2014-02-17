//
//  DetailViewController.h
//  firstapp
//
//  Created by Nagesh on 2/17/14.
//  Copyright (c) 2014 nagesh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
