/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <UIKit/UIControl.h>

@class EllipsedTextViewURLSchemeView, UIColor;

__attribute__((visibility("hidden")))
@interface EllipsedTextView : UIControl {
	id _delegate;
	BOOL _truncatesURLScheme;
	UIColor* _textColor;
	EllipsedTextViewURLSchemeView* _schemeView;
	float _fadeAdjustment;
}
+(float)placeholderWidth;
+(id)placeholderColor;
+(id)placeholderText;
+(id)defaultAddressColor;
+(float)offsetForSchemeInAddressString:(id)addressString;
+(id)urlFont;
-(void)drawRect:(CGRect)rect;
-(id)textColor;
-(void)setTextColor:(id)color;
-(void)setDelegate:(id)delegate;
-(id)schemeView;
-(BOOL)truncatesURLScheme;
-(void)setTruncatesURLScheme:(BOOL)scheme;
-(void)browserControllerDidEndRotating;
-(void)browserControllerDidStartRotating;
-(void)setFadeAdjustment:(float)adjustment;
-(void)setFrame:(CGRect)frame;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

