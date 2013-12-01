//
//  DetailViewController.h
//  CorePlot-XmlTest
//
//  Created by tester on 11/30/13.
//  Copyright (c) 2013 Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
