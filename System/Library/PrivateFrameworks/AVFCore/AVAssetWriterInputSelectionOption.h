//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterInput, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputSelectionOption
{
    AVAssetWriterInput *_input;	// 16 = 0x10
    NSString *_mediaType;	// 24 = 0x18
    NSDictionary *_outputSettings;	// 32 = 0x20
    struct opaqueCMFormatDescription *_sourceFormatHint;	// 40 = 0x28
    NSString *_languageCode;	// 48 = 0x30
    NSString *_extendedLanguageTag;	// 56 = 0x38
    NSArray *_metadata;	// 64 = 0x40
    NSDictionary *_trackReferences;	// 72 = 0x48
    _Bool _displaysNonForcedSubtitles;	// 80 = 0x50
    _Bool _enabled;	// 81 = 0x51
}

+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;	// IMP=0x000000000009884d
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1;	// IMP=0x0000000000098817
@property(readonly, nonatomic) _Bool displaysNonForcedSubtitles; // @synthesize displaysNonForcedSubtitles=_displaysNonForcedSubtitles;
@property(readonly, nonatomic) NSDictionary *trackReferences; // @synthesize trackReferences=_trackReferences;
@property(readonly, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSString *extendedLanguageTag; // @synthesize extendedLanguageTag=_extendedLanguageTag;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *sourceFormatHint; // @synthesize sourceFormatHint=_sourceFormatHint;
@property(readonly, nonatomic) NSDictionary *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) AVAssetWriterInput *input; // @synthesize input=_input;
- (id)propertyList;	// IMP=0x0000000000099743
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;	// IMP=0x0000000000099490
- (id)metadataForFormat:(id)arg1;	// IMP=0x0000000000099289
- (id)availableMetadataFormats;	// IMP=0x0000000000099090
- (id)commonMetadata;	// IMP=0x0000000000099027
- (id)locale;	// IMP=0x0000000000098fe7
- (_Bool)_isDesignatedDefault;	// IMP=0x0000000000098fd7
- (_Bool)isPlayable;	// IMP=0x0000000000098f72
- (_Bool)_isAuxiliaryContent;	// IMP=0x0000000000098f21
- (id)_taggedCharacteristics;	// IMP=0x0000000000098e69
- (id)mediaSubTypes;	// IMP=0x0000000000098cf6
- (id)_ancillaryDescription;	// IMP=0x0000000000098ce9
- (unsigned long long)hash;	// IMP=0x0000000000098c3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000098b45
- (_Bool)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2;	// IMP=0x0000000000098ad8
- (void)dealloc;	// IMP=0x0000000000098a25
- (id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;	// IMP=0x000000000009889c
- (id)initWithAssetWriterInput:(id)arg1;	// IMP=0x0000000000098888

@end

