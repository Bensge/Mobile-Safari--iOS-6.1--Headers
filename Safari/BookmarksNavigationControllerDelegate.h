/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BrowserPanelDelegate.h"


@protocol BookmarksNavigationControllerDelegate <BrowserPanelDelegate>
-(id)browserPanel;
-(void)goToHistoryURL:(id)historyURL;
-(void)goToBookmark:(id)bookmark;
@optional
-(void)bookmarksNavigationControllerDidReload:(id)bookmarksNavigationController;
-(void)bookmarksNavigationControllerReloadDidFail:(id)bookmarksNavigationControllerReload;
-(id)containingBookmarkForNavigationController:(id)navigationController;
@end

