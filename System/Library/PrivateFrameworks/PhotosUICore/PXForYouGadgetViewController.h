//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXNavigableForYouViewController-Protocol.h>
#import <PhotosUICore/PXNavigableSharedAlbumActivityFeedHostViewController-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSString, PXForYouBadgeManager, PXForYouGadgetPriorityManager;

@interface PXForYouGadgetViewController <PXSettingsKeyObserver, PXNavigableForYouViewController, PXNavigableSharedAlbumActivityFeedHostViewController>
{
    _Bool _needsRefresh;	// 8 = 0x8
    _Bool _rootGadgetControllerHasAppearedOnce;	// 9 = 0x9
    PXForYouBadgeManager *_badgeManager;	// 16 = 0x10
    PXForYouGadgetPriorityManager *_priorityManager;	// 24 = 0x18
}

+ (void)setLastExitedForYouDate:(id)arg1;	// IMP=0x00000000000e1457
+ (id)lastExitedForYouDate;	// IMP=0x00000000000e1407
+ (id)lastExitedDateAccessor;	// IMP=0x00000000000e13d7
- (void).cxx_destruct;	// IMP=0x00000000000e02bb
@property(nonatomic) _Bool rootGadgetControllerHasAppearedOnce; // @synthesize rootGadgetControllerHasAppearedOnce=_rootGadgetControllerHasAppearedOnce;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property(retain, nonatomic) PXForYouGadgetPriorityManager *priorityManager; // @synthesize priorityManager=_priorityManager;
@property(retain, nonatomic) PXForYouBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
- (void)ppt_navigateToContentSyndicationGridViewControllerWithCompleteHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e00f9
- (void)ppt_navigateToLatestMemoryWithWillPresentHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e0014
- (void)ppt_navigateToFirstInvitationCMM:(_Bool)arg1 withCompleteHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000dfed1
- (void)ppt_navigateToFirstSuggestedCMMComposeRecipientViewAfterOneSecondWithCompleteHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dfd99
- (void)ppt_navigateToFirstSuggestedCMMAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000dfc56
- (id)px_navigationDestination;	// IMP=0x00000000000dfc26
- (unsigned long long)_gadgetTypeForDestinationType:(long long)arg1;	// IMP=0x00000000000dfc12
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000df8de
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x00000000000df8ae
- (void)navigateToSharedAlbumActivityFeedAnimated:(_Bool)arg1 configuration:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000df4f3
- (id)navigateToShowAllMemoriesFeedAnimated:(_Bool)arg1;	// IMP=0x00000000000df45d
- (void)_userDidViewCloudFeedContent;	// IMP=0x00000000000df3b9
- (id)_suggestionDumpURL;	// IMP=0x00000000000dee08
- (void)_handleTapToRadar;	// IMP=0x00000000000ded21
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;	// IMP=0x00000000000decb4
- (long long)scrollAnimationIdentifier;	// IMP=0x00000000000deca9
- (void)configureSectionHeader:(id)arg1;	// IMP=0x00000000000dec40
- (void)rootGadgetControllerDidDisappear;	// IMP=0x00000000000debda
- (void)rootGadgetControllerWillAppear;	// IMP=0x00000000000de992
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000de918
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000de81b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000de7a1
- (void)viewDidLoad;	// IMP=0x00000000000de536
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000000de41e
- (void)_lastSeenBadgeDateChanged;	// IMP=0x00000000000de3a8
- (void)reloadContent;	// IMP=0x00000000000de365
- (id)initWithBadgeManager:(id)arg1;	// IMP=0x00000000000de0cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
