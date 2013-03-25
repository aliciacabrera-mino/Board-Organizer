//
//  Board_OrganizerMasterViewController.h
//  Board Organizer
//
//  Created by Alex on 3/14/13.
//  Copyright (c) 2013 Alex. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Board_OrganizerClassDataController;

@interface Board_OrganizerMasterViewController : UITableViewController

@property (strong, nonatomic) Board_OrganizerClassDataController *dataController;

@end
