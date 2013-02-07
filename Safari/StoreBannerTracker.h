/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface StoreBannerTracker : NSObject {
	NSMutableDictionary* _blockedProducts;
	NSObject<OS_dispatch_queue>* _queue;
}
+(id)sharedTracker;
-(void)blockProductBanner:(id)banner;
-(void)isProductBannerBlocked:(id)blocked completion:(id)completion;
-(void)clear;
-(void)save;
-(void)load;
-(id)filePath;
-(void)dealloc;
-(id)init;
@end

