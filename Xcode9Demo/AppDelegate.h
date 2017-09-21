//
//  AppDelegate.h
//  Xcode9Demo
//
//  Created by sll on 2017/9/21.
//  Copyright © 2017年 sll. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

