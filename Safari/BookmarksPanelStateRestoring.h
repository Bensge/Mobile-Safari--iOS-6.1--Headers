/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class NSString;

@protocol BookmarksPanelStateRestoring <NSObject>
@property(readonly, assign, nonatomic) NSString* collectionType;
-(void)restoreScrollPosition:(float)position;
-(float)currentScrollPosition;
-(BOOL)restoreStateWithDictionary:(id)dictionary;
-(id)currentStateDictionary;
@end

