/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "NSObject.h"

@class UIWindow;

@protocol UIApplicationDelegate <NSObject>
@optional
@property(retain, nonatomic) UIWindow* window;
-(void)application:(id)application didDecodeRestorableStateWithCoder:(id)coder;
-(void)application:(id)application willEncodeRestorableStateWithCoder:(id)coder;
-(BOOL)application:(id)application shouldRestoreApplicationState:(id)state;
-(BOOL)application:(id)application shouldSaveApplicationState:(id)state;
-(id)application:(id)application viewControllerWithRestorationIdentifierPath:(id)restorationIdentifierPath coder:(id)coder;
-(unsigned)application:(id)application supportedInterfaceOrientationsForWindow:(id)window;
-(void)applicationProtectedDataDidBecomeAvailable:(id)applicationProtectedData;
-(void)applicationProtectedDataWillBecomeUnavailable:(id)applicationProtectedData;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)application:(id)application didReceiveLocalNotification:(id)notification;
-(void)application:(id)application didReceiveRemoteNotification:(id)notification;
-(void)application:(id)application didFailToRegisterForRemoteNotificationsWithError:(id)error;
-(void)application:(id)application didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;
-(void)application:(id)application didChangeStatusBarFrame:(CGRect)frame;
-(void)application:(id)application willChangeStatusBarFrame:(CGRect)frame;
-(void)application:(id)application didChangeStatusBarOrientation:(int)orientation;
-(void)application:(id)application willChangeStatusBarOrientation:(int)orientation duration:(double)duration;
-(void)applicationSignificantTimeChange:(id)change;
-(void)applicationWillTerminate:(id)application;
-(void)applicationDidReceiveMemoryWarning:(id)application;
-(BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
-(BOOL)application:(id)application handleOpenURL:(id)url;
-(void)applicationWillResignActive:(id)application;
-(void)applicationDidBecomeActive:(id)application;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
-(BOOL)application:(id)application willFinishLaunchingWithOptions:(id)options;
-(void)applicationDidFinishLaunching:(id)application;
@end

