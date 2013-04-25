//
//  NSManagedObject+RACFetch.h
//  ReactiveCoreData
//
//  Created by Jacob Gorban on 25/04/2013.
//  Copyright (c) 2013 Apparent Software. All rights reserved.
//

#import <CoreData/CoreData.h>

@class RACSignal;

@interface NSManagedObject (RACFetch)

+ (RACSignal *)fetchEntity:(NSString *)entityName;

@end