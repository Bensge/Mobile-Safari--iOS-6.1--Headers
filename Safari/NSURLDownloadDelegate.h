/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol NSURLDownloadDelegate <NSObject>
@optional
-(void)download:(id)download didFailWithError:(id)error;
-(void)downloadDidFinish:(id)download;
-(void)download:(id)download didCreateDestination:(id)destination;
-(void)download:(id)download decideDestinationWithSuggestedFilename:(id)suggestedFilename;
-(BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;
-(void)download:(id)download didReceiveDataOfLength:(unsigned)length;
-(void)download:(id)download willResumeWithResponse:(id)response fromByte:(long long)byte;
-(void)download:(id)download didReceiveResponse:(id)response;
-(BOOL)downloadShouldUseCredentialStorage:(id)download;
-(void)download:(id)download didCancelAuthenticationChallenge:(id)challenge;
-(void)download:(id)download didReceiveAuthenticationChallenge:(id)challenge;
-(BOOL)download:(id)download canAuthenticateAgainstProtectionSpace:(id)space;
-(id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;
-(void)downloadDidBegin:(id)download;
@end

