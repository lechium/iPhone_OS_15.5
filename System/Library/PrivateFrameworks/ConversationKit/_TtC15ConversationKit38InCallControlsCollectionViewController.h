//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit38InCallControlsCollectionViewController : UIViewController
{
    MISSING_TYPE *updatedCapabilitiesWithParticipants;	// 8 = 0x8
    MISSING_TYPE *capabilitiesChecker;	// 16 = 0x10
    MISSING_TYPE *participants;	// 24 = 0x18
    MISSING_TYPE *isLegacy;	// 32 = 0x20
    MISSING_TYPE *featureFlagChecker;	// 40 = 0x28
    MISSING_TYPE *activeRemoteParticipantsCount;	// 80 = 0x50
    MISSING_TYPE *activitySession;	// 88 = 0x58
    MISSING_TYPE *conversation;	// 128 = 0x80
    MISSING_TYPE *mode;	// 136 = 0x88
    MISSING_TYPE *gridLayoutStyle;	// 137 = 0x89
    MISSING_TYPE *isOnScreen;	// 138 = 0x8a
    MISSING_TYPE *controlsManager;	// 144 = 0x90
    MISSING_TYPE *context;	// 152 = 0x98
    MISSING_TYPE *remoteAudioPaused;	// 153 = 0x99
    MISSING_TYPE *participantsViewControllerDelegate;	// 160 = 0xa0
    MISSING_TYPE *inCallControlsCollectionViewControllerDelegate;	// 176 = 0xb0
    MISSING_TYPE *collectionView;	// 192 = 0xc0
    MISSING_TYPE *dataSource;	// 200 = 0xc8
    MISSING_TYPE *shareLinkEnabled;	// 208 = 0xd0
    MISSING_TYPE *updateDataSourceNeedsRefreshParticipants;	// 209 = 0xd1
    MISSING_TYPE *updateDataSourceNeedsAnimatedDifferences;	// 210 = 0xd2
    MISSING_TYPE *updateDataSourceSubject;	// 216 = 0xd8
    MISSING_TYPE *updateDataSourceDebouncer;	// 224 = 0xe0
    MISSING_TYPE *sectionHeaderViewRegistration;	// 0 = 0x0
    MISSING_TYPE *activityCellRegistration;	// 0 = 0x0
    MISSING_TYPE *titleCellRegistration;	// 0 = 0x0
    MISSING_TYPE *statusCellRegistration;	// 0 = 0x0
    MISSING_TYPE *participantCellRegistration;	// 0 = 0x0
    MISSING_TYPE *addParticipantCellRegistration;	// 0 = 0x0
    MISSING_TYPE *linkLayoutCellRegistration;	// 0 = 0x0
    MISSING_TYPE *ignoreLMIRequestsCellRegistration;	// 0 = 0x0
    MISSING_TYPE *fallbackCellRegistration;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000013c0f1
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000013c0a0
- (void)handleContentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000013b14c
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000013acf0
- (void)viewDidLoad;	// IMP=0x000000000013acc3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001397d4

@end
