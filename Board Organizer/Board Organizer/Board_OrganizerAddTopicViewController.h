//
//  Board_OrganizerAddTopicViewController.h
//  Board Organizer
//
//  Created by Alex.Tong on 3/17/13.
//  Copyright (c) 2013 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Topic.h"

@interface Board_OrganizerAddTopicViewController : UITableViewController <UITextFieldDelegate, UITextViewDelegate>

@property (nonatomic) Topic *newTopic;
@property (weak, nonatomic) IBOutlet UITextField *topicInput;
@property (weak, nonatomic) IBOutlet UITextView *additionalNotesInput;

@end
