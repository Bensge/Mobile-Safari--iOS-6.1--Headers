/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIActivityViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OpenInOtherAppActivityViewController : UIActivityViewController {
	NSString* _filePath;
}
@property(retain, nonatomic) NSString* filePath;
+(id)_activityItemsForFilePath:(id)filePath andUTI:(id)uti;
+(id)_applicationsForDocumentProxy:(id)documentProxy;
-(void)_prepareActivity:(id)activity;
-(void)dealloc;
-(id)initWithFilePath:(id)filePath andUTI:(id)uti;
@end
