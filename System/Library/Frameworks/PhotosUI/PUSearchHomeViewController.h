//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGadgetUIViewController.h>

#import <PhotosUI/UISearchControllerDelegate-Protocol.h>

@class NSString, PUSearchHomeGadgetDataSourceManager, PXProgrammaticNavigationDestination;
@protocol PXViewControllerEventTracker;

@interface PUSearchHomeViewController : PXGadgetUIViewController <UISearchControllerDelegate>
{
    PXProgrammaticNavigationDestination *_px_navigationDestination;	// 8 = 0x8
    PUSearchHomeGadgetDataSourceManager *_searchHomeDataSourceManager;	// 16 = 0x10
    id <PXViewControllerEventTracker> _searchControllerEventTracker;	// 24 = 0x18
}

+ (Class)gadgetSpecClass;	// IMP=0x00000000003d858b
- (void).cxx_destruct;	// IMP=0x00000000003d805a
@property(retain, nonatomic) id <PXViewControllerEventTracker> searchControllerEventTracker; // @synthesize searchControllerEventTracker=_searchControllerEventTracker;
@property(retain, nonatomic) PUSearchHomeGadgetDataSourceManager *searchHomeDataSourceManager; // @synthesize searchHomeDataSourceManager=_searchHomeDataSourceManager;
- (void)didDismissSearchController:(id)arg1;	// IMP=0x00000000003d7f9e
- (void)didPresentSearchController:(id)arg1;	// IMP=0x00000000003d7f2c
- (void)ppt_dismissKeyboard;	// IMP=0x00000000003d7ea5
- (void)ppt_prepareForSearchTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000003d7cec
- (void)ppt_prepareForSearchScrollingTestWithSearchText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d7ac2
- (void)ppt_prepareZeroKeywordRequest:(CDUnknownBlockType)arg1;	// IMP=0x00000000003d7a50
- (long long)scrollAnimationIdentifier;	// IMP=0x00000000003d7a45
- (void)_notifyAnalyticsSearchAction:(unsigned long long)arg1;	// IMP=0x00000000003d79af
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;	// IMP=0x00000000003d7850
- (id)px_navigationDestination;	// IMP=0x00000000003d77f8
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x00000000003d77f0
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003d7733
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x00000000003d7711
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000003d7667
- (_Bool)pu_scrollToInitialPositionAnimated:(_Bool)arg1;	// IMP=0x00000000003d7564
- (void)presentSearchWithText:(id)arg1 searchCategory:(unsigned long long)arg2;	// IMP=0x00000000003d7372
- (void)presentForSearchHashtag:(id)arg1;	// IMP=0x00000000003d7196
- (void)presentOneYearAgo;	// IMP=0x00000000003d6fa3
- (void)presentSpotlightSearch:(id)arg1;	// IMP=0x00000000003d6dfb
- (void)presentSiriSearchRequest:(id)arg1 resultCount:(unsigned long long)arg2;	// IMP=0x00000000003d69ce
- (void)performRecentSearch:(id)arg1;	// IMP=0x00000000003d6826
- (void)selectZeroKeyword:(id)arg1;	// IMP=0x00000000003d6662
- (void)_clearSearchField;	// IMP=0x00000000003d6599
- (void)activateSearchField;	// IMP=0x00000000003d6415
- (void)_configureSearchNavigationBar;	// IMP=0x00000000003d620b
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000003d6104
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000003d5ed8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003d5dbb
- (_Bool)shouldPreventPlaceholder;	// IMP=0x00000000003d5d77
- (void)viewDidLoad;	// IMP=0x00000000003d5b88
- (id)init;	// IMP=0x00000000003d5aa4
- (id)px_gridPresentation;	// IMP=0x000000000028a55d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

