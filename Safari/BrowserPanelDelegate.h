/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol BrowserPanelDelegate <NSObject>
-(void)closeBrowserPanel:(id)panel;
-(void)browserPanel:(id)panel didChangeState:(int)state;
-(void)didHideBrowserPanel:(id)panel;
-(void)willHideBrowserPanel:(id)panel;
-(void)didShowBrowserPanel:(id)panel;
-(void)willShowBrowserPanel:(id)panel;
@end

