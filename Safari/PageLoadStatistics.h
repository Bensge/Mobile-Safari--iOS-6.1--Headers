/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface PageLoadStatistics : NSObject {
	unsigned parseCount;
	unsigned layoutCount;
	unsigned forcedLayoutCount;
	unsigned drawCount;
	unsigned frameCount;
	double parseDuration;
	double layoutDuration;
	double drawDuration;
	double loadDuration;
	double renderDuration;
	double firstVisualLayout;
	float framesPerSecond;
}
-(float)framesPerSecond;
-(double)firstVisualLayout;
-(double)renderDuration;
-(double)loadDuration;
-(double)drawDuration;
-(double)layoutDuration;
-(double)parseDuration;
-(unsigned)frameCount;
-(unsigned)drawCount;
-(unsigned)forcedLayoutCount;
-(unsigned)layoutCount;
-(unsigned)parseCount;
@end

