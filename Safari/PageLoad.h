/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <Foundation/NSObject.h>

@class NSURL, PageLoadStatistics, NSDate;

__attribute__((visibility("hidden")))
@interface PageLoad : NSObject {
	NSURL* URL;
	NSDate* startDate;
	NSDate* endDate;
	NSDate* startRenderDate;
	NSDate* endRenderDate;
	NSDate* startRenderFrameCountDate;
	NSDate* endRenderFrameCountDate;
	long startRenderFrameCount;
	long endRenderFrameCount;
	PageLoadStatistics* statistics;
	int status;
	XXStruct_Eg7cJC heapBefore;
	XXStruct_Eg7cJC heapAfter;
}
+(id)pageLoadWithURL:(id)url;
-(id)description;
-(XXStruct_Eg7cJC)heapDelta;
-(XXStruct_Eg7cJC)heapAfter;
-(XXStruct_Eg7cJC)heapBefore;
-(id)statusString;
-(int)status;
-(void)finishRenderTime:(id)time;
-(void)startRenderTime:(id)time;
-(void)finishRenderFps:(id)fps;
-(void)startRenderFps:(id)fps;
-(void)finish:(id)finish statistics:(id)statistics;
-(void)start:(id)start;
-(id)statistics;
-(id)URL;
-(void)clear;
-(void)dealloc;
-(id)initWithURL:(id)url;
@end
