/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <UIKit/UIButton.h>


__attribute__((visibility("hidden")))
@interface TabToolbarButton : UIButton {
	CGRect _hitRect;
	BOOL _usesPrivateBrowsingStyle;
	BOOL _usesSmallVersion;
	unsigned _tabCount;
}
@property(assign, nonatomic) unsigned tabCount;
@property(assign, nonatomic) BOOL usesSmallVersion;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(CGRect)_buttonBarHitRect;
-(void)_setButtonBarHitRect:(CGRect)rect;
-(void)drawRect:(CGRect)rect;
@end

