/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <UIKit/UIControl.h>

@class TabSnapshot;

__attribute__((visibility("hidden")))
@interface ThumbnailImageView : UIControl {
	TabSnapshot* _snapshot;
	BOOL _shouldAnimateContentsChange;
}
-(id)snapshot;
-(void)setSnapshot:(id)snapshot animated:(BOOL)animated;
-(id)actionForLayer:(id)layer forKey:(id)key;
-(void)layoutSubviews;
-(CGRect)_scaledWebPageSnapshotRect;
-(void)dealloc;
@end

