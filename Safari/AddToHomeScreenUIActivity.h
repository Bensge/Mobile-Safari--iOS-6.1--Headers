/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WebClipDelegate.h"
#import "WebClipViewControllerDelegate.h"
#import <UIKit/UIActivity.h>

@class UIImage, UINavigationController, UIWebClip, WebClipViewController;

__attribute__((visibility("hidden")))
@interface AddToHomeScreenUIActivity : UIActivity <WebClipDelegate, WebClipViewControllerDelegate> {
	UINavigationController* _wrappingNavigationController;
	WebClipViewController* _webClipViewController;
	UIWebClip* _webClip;
	UIImage* _defaultImage;
	UIImage* _image;
	BOOL _waitingForSnapshot;
}
-(void)_updateImageFromActiveTabDocument;
-(void)_setImage:(id)image isPrecomposed:(BOOL)precomposed;
-(void)_createWebClip;
-(void)_notifyUIActivityViewControllerWebClipIconChanged;
-(void)webClip:(id)clip startupLandscapeImageRequestDidFinishWithImage:(id)startupLandscapeImageRequest;
-(void)webClip:(id)clip startupImageRequestDidFinishWithImage:(id)startupImageRequest;
-(void)webClip:(id)clip iconRequestDidFinishWithImage:(id)iconRequest precomposed:(BOOL)precomposed;
-(void)webClipViewController:(id)controller didFinishWithResult:(BOOL)result;
-(BOOL)_canAdjustOrder;
-(void)activityDidFinish:(BOOL)activity;
-(id)_embeddedActivityViewController;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)activityItems;
-(BOOL)canPerformWithActivityItems:(id)activityItems;
-(id)_beforeActivity;
-(id)_activityImage;
-(id)activityTitle;
-(id)activityType;
-(void)dealloc;
-(id)init;
@end

