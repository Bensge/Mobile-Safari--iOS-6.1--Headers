/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface SafariQueryCollectionRequest : PBRequest {
	NSString* _searchQuery;
	BOOL _hasIsPartialSearchQuery;
	BOOL _isPartialSearchQuery;
}
@property(assign, nonatomic) BOOL isPartialSearchQuery;
@property(assign, nonatomic) BOOL hasIsPartialSearchQuery;
@property(retain, nonatomic) NSString* searchQuery;
@property(readonly, assign, nonatomic) BOOL hasSearchQuery;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(void)dealloc;
@end

