//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TKTonePickerItem;

@interface TKToneClassicsPickerItem
{
    TKTonePickerItem *_parentItem;	// 8 = 0x8
    long long _classicToneIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000286a0
@property(nonatomic, setter=_setClassicToneIndex:) long long classicToneIndex; // @synthesize classicToneIndex=_classicToneIndex;
@property(nonatomic, setter=_setParentItem:) __weak TKTonePickerItem *parentItem; // @synthesize parentItem=_parentItem;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;	// IMP=0x00000000000285c8
- (id)childItemAtIndex:(long long)arg1;	// IMP=0x00000000000285c0

@end

