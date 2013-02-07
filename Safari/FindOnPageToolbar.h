/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <UIKit/UIInputView.h>
#import "UISearchBarDelegate.h"

@class UISearchBar, UIToolbar, NSTimer, FindOnPageSegmentedControl, UIBarButtonItem, UIActivityIndicatorView, UILabel;
@protocol FindOnPageToolbarDelegate;

__attribute__((visibility("hidden")))
@interface FindOnPageToolbar : UIInputView <UISearchBarDelegate> {
	UIToolbar* _leftToolbar;
	UIToolbar* _rightToolbar;
	FindOnPageSegmentedControl* _previousNextControl;
	UIBarButtonItem* _previousNextControlBarButtonItem;
	UILabel* _currentMatchLabel;
	UIBarButtonItem* _currentMatchBarButtonItem;
	UISearchBar* _inputBar;
	UIBarButtonItem* _inputFieldBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	id<FindOnPageToolbarDelegate> _findDelegate;
	NSTimer* _textChangedUpdateTimer;
	BOOL _ownedByAddressView;
	UIBarButtonItem* _fixedSpaceItem;
	UIActivityIndicatorView* _indicatorView;
	BOOL _useActivityView;
}
@property(assign, nonatomic) BOOL useActivityView;
@property(assign, nonatomic) id<FindOnPageToolbarDelegate> findDelegate;
@property(assign, nonatomic) BOOL ownedByAddressView;
+(id)toolbarWithItems:(id)items;
+(void)releaseSharedToolbar;
+(id)sharedToolbar;
-(void)dealloc;
-(id)inputField;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
-(void)_transitionToFindOnPageMode;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)_doUpdateSearchText;
-(void)_done;
-(void)_previousNextSegmentedControlValueChanged:(id)changed;
-(void)didEndSplitTransition;
-(void)updateUI;
@end

