/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLConnectionDelegate.h"
#import "NSURLDownloadDelegate.h"
#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SearchEngineController : NSObject <NSURLConnectionDelegate, NSURLDownloadDelegate> {
	NSMutableArray* searchEngines;
	int defaultSearchEngineIndex;
	NSString* _countryCode;
	NSString* _languageCode;
	NSString* _carrierCountryCode;
	NSString* _carrierName;
	NSString* _carrierNetworkCode;
}
@property(retain, nonatomic) NSString* carrierNetworkCode;
@property(retain, nonatomic) NSString* carrierName;
@property(retain, nonatomic) NSString* carrierCountryCode;
@property(retain, nonatomic) NSString* languageCode;
@property(retain, nonatomic) NSString* countryCode;
+(id)sharedInstance;
-(void)loadSystemProperties;
-(void)setSearchEngineInfoAsDefault:(id)aDefault;
-(void)loadFallbackSearchEngines;
-(void)addSpecialSearchEngines;
-(id)engineInfoForScriptName:(id)scriptName;
-(id)engineInfoFor:(id)aFor;
-(id)existingEngineInfoFor:(id)aFor;
-(id)defaultSearchEngine;
-(void)setDefaultSearchEngine:(id)engine;
-(void)readDefaultSearchEngine;
-(id)description;
-(void)parseConfigData:(id)data;
-(BOOL)loadLocalConfigPlist:(id)plist;
-(void)downloadRemoteConfigPlist;
-(void)downloadDidFail:(id)download;
-(void)downloadDidFinish:(id)download;
-(BOOL)shouldLoadRemoteConfigPlist;
-(void)loadConfigPlist;
-(void)dealloc;
-(void)reloadSearchEngines;
-(void)populateSearchEngines;
-(id)init;
@end

