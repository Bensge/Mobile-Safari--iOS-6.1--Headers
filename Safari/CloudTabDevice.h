/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSDate;

__attribute__((visibility("hidden")))
@interface CloudTabDevice : NSObject {
	NSString* _name;
	NSString* _UUID;
	NSArray* _tabs;
	NSDate* _lastModified;
}
@property(readonly, assign, nonatomic) NSDate* lastModified;
@property(readonly, assign, nonatomic) NSArray* tabs;
@property(readonly, assign, nonatomic) NSString* UUID;
@property(readonly, assign, nonatomic) NSString* name;
-(id)description;
-(void)dealloc;
-(id)_initWithDictionary:(id)dictionary UUID:(id)uuid;
@end

