/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewController.h>
#import "MobileSafari-Structs.h"

@class UIView;
@protocol UITableViewDataSource, UITableViewDelegate;

__attribute__((visibility("hidden")))
@interface CompletionTableViewController : UITableViewController {
	id<UITableViewDataSource, UITableViewDelegate> _dataSourceAndDelegateForTableView;
	UIView* _targetView;
}
@property(retain, nonatomic) UIView* targetView;
@property(assign, nonatomic) id<UITableViewDataSource, UITableViewDelegate> dataSourceAndDelegateForTableView;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(CGSize)contentSizeForViewInPopoverView;
-(void)dealloc;
@end

