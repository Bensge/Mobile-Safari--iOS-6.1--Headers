/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TestProcessor.h"


__attribute__((visibility("hidden")))
@interface ScaleTestProcessor : TestProcessor {
	float _scale;
	BOOL _rendering;
}
-(void)doneRendering;
-(void)setZoomScale:(float)scale;
-(BOOL)performActionForTimer;
@end

