//
//  Board OrganizerClassDataController.m
//  Board Organizer
//
//  Created by Alex on 3/15/13.
//  Copyright (c) 2013 Alex. All rights reserved.
//

#import "Board OrganizerClassDataController.h"

@implementation Board_OrganizerClassDataController

-(NSUInteger) countOfClassList
{
    return [self.classList count];
}

-(Board_OrganizerTopicDataController *) objectInClassListAtIndex:(NSUInteger)index
{
    return [self.classList objectAtIndex:index];
}

-(void) addClassWithClass:(Board_OrganizerTopicDataController*)Class
{
    [self.classList addObject:Class];
}


@end
