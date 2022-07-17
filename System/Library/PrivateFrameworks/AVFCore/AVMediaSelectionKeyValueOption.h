//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVWeakReference, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionKeyValueOption
{
    id _groupID;	// 16 = 0x10
    id _groupMediaType;	// 24 = 0x18
    NSString *_optionMediaType;	// 32 = 0x20
    NSDictionary *_dictionary;	// 40 = 0x28
    AVWeakReference *_weakReferenceToGroup;	// 48 = 0x30
    _Bool _displaysNonForcedSubtitles;	// 56 = 0x38
}

- (id)metadataForFormat:(id)arg1;	// IMP=0x0000000000103645
- (id)availableMetadataFormats;	// IMP=0x000000000010362c
- (id)commonMetadata;	// IMP=0x00000000001034f2
- (id)locale;	// IMP=0x000000000010348c
- (_Bool)isPlayable;	// IMP=0x0000000000103484
- (id)mediaType;	// IMP=0x0000000000103473
- (id)_groupMediaType;	// IMP=0x0000000000103462
- (id)_groupID;	// IMP=0x0000000000103451
- (id)group;	// IMP=0x0000000000103434
- (id)dictionary;	// IMP=0x0000000000103423
- (unsigned long long)hash;	// IMP=0x00000000001033b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001032c8
- (void)dealloc;	// IMP=0x0000000000103246
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;	// IMP=0x00000000001030f0

@end
