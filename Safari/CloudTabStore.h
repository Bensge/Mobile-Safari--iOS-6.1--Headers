/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSUbiquitousKeyValueStore;

__attribute__((visibility("hidden")))
@interface CloudTabStore : NSObject {
	NSUbiquitousKeyValueStore* _store;
}
+(id)sharedCloudTabStore;
-(id)_currentDeviceUUID;
-(id)_pathForFileInSafariDirectory:(id)safariDirectory;
-(BOOL)canSaveCloudTabsForCurrentDevice;
-(BOOL)cloudTabsAreEnabled;
-(void)requestUpdateFromServer;
-(void)pruneExpiredDevices;
-(void)saveCurrentDeviceTabsFromSuspendState;
-(void)saveCurrentDeviceCloudTabs:(id)tabs;
-(void)_removeConflictingDevice;
-(id)_dictionaryForCurrentDeviceWithCloudTabs:(id)cloudTabs;
-(void)clearTabsForCurrentDevice;
-(void)_clearAllDevices;
-(id)syncedCloudTabDevices;
-(id)_syncedCloudTabDevicesIncludingCurrentDevice:(BOOL)device emptyDevices:(BOOL)devices;
-(id)currentDevice;
-(void)_storeDidUpdate;
-(void)dealloc;
-(id)init;
-(void)saveCurrentDeviceTabDocuments:(id)documents;
@end
