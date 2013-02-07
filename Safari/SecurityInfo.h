/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface SecurityInfo : NSObject {
	NSURL* url;
	int urlSecurityAssessment;
	int urlSecurityProvider;
	BOOL hasWarnedUser;
}
-(void)setURLSecurityProvider:(int)provider;
-(int)urlSecurityProvider;
-(void)setHasWarnedUser:(BOOL)user;
-(BOOL)hasWarnedUser;
-(BOOL)isKnownToBeUnsafe;
-(void)setURLSecurityAssessment:(int)assessment;
-(int)urlSecurityAssessment;
-(void)setAssessedURL:(id)url;
-(id)assessedURL;
-(id)description;
-(void)dealloc;
@end
