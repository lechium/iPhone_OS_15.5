//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemInspectorLoader
{
    struct OpaqueFigPlaybackItem *_playbackItem;	// 72 = 0x48
    NSArray *_trackIDs;	// 80 = 0x50
    _Bool _shouldCacheDuration;	// 88 = 0x58
    CDStruct_1b6d18a9 _cachedDuration;	// 92 = 0x5c
}

- (CDStruct_1b6d18a9)duration;	// IMP=0x00000000000e27c5
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;	// IMP=0x00000000000e271a
- (id)_playbackItemPropertiesForKeys:(id)arg1;	// IMP=0x00000000000e2673
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// IMP=0x00000000000e2647
- (_Bool)_inspectionRequiresAFormatReader;	// IMP=0x00000000000e263f
- (struct OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)arg1;	// IMP=0x00000000000e25db
- (Class)_classForTrackInspectors;	// IMP=0x00000000000e25ca
@property(readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem *playbackItem;
- (void)cancelLoading;	// IMP=0x00000000000e255a
- (id)assetInspector;	// IMP=0x00000000000e2505
- (unsigned long long)hash;	// IMP=0x00000000000e24b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2431
- (void)dealloc;	// IMP=0x00000000000e23cd
- (void)_removeFigObjectNotifications;	// IMP=0x00000000000e2305
- (void)_addFigObjectNotifications;	// IMP=0x00000000000e1f9b
- (id)initWithURL:(id)arg1 playbackItem:(struct OpaqueFigPlaybackItem *)arg2 trackIDs:(id)arg3 dynamicBehavior:(_Bool)arg4;	// IMP=0x00000000000e1ed4

@end

