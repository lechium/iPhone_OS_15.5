//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVWeakReference, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionNilOption
{
    id _groupID;	// 16 = 0x10
    id _groupMediaType;	// 24 = 0x18
    NSDictionary *_dictionary;	// 32 = 0x20
    AVWeakReference *_weakReferenceToGroup;	// 40 = 0x28
    _Bool _displaysNonForcedSubtitles;	// 48 = 0x30
}

- (id)description;	// IMP=0x0000000000103902
- (_Bool)_representsNilSelection;	// IMP=0x00000000001038fa
- (_Bool)isPlayable;	// IMP=0x00000000001038f2
- (id)_groupMediaType;	// IMP=0x00000000001038e1
- (id)_groupID;	// IMP=0x00000000001038d0
- (id)group;	// IMP=0x00000000001038b3
- (id)dictionary;	// IMP=0x00000000001038a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010382d
- (void)dealloc;	// IMP=0x00000000001037b9
- (id)initWithGroup:(id)arg1;	// IMP=0x000000000010365e

@end
