/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AddBookmarkNavigationControllerDelegate.h"
#import <UIKit/UIActivity.h>

@class AddBookmarkNavigationController;

__attribute__((visibility("hidden")))
@interface AddBookmarkUIActivity : UIActivity <AddBookmarkNavigationControllerDelegate> {
	AddBookmarkNavigationController* _bookmarkNavController;
}
-(void)addBookmarkNavController:(id)controller didFinishWithResult:(BOOL)result;
-(void)activityDidFinish:(BOOL)activity;
-(id)_embeddedActivityViewController;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)activityItems;
-(BOOL)canPerformWithActivityItems:(id)activityItems;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(void)dealloc;
@end
