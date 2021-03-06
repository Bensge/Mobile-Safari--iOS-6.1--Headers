/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <UIKit/UIView.h>
#import "UIGestureRecognizerDelegate.h"

@class NSMutableDictionary, NSArray, UILongPressGestureRecognizer, UIPanGestureRecognizer, NSHashTable, UIButton, UIImage, TabBarItem, TabBarPieceView;
@protocol TabBarDelegate;

__attribute__((visibility("hidden")))
@interface TabBar : UIView <UIGestureRecognizerDelegate> {
	TabBarPieceView* _background;
	UIButton* _addTabButton;
	UILongPressGestureRecognizer* _addTabLongPressRecognizer;
	UIPanGestureRecognizer* _reorderRecognizer;
	CGPoint _reorderOrigin;
	CGPoint _reorderEffectiveTouchLocation;
	TabBarItem* _floatingItem;
	TabBarItem* _sinkingItem;
	BOOL _usesPrivateBrowsingStyle;
	NSMutableDictionary* _pieceImages;
	NSHashTable* _allPieceViews;
	UIImage* _activeTabBackgroundImage;
	float _activeTabBackgroundOffset;
	id<TabBarDelegate> _delegate;
	NSArray* _items;
	BOOL _shouldShowMoreTabsButton;
}
@property(assign, nonatomic) BOOL usesPrivateBrowsingStyle;
@property(assign, nonatomic) float activeTabBackgroundOffset;
@property(retain, nonatomic) UIImage* activeTabBackgroundImage;
@property(assign, nonatomic) BOOL shouldShowMoreTabsButton;
@property(copy, nonatomic) NSArray* items;
@property(assign, nonatomic) id<TabBarDelegate> delegate;
-(void)dealloc;
-(void)_item:(id)item didUpdateFromTitle:(id)title toTitle:(id)title3;
-(unsigned)_maximumTruncationIndexForTitle:(id)title;
-(CGRect)moreTabsPopoverPresentationRect;
-(CGRect)addTabPopoverPresentationRect;
-(void)reorder:(id)reorder;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)_finishReorderingAnimated:(BOOL)animated;
-(void)_beginReorderingItem:(id)item;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(id)_itemForTouch:(id)touch;
-(id)_itemAtLocation:(CGPoint)location;
-(void)setItems:(id)items animated:(BOOL)animated;
-(void)setItems:(id)items animated:(BOOL)animated completion:(id)completion;
-(void)_prepareForNewItems:(id)newItems;
-(void)setFrame:(CGRect)frame;
-(void)setBounds:(CGRect)bounds;
-(void)_layoutItems;
-(void)_layoutAddTabButton;
-(void)_layoutIndexes:(id)indexes ofItems:(id)items;
-(unsigned)_effectiveIndexForIndex:(unsigned)index ofItems:(id)items;
-(CGRect)_frameForItemAtIndex:(unsigned)index;
-(unsigned)itemCountThatFits;
-(void)_layoutItem:(id)item inRect:(CGRect)rect withPreviousItem:(id)previousItem seenActiveItemYet:(BOOL)yet;
-(void)_itemDidPressMoreTabsButton:(id)_item;
-(void)_itemDidPressCloseButton:(id)_item;
-(void)_addTabLongPressRecognized:(id)recognized;
-(void)_tabButtonPressed;
-(id)initWithFrame:(CGRect)frame;
-(id)_allPieceViews;
-(id)rightEdgeOfType:(id)type;
-(id)leftEdgeOfType:(id)type;
-(id)backgroundOfType:(id)type;
-(void)invalidateAllPieces;
-(void)_invalidateImageForPieceType:(id)pieceType;
-(id)_imageForPieceType:(id)pieceType backgroundPiece:(BOOL)piece;
-(id)_activeTabMaskImage;
-(id)_activeTabBezelImage;
@end

