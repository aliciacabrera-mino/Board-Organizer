//
//  Topic.h
//  Board Organizer
//
//  Created by Alex.Tong on 3/17/13.
//  Copyright (c) 2013 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Topic : NSObject

@property (nonatomic, copy) NSString *topicName;

@property (nonatomic) NSDate *date;

@property (nonatomic, copy) UIImage *image;

@property (nonatomic, copy) NSString *additionalNotes;

@end
