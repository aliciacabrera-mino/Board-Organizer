//
//  Board_OrganizerDetailViewController.h
//  Board Organizer
//
//  Created by Alex on 3/14/13.
//  Copyright (c) 2013 Alex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Board_OrganizerDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
