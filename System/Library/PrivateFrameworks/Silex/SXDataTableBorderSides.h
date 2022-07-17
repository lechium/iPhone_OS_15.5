//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SXDataTableBorder, SXUnitConverter;

@interface SXDataTableBorderSides
{
    SXUnitConverter *_unitConverter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002f09a
@property(retain, nonatomic) SXUnitConverter *unitConverter; // @synthesize unitConverter=_unitConverter;
- (id)borderForValue:(id)arg1;	// IMP=0x000000000002ee21
- (id)leftWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x000000000002ee0f
- (id)bottomWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x000000000002edfd
- (id)rightWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x000000000002edeb
- (id)topWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x000000000002edd9

// Remaining properties
@property(readonly, nonatomic) SXDataTableBorder *bottom; // @dynamic bottom;
@property(readonly, nonatomic) SXDataTableBorder *left; // @dynamic left;
@property(readonly, nonatomic) SXDataTableBorder *right; // @dynamic right;
@property(readonly, nonatomic) SXDataTableBorder *top; // @dynamic top;

@end
