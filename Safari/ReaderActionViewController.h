/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>

@protocol ReaderActionDelegate;

__attribute__((visibility("hidden")))
@interface ReaderActionViewController : UIViewController {
	id<ReaderActionDelegate> _actionDelegate;
}
-(void)loadView;
-(id)initWithActionDelegate:(id)actionDelegate;
@end

