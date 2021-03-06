//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVDispatchOnce, AVDisplayCriteria, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface AVFigAssetInspector
{
    struct OpaqueFigAsset *_figAsset;	// 8 = 0x8
    struct OpaqueFigFormatReader *_formatReader;	// 16 = 0x10
    AVDispatchOnce *_formatReaderOnce;	// 24 = 0x18
    AVDispatchOnce *_checkIsStreamingOnce;	// 32 = 0x20
    AVDispatchOnce *_makeDisplayCriteriaOnce;	// 40 = 0x28
    AVDisplayCriteria *_displayCriteria;	// 48 = 0x30
    _Bool _isStreaming;	// 56 = 0x38
    _Bool didCheckForSaveRestriction;	// 57 = 0x39
    _Bool hasSaveRestriction;	// 58 = 0x3a
}

- (id)preferredDisplayCriteria;	// IMP=0x00000000000dcb81
- (id)availableVideoDynamicRanges;	// IMP=0x00000000000dcb65
- (struct CGSize)maximumVideoResolution;	// IMP=0x00000000000dcb49
- (id)makePropertyListForProxyWithOptions:(id)arg1;	// IMP=0x00000000000dc22c
- (id)propertyListForProxy;	// IMP=0x00000000000dc1cf
- (id)_nameForProxy;	// IMP=0x00000000000dc114
- (id)_assetAnalysisMessages;	// IMP=0x00000000000dc0f8
- (_Bool)supportsAnalysisReporting;	// IMP=0x00000000000dc0d6
- (CDStruct_1b6d18a9)overallDurationHint;	// IMP=0x00000000000dc095
- (long long)fragmentCount;	// IMP=0x00000000000dc076
- (long long)firstFragmentSequenceNumber;	// IMP=0x00000000000dc057
- (_Bool)containsFragments;	// IMP=0x00000000000dc035
- (_Bool)canContainFragments;	// IMP=0x00000000000dc013
- (id)SHA1Digest;	// IMP=0x00000000000dbff7
- (_Bool)isCompatibleWithAirPlayVideo;	// IMP=0x00000000000dbfd5
- (_Bool)isCompatibleWithSavedPhotosAlbum;	// IMP=0x00000000000dbf85
- (_Bool)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1;	// IMP=0x00000000000dbf63
- (_Bool)isPlayable;	// IMP=0x00000000000dbefb
@property(readonly, nonatomic, getter=_isStreaming) _Bool streaming;
@property(readonly, nonatomic) _Bool hasProtectedContent;
@property(readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;
@property(readonly, nonatomic) unsigned long long downloadToken;
@property(readonly, nonatomic) NSURL *originalNetworkContentURL;
@property(readonly, nonatomic) NSURL *resolvedURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSArray *figChapters;
@property(readonly, nonatomic) NSArray *figChapterGroupInfo;
- (_Bool)isComposable;	// IMP=0x00000000000dbbd8
- (_Bool)isReadable;	// IMP=0x00000000000dbb9a
- (_Bool)isExportable;	// IMP=0x00000000000dbb5c
- (_Bool)_hasQTSaveRestriction;	// IMP=0x00000000000dba5d
- (id)metadataForFormat:(id)arg1;	// IMP=0x00000000000db7be
- (id)availableMetadataFormats;	// IMP=0x00000000000db7a2
- (id)commonMetadata;	// IMP=0x00000000000db61b
- (id)lyrics;	// IMP=0x00000000000db5ff
- (id)creationDate;	// IMP=0x00000000000db526
- (id)_mediaSelectionGroupDictionaries;	// IMP=0x00000000000db50a
- (id)trackReferences;	// IMP=0x00000000000db4ee
- (id)alternateTrackGroups;	// IMP=0x00000000000db4d2
- (long long)trackCount;	// IMP=0x00000000000db49d
- (_Bool)providesPreciseDurationAndTiming;	// IMP=0x00000000000db47b
- (CDStruct_1b6d18a9)minimumTimeOffsetFromLive;	// IMP=0x00000000000db410
- (int)naturalTimeScale;	// IMP=0x00000000000db374
- (struct CGSize)naturalSize;	// IMP=0x00000000000db345
- (struct CGAffineTransform)preferredTransform;	// IMP=0x00000000000db304
- (float)preferredSoundCheckVolumeNormalization;	// IMP=0x00000000000db2e5
- (float)preferredVolume;	// IMP=0x00000000000db2c1
- (float)preferredRate;	// IMP=0x00000000000db29d
@property(readonly, nonatomic) NSArray *variants;
- (CDStruct_1b6d18a9)duration;	// IMP=0x00000000000db167
- (id)_instanceIdentifier;	// IMP=0x00000000000db14b
- (id)identifyingTag;	// IMP=0x00000000000db12f
- (id)identifyingTagClass;	// IMP=0x00000000000db0d7
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x00000000000db05e
@property(readonly, nonatomic, getter=_formatReader) struct OpaqueFigFormatReader *formatReader;
@property(readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset *figAsset;
- (unsigned long long)hash;	// IMP=0x00000000000daf31
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000daeae
- (void)dealloc;	// IMP=0x00000000000dae04
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;	// IMP=0x00000000000dad57

@end

