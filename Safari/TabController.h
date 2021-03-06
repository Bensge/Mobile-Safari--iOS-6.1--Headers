/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TabOverflowListControllerDelegate.h"
#import <Foundation/NSObject.h>
#import "MobileSafari-Structs.h"
#import "RotatablePopoverControllerDelegate.h"
#import "RecentlyClosedTabViewControllerDelegate.h"
#import "TabExposeDelegate.h"
#import "TabBarDelegate.h"

@class PagedTabExposeView, NSMutableArray, TabDocument, NSArray, NSTimer, RecentlyClosedTabViewController, TabBar;

__attribute__((visibility("hidden")))
@interface TabController : NSObject <RecentlyClosedTabViewControllerDelegate, RotatablePopoverControllerDelegate, TabExposeDelegate, TabBarDelegate, TabOverflowListControllerDelegate> {
	NSTimer* _thumbnailUpdateTimer;
	RecentlyClosedTabViewController* _recentlyClosedTabController;
	BOOL _tabBarItemsFixed;
	NSMutableArray* _tabDocuments;
	TabDocument* _topOfRightRotor;
	NSRange _visibleTabRange;
	TabDocument* _activeTabDocument;
	TabBar* _tabBar;
	BOOL _tabExposeButtonIndicatorExcludesBlankDocuments;
	PagedTabExposeView* _tabExposeView;
}
@property(readonly, assign, nonatomic) PagedTabExposeView* tabExposeView;
@property(assign, nonatomic) BOOL tabExposeButtonIndicatorExcludesBlankDocuments;
@property(assign, nonatomic) BOOL usesTabBar;
@property(readonly, assign, nonatomic) TabBar* tabBar;
@property(retain, nonatomic) TabDocument* activeTabDocument;
@property(readonly, assign, nonatomic) NSArray* tabDocuments;
-(void)tabOverflowListController:(id)controller didSelectTabDocument:(id)document;
-(void)_presentOverflowListController;
-(void)_rotateDocumentIntoView:(id)view;
-(void)_moveLeftStackDocumentIntoRightRotor:(id)rotor;
-(void)_adjustOverflowForDocumentToBeRemoved:(id)beRemoved willFocusPreviousDocument:(BOOL)document;
-(void)_adjustOverflowForInsertedDocument:(id)insertedDocument;
-(BOOL)_isDocumentInLeftStack:(id)leftStack;
-(id)_nextDocumentInRotorAfter:(id)rotorAfter;
-(void)_adjustTopOfRightRotor;
-(void)_rotateRightRotorDocumentIntoView:(id)view;
-(BOOL)_isDocumentInRightRotor:(id)rightRotor;
-(BOOL)_isOverflowing;
-(void)setupTabExposeViewIfNeeded;
-(void)updateTabExposeButtonIndicator;
-(void)tabExposeView:(id)view didHideWithActiveTabDocument:(id)activeTabDocument;
-(void)tabExposeView:(id)view closeTabDocument:(id)document;
-(void)tabExposeViewDidShow:(id)tabExposeView;
-(void)tabExposeViewWillHide:(id)tabExposeView;
-(void)tabExposeView:(id)view willShowAboveView:(id)view2;
-(void)tabExposeView:(id)view activateTabDocument:(id)document;
-(BOOL)tabExposeViewCanAddTab:(id)tab;
-(void)tabExposeViewAddTab:(id)tab;
-(void)updateTabBarAnimated:(BOOL)animated;
-(void)updateTabBarAnimated:(BOOL)animated completion:(id)completion;
-(void)updateVisibleTabs;
-(void)recentlyClosedTabViewController:(id)controller didSelectTabDocument:(id)document;
-(void)tabBar:(id)bar activateItem:(id)item;
-(void)tabBar:(id)bar closeItem:(id)item;
-(void)tabBar:(id)bar moveItem:(id)item overItem:(id)item3;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)popoverController:(id)controller willPresentAfterRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)tabBarShowMoreTabs:(id)tabs;
-(void)tabBarAddTabLongPress:(id)press;
-(void)tabBarAddTab:(id)tab;
-(BOOL)tabBar:(id)bar canCloseItem:(id)item;
-(BOOL)tabBar:(id)bar canMoveItem:(id)item;
-(BOOL)tabBarCanAddTab:(id)tab;
-(id)_tabDocumentRepresentedByTabBarItem:(id)item;
-(void)_setTabBarItemsFixed:(BOOL)fixed;
-(void)dealloc;
-(id)init;
-(void)openInitialBlankTabDocumentIfNeeded;
-(void)pausePagesWithEventsForActiveDocument:(BOOL)activeDocument;
-(void)resume;
-(void)suspendForEventsOnly:(BOOL)eventsOnly;
-(id)tabDocumentForURL:(id)url;
-(id)tabDocumentForWebView:(id)webView;
-(void)moveTabDocument:(id)document overTabDocument:(id)document2;
-(void)closeTabDocument:(id)document animated:(BOOL)animated;
-(BOOL)_shouldFocusPreviousDocumentWhenClosingDocument:(id)document;
-(BOOL)_createAndSwitchToNewBlankTabDocumentOpeningCaptiveLandingPageIfNecessary;
-(id)_openBlankTabDocument;
-(id)openTabDocumentFromTabDocument:(id)tabDocument inBackground:(BOOL)background animated:(BOOL)animated;
-(void)_insertTabDocument:(id)document afterTabDocument:(id)document2 inBackground:(BOOL)background animated:(BOOL)animated;
-(void)_makeRoomForNewTabDocument:(id)newTabDocument;
-(id)_oldestInactiveTabDocument;
-(unsigned)maximumTabDocumentCount;
-(void)setActiveTabDocumentForSnapshotting:(id)snapshotting;
-(void)setActiveTabDocument:(id)document animated:(BOOL)animated;
-(void)_setActiveTabDocument:(id)document animated:(BOOL)animated forSnapshotting:(BOOL)snapshotting;
-(BOOL)readStateWithURL:(id)url;
-(void)saveStateInBackground:(BOOL)background;
-(void)updateThumbnailsThatNeedImmediateUpdate;
-(void)removeStaleCachedTabThumbnails;
-(id)_tabWithUUID:(id)uuid;
-(void)setAutoUpdateThumbnails:(BOOL)thumbnails;
-(void)updateTabThumbnails;
-(void)_setThumbnailUpdateTimer:(id)timer;
-(BOOL)updateNextDirtyTabThumbnail;
-(void)_delayedUpdateThumbnailForTabDocument:(id)tabDocument;
-(void)updateCurrentTabThumbnail;
@end

