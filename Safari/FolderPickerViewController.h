/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PopoverSizingTableViewController.h"

@class WebBookmark, WebBookmarkCollection, NSMutableArray;
@protocol FolderPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface FolderPickerViewController : PopoverSizingTableViewController {
	id<FolderPickerViewControllerDelegate> _delegate;
	WebBookmarkCollection* _collection;
	WebBookmark* movingBookmark;
	WebBookmark* parentBookmark;
	NSMutableArray* _bookmarkFolders;
	int _selectedFolderIndex;
}
@property(retain, nonatomic) WebBookmark* parentBookmark;
@property(retain, nonatomic) WebBookmark* movingBookmark;
-(void)willShowForBookmark:(id)bookmark parent:(id)parent;
-(void)_cancel;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate bookmarkCollection:(id)collection;
-(float)minimumHeightInPopoverView;
-(void)_bookmarksDidReload;
-(void)_bookmarksChanged;
-(id)_bookmarkFolders;
-(void)_appendFolderAndChildren:(id)children toArray:(id)array excludingFolderID:(unsigned)anId;
-(void)_appendFolderAndChildren:(id)children toArray:(id)array excludingFolderID:(unsigned)anId depth:(unsigned)depth;
@end

