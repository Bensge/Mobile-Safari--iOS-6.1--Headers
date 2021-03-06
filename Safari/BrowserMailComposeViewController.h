/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <MessageUI/MFMailComposeViewController.h>
#import "BrowserPanel.h"
#import "UINavigationControllerDelegate.h"


__attribute__((visibility("hidden")))
@interface BrowserMailComposeViewController : MFMailComposeViewController <BrowserPanel, UINavigationControllerDelegate> {
}
-(BOOL)shouldHideOnSuspend;
-(BOOL)shouldShowButtonBar;
-(BOOL)ignoresPrivateBrowsingStyle;
-(int)pausesPages;
-(int)panelState;
-(int)panelType;
-(void)applicationDidResume;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(id)initWithURL:(id)url mailComposeDelegate:(id)delegate;
@end

