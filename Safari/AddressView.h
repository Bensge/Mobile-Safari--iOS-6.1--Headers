/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RotatablePopoverControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "URLCompletionListDelegate.h"
#import "MobileSafari-Structs.h"
#import <UIKit/UIView.h>

@class FadeView, ReloadImageView, ReaderButtonView, URLCompletionList, AddressTextField, ProgressView, EllipsedTextFadeView, EllipsedTextView, ExtendedSearchField, BookmarksBarView, NSString, SearchEngineInfo, SearchSuggestionManager, TabBar, UIImageView, UIResponder, UILabel, UINavigationButton, NSMutableArray, NSDate, UISnapshotView, NSMutableDictionary, NSArray, NSTimer, CompletionTableView, CompletionTableViewController;

__attribute__((visibility("hidden")))
@interface AddressView : UIView <RotatablePopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, URLCompletionListDelegate> {
	UIImageView* _gradientImageView;
	UIImageView* _bottomShadowView;
	ReloadImageView* _reloadImageView;
	AddressTextField* _addressTextField;
	NSString* _URLString;
	ExtendedSearchField* _searchTextField;
	UIResponder* _responderForEditingWithoutFirstResponder;
	ProgressView* _progressView;
	UIView* _urlClipperView;
	EllipsedTextView* _ellipsedTextView;
	EllipsedTextFadeView* _ellipsedTextFadeView;
	UIView* _bookmarkBarClipperView;
	UIImageView* _dividerView;
	BookmarksBarView* _bookmarksBarView;
	TabBar* _tabBar;
	UILabel* _titleTextView;
	CGSize _titleTextSize;
	UIImageView* _lockView;
	NSString* _evOrganizationName;
	NSString* _pageTitle;
	UIView* _titleTextViewContainer;
	NSString* _titleAfterCoalescedUpdate;
	UINavigationButton* _cancelButton;
	FadeView* _fadeView;
	CompletionTableViewController* _completionTableViewController;
	CompletionTableView* _completionTable;
	ReaderButtonView* _readerButton;
	BOOL _showingReaderButton;
	BOOL _needsReaderButtonLayout;
	URLCompletionList* _URLCompletionList;
	unsigned _urlCompletionBackgroundTaskIdentifier;
	SearchEngineInfo* _currentSearchEngine;
	NSString* _searchCountKey;
	unsigned _isAnimating : 1;
	unsigned _isEditing : 1;
	unsigned _URLCompletionUpdatesAreDisabled : 1;
	unsigned _isShowingBookmarksBar : 1;
	unsigned _suppressTextFieldDidEndEditingResponse : 1;
	SearchSuggestionManager* _suggestionManager;
	NSMutableArray* _searchCompletionsRecents;
	NSMutableArray* _searchCompletionsSuggestions;
	NSDate* _searchTextExpiryDate;
	NSString* _userEnteredSearch;
	UISnapshotView* _snapshotView;
	NSMutableDictionary* _searchCompletionsMergingDictionary;
	NSArray* _mergedSearchCompletions;
	NSString* _searchTextForFindOnPage;
	unsigned _numberOfTextMatches;
	NSTimer* _findOnPageUpdateTimer;
	UIView* _blankSectionHeaderView;
	SEL _outstandingDidStopSelector;
	BOOL _progressStalled;
	BOOL _usesPrivateBrowsingStyle;
	float _addressFieldLeftInset;
}
@property(assign, nonatomic) float addressFieldLeftInset;
+(BOOL)shouldShowInactiveFieldWhileEditing;
+(BOOL)alwaysShowBookmarksBar;
+(void)setAlwaysShowBookmarksBar:(BOOL)bar;
+(BOOL)_showsTitle;
-(void)setUsesPrivateBrowsingStyle:(BOOL)style;
-(id)readerButton;
-(void)layoutReaderButton;
-(void)setupReaderButtonIfNeeded;
-(CGRect)_readerButtonForProgressViewFrame:(CGRect)progressViewFrame;
-(void)_setShowingReaderButton:(BOOL)button;
-(void)_layoutClipperViewAndEllipsedTextView;
-(void)_updateEllipsedTextViewFadeTruncate;
-(unsigned)numberOfTextMatches;
-(id)searchTextForFindOnThisPage;
-(void)animateOutWithSnapshotDuration:(double)snapshotDuration thumbnailEndFrame:(CGRect)frame;
-(void)prepareSnapshotForAnimateOut;
-(void)animateInWithSnapshotDuration:(double)snapshotDuration thumbnailStartFrame:(CGRect)frame;
-(void)_animateInWithSnapshotDidEnd;
-(id)snapshotView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)adjustCompletionTableForKeyboardChange:(id)keyboardChange animated:(BOOL)animated;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)_sectionIndexForFindOnThisPage;
-(id)inputAccessoryView;
-(BOOL)_activeTabIsBlankDocument;
-(int)_sectionIndexForRecentSearches;
-(int)_sectionIndexForSearchSuggestions;
-(BOOL)keyboardInputShouldDelete:(id)keyboardInput;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(void)_clearAddressTextFieldWithKeyboardInput:(id)keyboardInput;
-(void)_pushUndoActionName:(id)name;
-(void)textFieldClearButtonPressed:(id)pressed;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)_whileEditingSwitchToTextField:(id)textField;
-(void)didMoveToSuperview;
-(void)setIsAnimating:(BOOL)animating;
-(BOOL)isAnimating;
-(void)willHideProgress;
-(void)willShowProgress;
-(void)setEVOrganizationName:(id)name;
-(id)lockView;
-(id)titleTextView;
-(id)evOrganizationName;
-(id)title;
-(void)setTitle:(id)title forceUpdate:(BOOL)update;
-(void)updateTitleTextViewForCoalescedUpdate;
-(id)progressView;
-(id)ellipsedTextView;
-(id)reloadImageView;
-(void)setProgress:(float)progress forceUpdate:(BOOL)update;
-(void)setProgressStalled:(BOOL)stalled;
-(void)_updateReloadImageViewWithForcedUpdate:(BOOL)forcedUpdate;
-(void)searchWithSearchString:(id)searchString;
-(void)search;
-(void)setSearchString:(id)string;
-(void)completedEditingAddressWithText:(id)text;
-(void)goToURL;
-(BOOL)isEditing;
-(void)browserControllerWillEndEnteringURL;
-(void)cancel;
-(void)transitionAwayFromEditingTextField:(id)editingTextField;
-(void)focusAddressField;
-(void)_ellipsedTextViewWasClicked;
-(void)transitionToEditingTextField:(id)editingTextField;
-(CGRect)_editingFrame;
-(void)_prepareTitleForAnimatedAlignmentChange;
-(void)_didFinishAnimatingToSwitchToSearchField;
-(void)_didFinishAnimatingToSwitchToURLField;
-(void)_didFinishAnimatingToStopEditing;
-(void)willSuspend;
-(void)updateBookmarksBar;
-(void)cleanUpBookmarksBar;
-(void)hideBookmarksBar;
-(void)showBookmarksBar;
-(void)prepareToShowBookmarksBar;
-(void)_didFinishAnimatingToEditSearchField;
-(void)_didFinishAnimatingToEditURL;
-(id)_colorForBookmarksBarTitles;
-(void)_adjustClipperViewAndEllipsedTextViewForEditing:(BOOL)editing textField:(id)field;
-(void)_layoutEllipsedTextViewForProgressViewFrame:(CGRect)progressViewFrame;
-(BOOL)_shouldDoURLSlideAnimation;
-(float)_addressWidthIncludingScheme:(BOOL)scheme;
-(void)_createButtons;
-(void)_cancelMouseExit;
-(void)_cancelMouseEnter;
-(void)_cancelMouseUpOutside;
-(void)_cancelMouseDown;
-(void)_swapInTextEditingView:(BOOL)textEditingView andGiveFocus:(BOOL)focus;
-(void)_updateAddressTextFieldText;
-(void)_setAddressTextFieldText:(id)text;
-(void)_updateFieldBackgroundStylesForEditing:(BOOL)editing textField:(id)field showInactiveFieldWhileEditing:(BOOL)editing3;
-(void)_createAddressTextFieldIfNecessary;
-(void)_updateSearchCompletions;
-(void)_delayedUpdateFindOnPage;
-(void)cancelFindOnPage;
-(void)doFindOnPage:(id)page inWebView:(id)webView;
-(unsigned)findOnPageOptions;
-(BOOL)isFindOnPageSupported;
-(void)searchDidFinish:(id)search;
-(void)search:(id)search hasPartialResults:(id)results;
-(void)searchLimitHit:(id)hit;
-(void)searchWasCancelled:(id)cancelled;
-(void)searchDidTimeOut:(id)search;
-(void)searchDidBegin:(id)search;
-(void)_setAnimationStateActivityIndicator:(BOOL)indicator;
-(void)_updateShowingSearchCompletions;
-(void)_setSearchCompletionsToRecentSearchesMatchingPrefix:(id)recentSearchesMatchingPrefix;
-(void)_setSearchSuggestions:(id)suggestions;
-(void)_updateMergedSearchCompletions;
-(int)_sectionIndexForMergedSuggestions;
-(void)_updateURLCompletions;
-(void)URLCompletionList:(id)list didFinishUpdatingForPrefix:(id)prefix;
-(void)_endURLCompletionBackgroundTask;
-(void)_rescheduleEndOfURLCompletionBackgroundTask;
-(void)_startURLCompletionBackgroundTask;
-(void)clearURLCompletionList;
-(void)clearSearchTextField;
-(void)hideCompletionTableIfItIsBeingShown;
-(void)_hideCompletions;
-(void)popoverController:(id)controller willPresentAfterRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)_showCompletions;
-(void)_reloadCompletionTableAndAdjustPopover;
-(BOOL)_completionTableIsVisible;
-(id)_titleForFindOnPageHeader;
-(id)_stringForFindOnPagePopoverHeader:(id)findOnPagePopoverHeader;
-(CGRect)_presentationRectForCompletionPopover;
-(void)_adjustClipperViewAndEllipsedTextViewAfterAnimateInOrOut;
-(void)_readerButtonClicked;
-(void)_reloadImageViewClicked;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)dealloc;
-(void)setTabBar:(id)bar;
-(id)initWithFrame:(CGRect)frame;
-(void)_updateTabBarActiveTabBackgroundImage;
-(void)_cleanUpSuggestionManager;
-(void)_setTitleText:(id)text;
-(void)updateUIWithForcedUpdate:(BOOL)forcedUpdate;
-(void)_layoutAddressTextField;
-(void)_layoutAddressTextFieldForProgressViewBounds:(CGRect)progressViewBounds;
-(void)_updateURLClipperViewFrameForReloadButtonRegionWidth:(float)reloadButtonRegionWidth;
-(CGRect)_addressFrameInProgressViewBounds:(CGRect)progressViewBounds;
-(id)_colorForEVOrganizationNameInTitle;
-(id)_colorForNormalPageTitle;
-(void)updateSearchEngine;
-(void)_initSearchEngineIfNeeded;
-(void)setSearchFieldString;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)bounds;
-(void)setFrame:(CGRect)frame;
-(void)_updateTabBarBackgroundOffset;
-(void)_layoutEllipsedTextFadeViewForEditing:(BOOL)editing textField:(id)field showInactiveFieldWhileEditing:(BOOL)editing3;
-(void)_layoutEllipsedTextFadeViewShowingAdjustment:(BOOL)adjustment;
-(void)_layoutCancelButtonForEditing:(BOOL)editing beforeAnimation:(BOOL)animation;
-(void)_layoutReloadButtonForProgressViewFrame:(CGRect)progressViewFrame forEditing:(BOOL)editing textField:(id)field showInactiveFieldWhileEditing:(BOOL)editing4;
-(void)_layoutTitleView;
-(void)_setTitleFrame:(CGRect)frame;
-(void)_updateLockViewImage;
-(void)_updateLockViewPosition;
-(void)_layoutCompletionTable;
-(void)_setUpTargetViewForCompletionTable;
-(BOOL)_isReaderAvailable;
-(float)_readerButtonHorizontalTotalMargin;
-(float)_reloadButtonRegionWidthWhenEditingTextField:(id)field;
-(float)_reloadButtonRegionWidth;
-(float)_rightSideButtonsRegionWidth;
-(BOOL)_completionsAreSearches;
-(id)_textFieldForEditing;
-(CGRect)_frameForSearchFieldWithFocus:(BOOL)focus;
-(CGRect)_frameForProgressViewEditedWithFocus:(BOOL)focus;
-(CGRect)_frameForSearchFieldNormal;
-(CGRect)_frameForProgressViewNormal;
-(float)_fieldPaddingTop;
-(float)_unfocusedViewWidth;
-(float)_focusedViewWidth;
-(float)_focusedViewWidthFactor:(int)factor;
-(CGRect)_fieldRect;
-(void)browserControllerDidEndRotating;
-(void)browserControllerDidStartRotating;
-(BOOL)_isShowingProgress;
-(float)progress;
-(id)tabBar;
-(float)editingHeight;
-(float)defaultHeight;
-(float)_heightWithoutBars;
-(void)suggestionManager:(id)manager connectionDidFinishLoading:(id)connection;
-(void)suggestionManager:(id)manager connection:(id)connection didFailWithError:(id)error forSearchString:(id)searchString;
-(void)suggestionManager:(id)manager connection:(id)connection didReceiveResponse:(id)response;
-(void)suggestionManager:(id)manager hasSuggestions:(id)suggestions forSearchString:(id)searchString;
@end

