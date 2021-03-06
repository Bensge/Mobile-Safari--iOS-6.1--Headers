/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <Foundation/NSObject.h>

@class WebBookmarkCollection, NSMutableArray, NSMutableDictionary, TIWordTokenizer, NSString;
@protocol URLCompletionListDelegate;

__attribute__((visibility("hidden")))
@interface URLCompletionList : NSObject {
	WebBookmarkCollection* _collection;
	NSMutableArray* _completionList;
	NSMutableDictionary* _completionsByAddress;
	unsigned _maxResults;
	TIWordTokenizer* _titleTokenizer;
	NSObject<URLCompletionListDelegate>* _delegate;
	NSString* _currentPrefix;
	BOOL _prefixWasModified;
	opaque_pthread_mutex_t _prefixMutex;
	opaque_pthread_cond_t _prefixWasModifiedCondition;
}
-(id)completionAtIndex:(unsigned)index;
-(unsigned)completionCount;
-(void)updatePrefix:(id)prefix;
-(void)startGetPrefixLoop;
-(void)_getPrefixLoop;
-(void)_reportDidFinishForPrefix:(id)_report;
-(void)_doUpdateForPrefix:(id)prefix;
-(BOOL)_string:(id)string startsWordInString:(id)string2;
-(void)_addBaseAddressToResultsUnlessExists:(id)resultsUnlessExists;
-(BOOL)_shouldMakeBaseURLForUserTypedString:(id)userTypedString;
-(void)_addHistoryItem:(id)item withAddress:(id)address title:(id)title matchLocation:(int)location isBookmark:(BOOL)bookmark;
-(void)_insertItemIntoSortedCompletionList:(id)list;
-(float)_weightForHistoryItem:(id)historyItem withAddress:(id)address matchLocation:(int)location isBookmark:(BOOL)bookmark;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)initWithBookmarkCollection:(id)bookmarkCollection maxResults:(unsigned)results;
@end

