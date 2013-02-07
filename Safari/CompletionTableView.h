/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <UIKit/UITableView.h>

@class UITableViewHeaderFooterView;

__attribute__((visibility("hidden")))
@interface CompletionTableView : UITableView {
	UITableViewHeaderFooterView* _findOnPageHeader;
	float _keyboardOverlap;
	BOOL _specialHeadersEnabled;
}
-(void)setBounds:(CGRect)bounds;
-(void)setFindOnPageHeaderTitle:(id)title;
-(void)setSpecialHeadersEnabled:(BOOL)enabled;
-(void)updateKeyboardOverlap:(float)overlap animated:(BOOL)animated;
-(void)_updateHeaderFrames;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame style:(int)style;
@end

