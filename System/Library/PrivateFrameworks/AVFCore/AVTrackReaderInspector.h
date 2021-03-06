//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVDispatchOnce, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVTrackReaderInspector
{
    struct OpaqueFigFormatReader *_formatReader;	// 32 = 0x20
    struct OpaqueFigTrackReader *_trackReader;	// 40 = 0x28
    AVDispatchOnce *_copySampleCursorServiceOnce;	// 48 = 0x30
    struct OpaqueFigSampleCursorService *_figSampleCursorService;	// 56 = 0x38
    _Bool _sampleCursorTimeAccuracyIsExact;	// 64 = 0x40
    int _trackID;	// 68 = 0x44
    unsigned int _mediaType;	// 72 = 0x48
    AVWeakReference *_weakReferenceToAsset;	// 80 = 0x50
}

- (unsigned long long)hash;	// IMP=0x00000000000e995f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e98dc
- (_Bool)isExcludedFromAutoselectionInTrackGroup;	// IMP=0x00000000000e98ba
- (id)_trackReferences;	// IMP=0x00000000000e9611
- (long long)provisionalAlternateGroupID;	// IMP=0x00000000000e95f0
- (long long)defaultAlternateGroupID;	// IMP=0x00000000000e95cf
- (long long)alternateGroupID;	// IMP=0x00000000000e95ae
- (id)metadataForFormat:(id)arg1;	// IMP=0x00000000000e93f2
- (id)availableMetadataFormats;	// IMP=0x00000000000e9221
- (id)commonMetadata;	// IMP=0x00000000000e9058
- (CDStruct_1b6d18a9)latentBaseDecodeTimeStampOfFirstTrackFragment;	// IMP=0x00000000000e8fa9
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000e8cea
- (id)segments;	// IMP=0x00000000000e8954
- (CDStruct_1b6d18a9)minSampleDuration;	// IMP=0x00000000000e88e9
- (float)nominalFrameRate;	// IMP=0x00000000000e88cd
- (id)loudnessInfo;	// IMP=0x00000000000e884a
- (float)preferredVolume;	// IMP=0x00000000000e87bf
- (long long)layer;	// IMP=0x00000000000e879e
- (struct CGAffineTransform)preferredTransform;	// IMP=0x00000000000e875d
- (struct CGSize)dimensions;	// IMP=0x00000000000e8741
- (struct CGSize)naturalSize;	// IMP=0x00000000000e86d6
- (id)extendedLanguageTag;	// IMP=0x00000000000e86ba
- (id)mediaCharacteristics;	// IMP=0x00000000000e866e
- (id)languageCode;	// IMP=0x00000000000e8652
- (float)peakDataRate;	// IMP=0x00000000000e862d
- (float)estimatedDataRate;	// IMP=0x00000000000e8608
- (int)naturalTimeScale;	// IMP=0x00000000000e85ec
- (_Bool)hasAudioSampleDependencies;	// IMP=0x00000000000e856a
- (_Bool)requiresFrameReordering;	// IMP=0x00000000000e8548
- (CDStruct_e83c9415)timeRange;	// IMP=0x00000000000e8278
- (long long)totalSampleDataLength;	// IMP=0x00000000000e825c
- (int)decodabilityValidationResult;	// IMP=0x00000000000e81f0
- (_Bool)isDecodable;	// IMP=0x00000000000e81d8
- (int)playabilityValidationResult;	// IMP=0x00000000000e816c
- (_Bool)isPlayable;	// IMP=0x00000000000e8154
- (_Bool)isSelfContained;	// IMP=0x00000000000e8132
- (_Bool)isEnabled;	// IMP=0x00000000000e8110
- (id)formatDescriptions;	// IMP=0x00000000000e80f4
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x00000000000e807b
- (struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(_Bool *)arg1;	// IMP=0x00000000000e7f22
- (struct OpaqueFigTrackReader *)_figTrackReader;	// IMP=0x00000000000e7f11
- (id)mediaType;	// IMP=0x00000000000e7ebf
- (unsigned int)_figMediaType;	// IMP=0x00000000000e7eaf
- (int)trackID;	// IMP=0x00000000000e7e9f
- (id)asset;	// IMP=0x00000000000e7e82
- (void)dealloc;	// IMP=0x00000000000e7df0
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;	// IMP=0x00000000000e7c65

@end

