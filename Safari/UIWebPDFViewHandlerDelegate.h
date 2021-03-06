/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"


@protocol UIWebPDFViewHandlerDelegate
@optional
-(id)alertViewForUIWebPDFViewHandler:(id)uiwebPDFViewHandler;
-(float)minimumVerticalContentOffsetForPDFViewHandler:(id)pdfviewHandler;
-(id)hostViewForLinkSheet:(id)linkSheet;
-(id)pdfViewHandler:(id)handler actionsForURL:(id)url suggestedActions:(id)actions;
-(void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)unlocked;
-(void)highlightSearchResultBounds:(CGRect)bounds resultRects:(id)rects contentViews:(id)views forPDFViewHandler:(id)pdfviewHandler;
-(id)passwordForPDFViewHandler:(id)pdfviewHandler;
-(CGPoint)originForPDFPageLabelViewWithHandler:(id)handler proposedOrigin:(CGPoint)origin;
-(CGRect)frameForPDFViewWithHandler:(id)handler proposedFrame:(CGRect)frame;
-(void)pdfViewHandler:(id)handler linkClicked:(id)clicked;
-(void)pdfViewHandler:(id)handler willClickLink:(id)link;
@end

