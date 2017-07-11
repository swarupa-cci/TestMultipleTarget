//
//  AppDelegate.h
//  TestMultipleTarget
//
//  Created by Swarupa Vengurlekar on 11/07/17.
//  Copyright © 2017 Creative Capsule. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

