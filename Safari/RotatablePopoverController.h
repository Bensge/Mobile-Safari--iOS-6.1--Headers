/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <UIKit/UIPopoverController.h>

@class UIView;
@protocol RotatablePopoverControllerDelegate;

__attribute__((visibility("hidden")))
@interface RotatablePopoverController : UIPopoverController {
	CGRect _presentationRect;
	UIView* _presentationView;
	unsigned _permittedArrowDirections;
	BOOL _supportsRotation;
}
@property(assign, nonatomic) BOOL supportsRotation;
@property(assign, nonatomic) unsigned permittedArrowDirections;
@property(retain, nonatomic) UIView* presentationView;
@property(assign, nonatomic) CGRect presentationRect;
@property(assign, nonatomic) id<RotatablePopoverControllerDelegate> delegate;
-(void)presentPopoverAnimated:(BOOL)animated;
-(void)dealloc;
-(id)initWithContentViewController:(id)contentViewController;
@end

