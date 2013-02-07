/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString, SearchEngineInfo;

__attribute__((visibility("hidden")))
@interface SearchQueryBuilder : NSObject {
	NSString* queryString;
	SearchEngineInfo* engineInfo;
}
+(id)searchQueryBuilderWithXWebSearchURL:(id)xwebSearchURL;
+(id)searchQueryBuilderWithQuery:(id)query;
-(id)searchEngineInfo;
-(BOOL)searchEngineIsDefault;
-(id)queryString;
-(id)searchURL;
-(id)initWithXWebSearchURL:(id)xwebSearchURL;
-(void)dealloc;
-(id)initWithQueryString:(id)queryString;
-(id)initWithSearchEngineInfo:(id)searchEngineInfo queryString:(id)string;
@end

