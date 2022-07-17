//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVFormatReaderInspector
{
    struct OpaqueFigFormatReader *_formatReader;	// 8 = 0x8
    _Bool didCheckForSaveRestriction;	// 16 = 0x10
    _Bool hasSaveRestriction;	// 17 = 0x11
}

- (CDStruct_1b6d18a9)overallDurationHint;	// IMP=0x00000000000da8c8
- (long long)fragmentCount;	// IMP=0x00000000000da8a9
- (long long)firstFragmentSequenceNumber;	// IMP=0x00000000000da88a
- (_Bool)containsFragments;	// IMP=0x00000000000da868
- (_Bool)canContainFragments;	// IMP=0x00000000000da846
- (_Bool)isComposable;	// IMP=0x00000000000da831
- (_Bool)isReadable;	// IMP=0x00000000000da81c
- (_Bool)isExportable;	// IMP=0x00000000000da807
- (_Bool)_hasQTSaveRestriction;	// IMP=0x00000000000da6e0
- (id)metadataForFormat:(id)arg1;	// IMP=0x00000000000da51f
- (id)availableMetadataFormats;	// IMP=0x00000000000da349
- (id)commonMetadata;	// IMP=0x00000000000da17e
- (id)lyrics;	// IMP=0x00000000000da162
- (id)trackReferences;	// IMP=0x00000000000da146
- (id)alternateTrackGroups;	// IMP=0x00000000000da12a
- (long long)trackCount;	// IMP=0x00000000000da0d1
- (_Bool)providesPreciseDurationAndTiming;	// IMP=0x00000000000da0af
- (CDStruct_1b6d18a9)minimumTimeOffsetFromLive;	// IMP=0x00000000000da091
- (int)naturalTimeScale;	// IMP=0x00000000000da075
- (struct CGSize)naturalSize;	// IMP=0x00000000000da046
- (struct CGAffineTransform)preferredTransform;	// IMP=0x00000000000da005
- (float)preferredSoundCheckVolumeNormalization;	// IMP=0x00000000000d9fe6
- (float)preferredVolume;	// IMP=0x00000000000d9fc2
- (float)preferredRate;	// IMP=0x00000000000d9f9e
- (CDStruct_1b6d18a9)duration;	// IMP=0x00000000000d9f2e
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x00000000000d9eb5
@property(retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) struct OpaqueFigFormatReader *formatReader;
- (unsigned long long)hash;	// IMP=0x00000000000d9e12
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d9d8f
- (void)dealloc;	// IMP=0x00000000000d9d4f
- (id)initWithFormatReader:(struct OpaqueFigFormatReader *)arg1;	// IMP=0x00000000000d9ce7

@end
