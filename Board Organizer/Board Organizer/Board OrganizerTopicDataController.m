//
//  Board OrganizerTopicDataController.m
//  Board Organizer
//
//  Created by Alex on 3/15/13.
//  Copyright (c) 2013 Alex. All rights reserved.
//

#import "Board OrganizerTopicDataController.h"

@implementation Board_OrganizerTopicDataController

-(NSUInteger)countOfList
{
    return [self.topicList count];
}

-(Topic *)objectInListAtIndex:(NSUInteger)index
{
    return [self.topicList objectAtIndex:index];
}

-(void)addTopicWithTopic:(Topic *)topic
{
    [self.topicList addObject:topic];
}

@end