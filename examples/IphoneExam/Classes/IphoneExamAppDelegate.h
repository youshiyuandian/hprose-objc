//
//  IphoneExamAppDelegate.h
//  IphoneExam
//
//  Created by Ma Bingyao on Apr 11, 2014.
//  Copyright hprose.com 2014. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Hprose.h"
#import "Exam.h"
#import "RootViewController.h"

@interface IphoneExamAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
    UITabBarController *__weak tabBarController;
    id<Exam> exam;
    HproseClient *client;
    RootViewController *rootViewController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (weak, nonatomic, readonly) IBOutlet UITabBarController *tabBarController;
@property (nonatomic, strong) IBOutlet id<Exam> exam;
@property (nonatomic, strong) IBOutlet HproseClient *client;
@property (nonatomic, strong) RootViewController *rootViewController;

-(IBAction) didEndOnExit:(id)sender;

@end
