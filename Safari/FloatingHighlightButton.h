/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIButton.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface FloatingHighlightButton : UIButton {
	UIImageView* _highlightView;
	BOOL _showsTouchWhenHighlighted;
}
-(void)dealloc;
-(BOOL)showsTouchWhenHighlighted;
-(void)setShowsTouchWhenHighlighted:(BOOL)highlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(void)willMoveToSuperview:(id)superview;
@end

