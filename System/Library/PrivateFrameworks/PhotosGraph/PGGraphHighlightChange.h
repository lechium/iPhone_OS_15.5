//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PGGraphHighlightChange
{
    NSString *_highlightUUID;	// 8 = 0x8
    unsigned long long _updateTypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004516b6
@property(readonly, nonatomic) unsigned long long updateTypes; // @synthesize updateTypes=_updateTypes;
@property(readonly, nonatomic) NSString *highlightUUID; // @synthesize highlightUUID=_highlightUUID;
- (id)description;	// IMP=0x0000000000451607
- (void)mergeChange:(id)arg1;	// IMP=0x00000000004515cd
- (unsigned long long)type;	// IMP=0x00000000004515c2
- (id)initWithHighlightUUID:(id)arg1 updateTypes:(unsigned long long)arg2;	// IMP=0x0000000000451542

@end
