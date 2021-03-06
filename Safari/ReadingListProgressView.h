/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <UIKit/UIButton.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface ReadingListProgressView : UIButton {
	double _progress;
	BOOL _usesSmallVersion;
	UIImageView* _glasses;
	UIImageView* _track;
	UIImageView* _fill;
}
@property(assign, nonatomic) BOOL usesSmallVersion;
@property(assign, nonatomic) double progress;
-(CGPoint)pressFeedbackPosition;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)dealloc;
-(void)setToolbarTintColor:(id)color;
-(id)initWithFrame:(CGRect)frame usesSmallVersion:(BOOL)version;
@end

