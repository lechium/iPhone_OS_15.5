//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class DDLookupQuery, DDParsecFirstTimeViewController, NSArray, NSDate, NSString, SearchUIResultsViewController;

@interface DDParsecServiceCollectionViewController : UINavigationController
{
    SearchUIResultsViewController *_resultsViewController;	// 8 = 0x8
    DDLookupQuery *_lookupQuery;	// 16 = 0x10
    _Bool _sectionsIsSet;	// 24 = 0x18
    _Bool _loadingError;	// 25 = 0x19
    _Bool _useNetwork;	// 26 = 0x1a
    _Bool _searchViewVisible;	// 27 = 0x1b
    _Bool _fteMode;	// 28 = 0x1c
    NSString *_fte_ack_key;	// 32 = 0x20
    DDParsecFirstTimeViewController *_firstTimeViewController;	// 40 = 0x28
    NSDate *_lastAppearTime;	// 48 = 0x30
    NSDate *_lastDisappearTime;	// 56 = 0x38
    _Bool _sourceIsHint;	// 64 = 0x40
    _Bool _previewMode;	// 65 = 0x41
    _Bool _sheetMode;	// 66 = 0x42
    _Bool _popoverMode;	// 67 = 0x43
    _Bool _doneClicked;	// 68 = 0x44
    _Bool _hasExternaDataSource;	// 69 = 0x45
    long long _style;	// 72 = 0x48
    double _scale;	// 80 = 0x50
    NSString *_trueTitle;	// 88 = 0x58
    CDUnknownBlockType _queryBlock;	// 96 = 0x60
    NSArray *_sections;	// 104 = 0x68
    unsigned long long _queryId;	// 112 = 0x70
}

+ (id)_exportedInterface;	// IMP=0x0020000000009b40
+ (id)_remoteViewControllerInterface;	// IMP=0x0010000000009b20
- (void).cxx_destruct;	// IMP=0x002000000000e5e0
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) CDUnknownBlockType queryBlock; // @synthesize queryBlock=_queryBlock;
@property(nonatomic) double DDViewScale; // @synthesize DDViewScale=_scale;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x001000000000e410
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x001000000000e350
- (void)forwardInvocation:(id)arg1;	// IMP=0x001000000000e230
- (_Bool)shouldHandleCardSectionEngagement:(id)arg1;	// IMP=0x001000000000e0c0
- (void)didEngageResult:(id)arg1;	// IMP=0x001000000000dfe0
- (void)didEngageCardSection:(id)arg1;	// IMP=0x001000000000de60
- (_Bool)firstTimeExperienceIsInPopoverPresentation;	// IMP=0x001000000000de30
- (void)firstTimeExperienceContinueButtonPressed;	// IMP=0x001000000000dcc0
- (void)updateVisualModeWithController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000000d960
- (void)updateVisualMode:(_Bool)arg1;	// IMP=0x001000000000d8f0
- (void)setSheetMode:(_Bool)arg1;	// IMP=0x001000000000d880
- (void)setPreviewMode:(_Bool)arg1;	// IMP=0x001000000000d810
- (void)setPopoverMode:(_Bool)arg1;	// IMP=0x001000000000d7a0
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;	// IMP=0x001000000000d750
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x001000000000d640
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000000d340
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000000cda0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000000cd40
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000cb40
- (void)showError:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000000c4d0
- (void)showContent:(_Bool)arg1;	// IMP=0x001000000000bee0
- (void)interactionEndedWithPunchout:(_Bool)arg1;	// IMP=0x001000000000be00
- (void)doneButtonPressed:(id)arg1 punchout:(_Bool)arg2;	// IMP=0x001000000000bcc0
- (void)doneButtonPressed:(id)arg1;	// IMP=0x001000000000bc60
- (void)showLoadingSpinner:(_Bool)arg1;	// IMP=0x001000000000bb70
- (void)appWillEnterForeground;	// IMP=0x001000000000b900
- (void)appDidEnterBackground;	// IMP=0x001000000000b780
- (void)setSearchVisible:(_Bool)arg1;	// IMP=0x001000000000b730
- (void)setTitle:(id)arg1;	// IMP=0x001000000000b5a0
- (void)addSections:(id)arg1 error:(id)arg2;	// IMP=0x001000000000b240
- (void)dealloc;	// IMP=0x001000000000b1f0
- (void)_willAppearInRemoteViewController;	// IMP=0x001000000000b190
- (_Bool)presentsWithMargins;	// IMP=0x001000000000b130
- (void)prepareWithQueryObject:(id)arg1 previewMode:(_Bool)arg2 sheetMode:(_Bool)arg3 popoverMode:(_Bool)arg4 viewStyle:(long long)arg5 scale:(double)arg6;	// IMP=0x001000000000ac20
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000000ab20
- (void)setQuery:(CDUnknownBlockType)arg1;	// IMP=0x001000000000aa90
- (void)startQueryWithResult:(id)arg1 context:(id)arg2;	// IMP=0x001000000000a3f0
- (void)showClientQueryResults:(id)arg1 error:(id)arg2;	// IMP=0x001000000000a370
- (void)startQueryWithQuery:(id)arg1;	// IMP=0x001000000000a1d0
- (void)startQueryWithString:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0010000000009b60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
