/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "NSObject.h"


@protocol ReaderControllerDelegate <NSObject>
-(int)readerOperationMode;
-(BOOL)isShowingReadingListArchive;
@optional
-(id)readerPageArchiveURL;
-(BOOL)networkIsReachable;
-(void)updateReaderView;
-(void)didFinishLoadingReaderPage;
-(void)webFrame:(id)frame didFinishLoadingNextPageNumber:(unsigned)number;
-(void)willCloseReaderWebView:(id)view;
-(void)didClickLinkInReaderWithRequest:(id)request;
-(void)didChangeNextPageLoadingState:(BOOL)state;
-(void)didInitReaderJSController:(ReaderJSController*)controller;
-(void)didDeactivateReaderWithMode:(int)mode;
-(void)didActivateReader;
-(void)willActivateReader;
@end

