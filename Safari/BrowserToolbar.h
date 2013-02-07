/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WebBookmarksClientDelegateProtocol.h"
#import "MobileSafari-Structs.h"
#import <UIKit/UIToolbar.h>

@class NSArray, BookmarksToolbarButton, TabToolbarButton, SpacedBarButtonItem, UIImageView, UILongPressGestureRecognizer, CALayer, WebBookmarksServerProxy;
@protocol BrowserToolbarDelegate, BrowserPanel;

__attribute__((visibility("hidden")))
@interface BrowserToolbar : UIToolbar <WebBookmarksClientDelegateProtocol> {
	id<BrowserPanel> _browserPanel;
	NSArray* _defaultToolbarItems;
	SpacedBarButtonItem* _backItem;
	SpacedBarButtonItem* _forwardItem;
	SpacedBarButtonItem* _actionItem;
	SpacedBarButtonItem* _bookmarksItem;
	SpacedBarButtonItem* _cloudTabsItem;
	SpacedBarButtonItem* _tabExposeItem;
	SpacedBarButtonItem* _fullscreenItem;
	BOOL _showingCloudTabButton;
	TabToolbarButton* _tabExposeView;
	BookmarksToolbarButton* _bookmarksView;
	UILongPressGestureRecognizer* _backLongPressRecognizer;
	UILongPressGestureRecognizer* _forwardLongPressRecognizer;
	CALayer* _linkImageContainerLayer;
	WebBookmarksServerProxy* _webBookmarksServerProxy;
	SpacedBarButtonItem* _bookmarksReadingListProgressItem;
	UIImageView* _bookmarksItemPreviousContentsView;
	id<BrowserToolbarDelegate> _browserDelegate;
}
@property(assign, nonatomic) BOOL showingCloudTabButton;
@property(assign, nonatomic) id<BrowserToolbarDelegate> browserDelegate;
-(void)setUsesPrivateBrowsingStyle:(BOOL)style;
-(void)setTabExposeButtonIndicator:(unsigned)indicator;
-(void)setActionEnabled:(BOOL)enabled;
-(void)setForwardEnabled:(BOOL)enabled;
-(void)setBackEnabled:(BOOL)enabled;
-(void)bookmarksServerProxy:(id)proxy didUpdateReadingListFetchingProgress:(id)progress;
-(void)bookmarksServerProxyConnectionInvalidated:(id)invalidated;
-(void)bookmarksServerProxyDidFinishFetching:(id)bookmarksServerProxy;
-(void)_disconnectWebBookmarksServerProxy;
-(void)_connectWebBookmarksServerProxy;
-(void)updateButtonsAnimated:(BOOL)animated;
-(void)_updateDefaultToolbarItems;
-(void)_installGestureRecognizers;
-(void)_backLongPressRecognized;
-(void)_forwardLongPressRecognized;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)setBounds:(CGRect)bounds;
-(void)setFrame:(CGRect)frame;
-(void)setBrowserPanel:(id)panel animate:(BOOL)animate;
-(void)dealloc;
-(id)_bookmarksItemLayer;
-(id)_tabExposeItemLayer;
-(id)initWithFrame:(CGRect)frame;
-(void)_bookmarksButtonPressed;
-(void)_tabExposeButtonPressed;
-(id)_defaultSpacedItems;
-(CGRect)cloudTabsPopoverPresentationRect;
-(CGRect)bookmarksPopoverPresentationRect;
-(CGRect)actionPopoverPresentationRect;
-(CGRect)forwardPopoverPresentationRect;
-(CGRect)backPopoverPresentationRect;
-(void)_updateBookmarksItemBounds;
-(void)_updateTabExposeItemBounds;
-(void)_updateFixedSpacing;
-(void)_createFullScreenItemIfNeeded;
-(void)cancelLinkAnimations;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)animateLinkImage:(CGImageRef)image flipped:(BOOL)flipped fromRect:(CGRect)rect toLayer:(id)layer orButton:(int)button inView:(id)view afterLinkImageDisappears:(id)disappears afterButtonBounces:(id)bounces;
-(id)_pulseAnimationWithInitalTransform:(CATransform3D)initalTransform;
-(id)_bounceAnimationWithInitalTransform:(CATransform3D)initalTransform;
-(id)_toolbarItemAnimationTemplate;
-(id)_layerForButton:(int)button;
-(id)_fadeOutAnimation;
-(id)_scalingAnimationToFitLayerWithSize:(CGSize)size intoItemWithSize:(CGSize)size2 startingFromTransform:(CATransform3D)transform;
-(id)_slightRotationAnimationStartingFromTransform:(CATransform3D)transform withRelativeAngle:(float)relativeAngle;
-(id)_ballisticMovementAnimationFromPoint:(CGPoint)point throughPoint:(CGPoint)point2 toPoint:(CGPoint)point3;
@end

