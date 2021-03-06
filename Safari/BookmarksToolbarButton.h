/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <UIKit/UIButton.h>

@class ReadingListProgressView, NSMutableArray, MSFlipAnimation, UIView, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface BookmarksToolbarButton : UIButton {
	ReadingListProgressView* _readingListProgressView;
	MSFlipAnimation* _currentFlipAnimation;
	UIBarButtonItem* _barButtonItem;
	UIView* _bookmarksIconView;
	NSMutableArray* _flipAnimations;
	BOOL _usesSmallVersion;
}
@property(assign, nonatomic) BOOL usesSmallVersion;
-(void)_flipToReadingListProgressView:(BOOL)readingListProgressView;
-(void)_flipToProgressViewDidFinish:(id)_flipToProgressView;
-(void)_flipFromReadingListProgressView:(BOOL)readingListProgressView;
-(void)_flipFromProgressViewDidFinish:(id)_flipFromProgressView;
-(void)_startNextFlipAnimationWithDelay:(BOOL)delay;
-(void)_stopTrackingAnimation:(id)animation;
-(void)_beginTrackingAnimation:(id)animation;
-(void)setUsesPrivateBrowsingStyle:(BOOL)style;
-(void)setProgressViewProgress:(double)progress;
-(void)showProgressView:(BOOL)view animated:(BOOL)animated;
-(BOOL)isShowingProgressView;
-(void)layoutSubviews;
-(void)_updateBookmarkIconView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

