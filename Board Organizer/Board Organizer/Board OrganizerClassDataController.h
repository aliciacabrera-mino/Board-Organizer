//
//  Board OrganizerClassDataController.h
//  Board Organizer
//
//  Created by Alex on 3/15/13.
//  Copyright (c) 2013 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Board_OrganizerTopicDataController;

@interface Board_OrganizerClassDataController : NSObject

@property (nonatomic, copy) NSString *className;
@property (nonatomic, copy) NSMutableArray *topicList;

-(NSUInteger) countOfTopicList;

-(Board_OrganizerTopicDataController *) objectInTopicListAtIndex:(NSUInteger)index;

-(void) addClassWithName;

@end
