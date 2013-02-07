/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "QLContentView.h"
#import <UIKit/UIImageView.h>

@class QLDocumentInfoView, UIToolbar, UIBarButtonItem, OpenInApplicationBarButtonItem;

__attribute__((visibility("hidden")))
@interface QLContentViewIPad : UIImageView <QLContentView> {
	QLDocumentInfoView* _documentInfoView;
	UIToolbar* _buttonBar;
	OpenInApplicationBarButtonItem* _defaultApplicationButtonItem;
	UIBarButtonItem* _otherApplicationsButtonItem;
}
-(void)updateWithQuickLookDocument:(id)quickLookDocument;
-(void)_updateOtherApplicationsButtonItem;
-(void)_updateDefaultApplicationButtonItem:(id)item multipleApplications:(BOOL)applications;
-(void)layoutSubviews;
-(void)showBanner;
-(void)hideBanner;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame quickLookBannerViewDelegate:(id)delegate;
@end
