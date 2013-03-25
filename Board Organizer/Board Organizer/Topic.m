//
//  Topic.m
//  Board Organizer
//
//  Created by Alex.Tong on 3/17/13.
//  Copyright (c) 2013 Alex. All rights reserved.
//

#import "Topic.h"

@implementation Topic


-(id) initWithName:(NSString *)name Date:(NSDate *)date Image:(UIImage *)image
{
    self = [super init];
    if(self)
    {
        _topicName = name;
        _date = date;
        _image = image;
        return self;
    }
    return nil;
}

@synthesize additionalNotes;

@end
