/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLConnectionDelegate.h"
#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURLConnection, NSString, NSMutableData;

__attribute__((visibility("hidden")))
@interface SearchSuggestionManager : NSObject <NSURLConnectionDelegate> {
	id _delegate;
	NSURLConnection* _suggestionConnection;
	NSMutableDictionary* _suggestionCache;
	NSMutableData* _suggestionData;
	NSString* _currentSearchString;
	NSString* _userAgentString;
}
-(id)suggestionStrings;
-(id)suggestionQueryStringForSearchString:(id)searchString;
-(void)dealloc;
-(void)clearCache;
-(BOOL)hasPendingRequest;
-(id)currentSearchString;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(void)stop;
-(void)getSuggestionsForSearchString:(id)searchString;
-(void)_cancelAndReleaseConnectionAndData;
-(id)init;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
@end

