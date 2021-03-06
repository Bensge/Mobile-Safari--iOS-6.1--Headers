/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <UIKit/UIApplication.h>
#import "UIApplicationDelegate.h"

@class UIWindow, PageLoadTestRunner, NSTimer, TestProcessor, NSString, BrowserController, CayenneClientDebugger;

__attribute__((visibility("hidden")))
@interface Application : UIApplication <UIApplicationDelegate> {
	BrowserController* _controller;
	BOOL _finishedLaunching;
	BOOL _isHidingBrowserPanelForSuspend;
	BOOL _isHandlingMemoryWarning;
	NSTimer* _memoryWarningTimer;
	double _memoryWarningSleepInterval;
	int _memoryWarningState;
	BOOL _isReadingDefaults;
	BOOL _shouldReadDefaultsOnResume;
	NSString* _defaultPNGName;
	PageLoadTestRunner* _purplePLT;
	PageLoadTestRunner* _commandLinePLT;
	NSString* _purpleTestName;
	BOOL _testIsRunning;
	BOOL _isRunningShowBookmarksTest;
	BOOL _startedBookmarksTest;
	BOOL _isRunningCanvasTest;
	BOOL _isRunningReaderTest;
	TestProcessor* _testProcessor;
	CayenneClientDebugger* _debugger;
	BOOL _alreadyDebugging;
}
@property(retain, nonatomic) UIWindow* window;
-(void)debugWebView:(id)view;
-(BOOL)finishedLaunching;
-(BOOL)isHidingBrowserPanelForSuspend;
-(void)finishedTest:(id)test extraResults:(id)results;
-(void)applicationWillTerminate;
-(void)applicationDidFinishLaunching:(id)application;
-(void)_setHandlingURL:(BOOL)url url:(id)url2;
-(void)userDefaultsDidChange:(id)userDefaults;
-(void)applicationOpenURL:(id)url;
-(void)_saveNSURLCacheToDiskInBackground:(BOOL)background;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationWillEnterForeground:(id)application;
-(void)clearReaderViewsExceptMultiplePageReader:(BOOL)reader;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationWillResignActive:(id)application;
-(void)applicationResume:(GSEventRef)resume;
-(BOOL)applicationSuspend:(GSEventRef)suspend settings:(id)settings;
-(void)_applicationWillSuspend;
-(void)_resumeForEventsOnly:(BOOL)eventsOnly;
-(void)_readDefaults;
-(BOOL)_suspendForEventsOnly:(BOOL)eventsOnly;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(void)dealloc;
-(id)lastPageLoadTime;
-(id)lastPageVisualLayoutTime;
-(id)linksOnActivePage;
-(id)activeURL;
-(id)setNotifyPageLoadDidFinish:(id)finish;
-(id)loadURLInNewWindow:(id)newWindow;
-(id)loadURL:(id)url;
-(void)stopLoading;
-(void)scrollDocumentDown;
-(id)isAtEndOfPage;
-(id)isLoading;
-(void)_dumpMemoryStatistics:(BOOL)statistics;
-(void)reduceMemoryOnApplicationSuspendIfNeeded;
-(void)didReceiveMemoryWarning;
-(void)_handleMemoryWarningLevel;
-(void)_stopMemoryWarningTimer;
-(void)_startMemoryWarningTimer;
-(BOOL)_isStillUnderMemoryPressure;
-(void)_handleMemoryWarningBackground;
-(void)_handleMemoryWarningCriticalPriority;
-(void)_handleMemoryWarningHighPriority:(id)priority;
-(void)_handleMemoryWarningMediumPriority:(id)priority;
-(void)_hibernateOneDocumentFrom:(id)from;
-(void)_handleMemoryWarningLowPriority;
-(void)_incrementMemoryWarningState;
-(void)categorizeInMemoryImportantDocuments:(id)memoryImportantDocuments unimportantDocuments:(id)documents;
-(void)initMemoryJetsamInfo;
-(void)setHandlingMemoryWarning:(BOOL)warning;
-(BOOL)isHandlingMemoryWarning;
-(id)buildPageLoadTestRunner:(id)runner suiteName:(id)name del:(id)del;
-(BOOL)didStartBookmarksTest;
-(BOOL)isRunningReaderTest;
-(BOOL)isRunningCanvasTest;
-(BOOL)isRunningShowBookmarksTest;
-(void)finishedBookmarksTest;
-(void)finishedCanvasTestwithURL:(id)url;
-(void)startBookmarksTest;
-(BOOL)prepareBookmarksTest;
-(BOOL)startCanvasTest:(id)test;
-(void)pageLoadTestRunnerFinishedTest:(id)test;
-(void)pageLoadTestRunnerStartedTest:(id)test;
-(BOOL)isCommandLinePLTRunning;
-(id)currrentTestName;
-(BOOL)isTestRunning;
-(void)finishedPurpleTest:(id)test;
-(void)startedPurpleTest;
-(BOOL)runTest:(id)test options:(id)options;
@end

