//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPAVQueueController-Protocol.h>
#import <MediaPlaybackCore/MPArtworkDataSource-Protocol.h>
#import <MediaPlaybackCore/MPCContinueListeningRadioQueueProviding-Protocol.h>
#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>
#import <MediaPlaybackCore/MPCQueueControllerCommandInterposingHost-Protocol.h>
#import <MediaPlaybackCore/MPCQueueItemProviding-Protocol.h>
#import <MediaPlaybackCore/MPSectionedIdentifierListAnnotationDelegate-Protocol.h>
#import <MediaPlaybackCore/MPShuffleableSectionedIdentifierListDelegate-Protocol.h>
#import <MediaPlaybackCore/MSVSegmentedCoding-Protocol.h>

@class AVPlayerPlaybackCoordinator, MPAVItem, MPCPlaybackEngine, MPIdentifierSet, MPSectionedIdentifierList, MPSectionedIdentifierListPosition, MPShuffleableSectionedIdentifierList, NSArray, NSError, NSMutableDictionary, NSString;
@protocol MPAVQueueControllerDelegate, MPAVQueueCoordinating;

@interface MPCQueueController : NSObject <MPShuffleableSectionedIdentifierListDelegate, MPSectionedIdentifierListAnnotationDelegate, MPCContinueListeningRadioQueueProviding, MPCPlaybackEngineEventObserving, MPArtworkDataSource, MPCQueueItemProviding, MPAVQueueController, MSVSegmentedCoding, MPCQueueControllerCommandInterposingHost>
{
    unsigned long long _stateHandle;	// 8 = 0x8
    AVPlayerPlaybackCoordinator *_playbackCoordinator;	// 16 = 0x10
    _Bool _hasUserMutations;	// 24 = 0x18
    _Bool _allowsQueueModifications;	// 25 = 0x19
    _Bool _autoPlayIsTriggered;	// 26 = 0x1a
    _Bool _inSharedListeningMode;	// 27 = 0x1b
    NSString *_preferredFirstContentItemID;	// 32 = 0x20
    MPAVItem *_currentItem;	// 40 = 0x28
    id <MPAVQueueControllerDelegate> _delegate;	// 48 = 0x30
    id <MPAVQueueCoordinating> _queueCoordinator;	// 56 = 0x38
    long long _repeatType;	// 64 = 0x40
    long long _shuffleType;	// 72 = 0x48
    MPCPlaybackEngine *_playbackEngine;	// 80 = 0x50
    NSString *_nextContentItemID;	// 88 = 0x58
    NSString *_deferredNextContentItemAnchorID;	// 96 = 0x60
    NSError *_restorationError;	// 104 = 0x68
    NSMutableDictionary *_coderVersions;	// 112 = 0x70
    long long _nextContentItemIDReason;	// 120 = 0x78
    long long _state;	// 128 = 0x80
    long long _autoPlayState;	// 136 = 0x88
    MPSectionedIdentifierListPosition *_autoPlayEndPosition;	// 144 = 0x90
    NSString *_restoreLastStartTimePositionToContentItemID;	// 152 = 0x98
    double _lastSavedTime;	// 160 = 0xa0
    MPIdentifierSet *_missingIdentifierSetForDebugging;	// 168 = 0xa8
    NSArray *_previousSectionIDsForDebugging;	// 176 = 0xb0
    id _rtcSessionHierarchyToken;	// 184 = 0xb8
    MPShuffleableSectionedIdentifierList *_identifierList;	// 192 = 0xc0
    MPSectionedIdentifierList *_autoPlayIdentifierList;	// 200 = 0xc8
    NSMutableDictionary *_dataSources;	// 208 = 0xd0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001254d3
+ (id)describePlayer:(id)arg1;	// IMP=0x000000000008a394
- (void).cxx_destruct;	// IMP=0x000000000011e887
@property(retain, nonatomic) NSMutableDictionary *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) MPSectionedIdentifierList *autoPlayIdentifierList; // @synthesize autoPlayIdentifierList=_autoPlayIdentifierList;
@property(retain, nonatomic) MPShuffleableSectionedIdentifierList *identifierList; // @synthesize identifierList=_identifierList;
@property(retain, nonatomic) id rtcSessionHierarchyToken; // @synthesize rtcSessionHierarchyToken=_rtcSessionHierarchyToken;
@property(nonatomic, getter=isInSharedListeningMode) _Bool inSharedListeningMode; // @synthesize inSharedListeningMode=_inSharedListeningMode;
@property(copy, nonatomic) NSArray *previousSectionIDsForDebugging; // @synthesize previousSectionIDsForDebugging=_previousSectionIDsForDebugging;
@property(copy, nonatomic) MPIdentifierSet *missingIdentifierSetForDebugging; // @synthesize missingIdentifierSetForDebugging=_missingIdentifierSetForDebugging;
@property(readonly, nonatomic) double lastSavedTime; // @synthesize lastSavedTime=_lastSavedTime;
@property(copy, nonatomic) NSString *restoreLastStartTimePositionToContentItemID; // @synthesize restoreLastStartTimePositionToContentItemID=_restoreLastStartTimePositionToContentItemID;
@property(nonatomic) _Bool autoPlayIsTriggered; // @synthesize autoPlayIsTriggered=_autoPlayIsTriggered;
@property(retain, nonatomic) MPSectionedIdentifierListPosition *autoPlayEndPosition; // @synthesize autoPlayEndPosition=_autoPlayEndPosition;
@property(nonatomic) long long autoPlayState; // @synthesize autoPlayState=_autoPlayState;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long nextContentItemIDReason; // @synthesize nextContentItemIDReason=_nextContentItemIDReason;
@property(retain, nonatomic) NSMutableDictionary *coderVersions; // @synthesize coderVersions=_coderVersions;
@property(copy, nonatomic) NSError *restorationError; // @synthesize restorationError=_restorationError;
@property(copy, nonatomic) NSString *deferredNextContentItemAnchorID; // @synthesize deferredNextContentItemAnchorID=_deferredNextContentItemAnchorID;
@property(copy, nonatomic) NSString *nextContentItemID; // @synthesize nextContentItemID=_nextContentItemID;
@property(nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(retain, nonatomic) id <MPAVQueueCoordinating> queueCoordinator; // @synthesize queueCoordinator=_queueCoordinator;
@property(nonatomic) __weak id <MPAVQueueControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MPAVItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) _Bool allowsQueueModifications; // @synthesize allowsQueueModifications=_allowsQueueModifications;
@property(readonly, copy, nonatomic) NSString *preferredFirstContentItemID; // @synthesize preferredFirstContentItemID=_preferredFirstContentItemID;
@property(readonly, nonatomic) _Bool hasUserMutations; // @synthesize hasUserMutations=_hasUserMutations;
- (void)_transitionToAutoPlayState:(long long)arg1;	// IMP=0x000000000011dad8
- (id)_stateDictionaryIncludingIdentifierList:(_Bool)arg1;	// IMP=0x000000000011d694
- (void)_soundCheckEnabledChangedNotification:(id)arg1;	// IMP=0x000000000011d5b2
- (long long)_privateListeningSourceForContext:(id)arg1;	// IMP=0x000000000011d40e
- (id)_nextValidIdentifierPairStartingAtContentItemID:(id)arg1 wasInvalid:(_Bool *)arg2;	// IMP=0x000000000011ce33
- (void)_loadItemsAfterItemsDeletedIfNeededDeletedItemsCount:(long long)arg1;	// IMP=0x000000000011cd0d
- (void)_loadAdditionalItemsIfNeededForDataSourceState:(id)arg1 preferredItemCount:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000011cb9f
- (id)_itemForPair:(id)arg1;	// IMP=0x000000000011bfc7
- (id)_itemForContentItemID:(id)arg1 allowReuse:(_Bool)arg2;	// IMP=0x000000000011b9a7
- (id)_identifierListForSection:(id)arg1;	// IMP=0x000000000011b91e
- (_Bool)_isAutoPlayItem:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000011b8b6
- (void)_highQualityMusicStreamingOnCellularDidChange:(id)arg1;	// IMP=0x000000000011b857
- (void)_endSynchronizedPlayback;	// IMP=0x000000000011b69f
- (void)_getSharedQueueTracklistWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011a94b
- (id)_firstContentItemIDInSection:(id)arg1;	// IMP=0x000000000011a77e
- (id)_firstContentItemID;	// IMP=0x000000000011a61d
- (void)_findDataSourceToLoadItemsAfterItem:(id)arg1 deletedItemsCount:(id)arg2 sectionIdentifier:(id)arg3 withLoadingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000011a21d
- (void)_findDataSourceToLoadItemsAfterItem:(id)arg1 sectionIdentifier:(id)arg2 withLoadingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000011a203
- (void)_emitEventsForPlaybackBehaviorChange;	// IMP=0x0000000000119f94
@property(readonly, nonatomic, getter=_autoplayMode) long long autoplayMode;
- (void)_emitEventsForItemChangeFromItem:(id)arg1 toCurrentItem:(id)arg2;	// IMP=0x00000000001182ec
- (void)_emitEventsForAddingPlaybackContext:(id)arg1 sectionIdentifier:(id)arg2 sharedListeningContainerInfo:(id)arg3;	// IMP=0x0000000000117199
- (void)_currentItemDidChangeFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x0000000000116352
- (id)_contentItemIDWithOffset:(long long)arg1 fromItem:(id)arg2 mode:(long long)arg3 didReachEnd:(_Bool *)arg4;	// IMP=0x0000000000115cd7
- (_Bool)_allDataSourcesSupportInsertionPositionLast;	// IMP=0x0000000000115ab1
- (void)_applyVolumeNormalizationForQueuedItems;	// IMP=0x0000000000115928
- (void)_addAutoPlayPlaybackContext:(id)arg1 atPosition:(long long)arg2 afterContentItemID:(id)arg3 sectionIdentifier:(id)arg4 actions:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000011463c
- (void)_addPlaybackContext:(id)arg1 atPosition:(long long)arg2 afterContentItemID:(id)arg3 sectionIdentifier:(id)arg4 actions:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000112a16
- (void)_loadAdditionalItemsIfNeededForDataSourceState:(id)arg1 withCount:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001128a8
- (id)_accountForAutoPlay;	// IMP=0x000000000011254f
- (id)_identifierListIDPairForQueueIDPair:(id)arg1;	// IMP=0x0000000000112227
- (id)_queueIDPairForIdentifierListIDPair:(id)arg1;	// IMP=0x0000000000111f9d
- (id)firstContentItemIDForItemIntersectingIdentifierSet:(id)arg1;	// IMP=0x0000000000111e7b
- (void)updatePlayerPlaybackCoordinator:(id)arg1;	// IMP=0x0000000000111d53
- (_Bool)canSkipInDirection:(long long)arg1 fromQueueItem:(id)arg2;	// IMP=0x0000000000111ccd
- (void)playerItemDidBecomeCurrent:(id)arg1;	// IMP=0x0000000000111cb4
- (void)playerItemDidResignCurrent:(id)arg1;	// IMP=0x0000000000111cae
- (id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 jumpToItem:(_Bool)arg4 allowReuse:(_Bool)arg5;	// IMP=0x0000000000111999
- (id)itemForContentItemID:(id)arg1 allowReuse:(_Bool)arg2;	// IMP=0x0000000000111987
- (id)requestedPropertySetForEvents;	// IMP=0x00000000001118d9
- (void)sharedCurrentItemChangedToItem:(id)arg1 inSection:(id)arg2 byParticipant:(id)arg3;	// IMP=0x0000000000111120
- (void)sessionDidEnd;	// IMP=0x0000000000110fa3
- (void)explicitContentStateDidChange:(long long)arg1;	// IMP=0x0000000000110f8d
- (void)emitSharedListeningEvent:(id)arg1;	// IMP=0x0000000000110ef1
- (void)emitEventsForAddedSharedListeningContainerInfo:(id)arg1;	// IMP=0x0000000000110d21
- (void)emitEventsForParticipants:(id)arg1 localUserIdentifier:(id)arg2;	// IMP=0x0000000000110907
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidUpdateSection:(id)arg2;	// IMP=0x000000000011086a
- (void)didDequeueShuffledItemsInSectionedIdentifierList:(id)arg1;	// IMP=0x0000000000110788
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidChangeItems:(id)arg2 inSection:(id)arg3;	// IMP=0x00000000001106a6
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidAddItems:(id)arg2 toSection:(id)arg3;	// IMP=0x0000000000110406
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidRemoveItems:(id)arg2 fromSection:(id)arg3;	// IMP=0x0000000000110179
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidMoveItems:(id)arg2 inSection:(id)arg3;	// IMP=0x000000000010ff19
- (id)debugDescriptionForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000010fcd4
- (id)debugDescriptionForSection:(id)arg1;	// IMP=0x000000000010f958
- (void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;	// IMP=0x000000000010f745
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;	// IMP=0x000000000010f4de
- (void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2;	// IMP=0x000000000010f2f8
- (id)queueReferencesWithMaxCount:(long long)arg1;	// IMP=0x000000000010ec86
- (void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;	// IMP=0x000000000010ea36
- (void)queueCoordinator:(id)arg1 didLoadItem:(id)arg2;	// IMP=0x000000000010e8ba
- (void)queueCoordinator:(id)arg1 willLoadItem:(id)arg2;	// IMP=0x000000000010e73e
- (void)queueCoordinatorDidChangeItems:(id)arg1;	// IMP=0x000000000010e6f2
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;	// IMP=0x000000000010d2b7
@property(readonly, nonatomic) _Bool userCanEnableAutoPlay;
@property(readonly, nonatomic) _Bool userCanChangeShuffleAndRepeatType;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (void)reset;	// IMP=0x000000000010d02a
- (void)removeContentItemID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010cb98
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010c4b5
- (void)resetSharedListening;	// IMP=0x000000000010c27f
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1;	// IMP=0x000000000010c1dc
@property(readonly, nonatomic) unsigned long long supportedInsertionPositions;
@property(nonatomic) _Bool autoPlayEnabled;
@property(readonly, copy, nonatomic) NSString *revisionString;
- (void)reshuffle;	// IMP=0x000000000010b756
- (void)resetWithIdentifier:(id)arg1;	// IMP=0x000000000010b18a
- (void)currentItemDidChangeFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x000000000010ae98
- (void)moveContentItemID:(id)arg1 beforeContentItemID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000010a5b3
- (void)moveContentItemID:(id)arg1 afterContentItemID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000109fbd
- (void)jumpToFirstContentItem;	// IMP=0x0000000000109c23
- (void)jumpToContentItemID:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00000000001096e8
- (void)jumpToContentItemID:(id)arg1;	// IMP=0x00000000001096d4
- (_Bool)canJumpToContentItemID:(id)arg1;	// IMP=0x000000000010956a
- (id)itemForContentItemID:(id)arg1;	// IMP=0x0000000000109553
- (void)updateLocationDependentPropertiesForItem:(id)arg1;	// IMP=0x0000000000109384
- (_Bool)isPlaceholderItemForContentItemID:(id)arg1;	// IMP=0x00000000001092ed
- (long long)displayIndexForContentItemID:(id)arg1;	// IMP=0x0000000000108f87
@property(readonly, nonatomic) long long displayCount;
- (void)finalizeStateRestorationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000108be7
- (id)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long *)arg3;	// IMP=0x00000000001079d7
- (id)contentItemIDWithCurrentItemOffset:(long long)arg1 mode:(long long)arg2 didReachEnd:(_Bool *)arg3;	// IMP=0x00000000001079bb
- (id)contentItemIDAtIndex:(long long)arg1;	// IMP=0x00000000001077fc
- (void)clearUpNext;	// IMP=0x00000000001073ea
- (_Bool)canNextTrackForItem:(id)arg1;	// IMP=0x00000000001071a2
- (_Bool)canPreviousTrackForItem:(id)arg1;	// IMP=0x0000000000107148
- (void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(_Bool)arg3 userModification:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000106ff8
- (void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000106fd3
- (void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000106fab
- (void)addPlaybackContext:(id)arg1 afterContentItemID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000106da3
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x0000000000106d6d
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000106cd0
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x0000000000106cc4
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x0000000000106cbc
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x0000000000106cb6
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x0000000000106cae
- (void)incrementVersionForSegment:(id)arg1;	// IMP=0x0000000000106bc4
- (long long)versionForSegment:(id)arg1;	// IMP=0x0000000000106b7c
- (void)didRestoreVersion:(long long)arg1 forSegment:(id)arg2;	// IMP=0x0000000000106afa
- (id)segmentForCodingKey:(id)arg1;	// IMP=0x0000000000106ab5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000106895
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000106171
@property(readonly, nonatomic, getter=isCurrentItemFromAutoPlay) _Bool currentItemFromAutoPlay;
@property(readonly, nonatomic) _Bool containsTransportableContent;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x0000000000105c50
- (id)init;	// IMP=0x0000000000105a51

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
