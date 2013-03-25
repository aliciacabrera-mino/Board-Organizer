//
//  Board OrganizerTopicDataController.h
//  Board Organizer
//
//  Created by Alex on 3/15/13.
//  Copyright (c) 2013 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Topic.h"
@interface Board_OrganizerTopicDataController : NSObject//The Class Object

@property(nonatomic, copy) NSString *className;
@property(nonatomic, copy) NSMutableArray *topicList;

-(NSUInteger)countOfList;
-(Topic *)objectInListAtIndex:(NSUInteger)index;
-(void)addTopicWithTopic:(Topic *)topic;

@end
