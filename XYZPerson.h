//
//  XYZPerson.h
//  objectiveC
//
//  Created by Marc van 't Hooft on 19-01-14.
//  Copyright (c) 2014 Epesi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZPerson : NSObject

@property NSString *firstName;
@property NSString *lastName;
@property NSDate *dateOfBirth;

- (void)sayHello;
+ (id)person;

@end
