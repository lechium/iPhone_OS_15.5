//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADDuotoneEffect
{
    OADColor *mColor1;	// 16 = 0x10
    OADColor *mColor2;	// 24 = 0x18
    int mTransferMode1;	// 32 = 0x20
    int mTransferMode2;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000030c00f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030be89
- (unsigned long long)hash;	// IMP=0x000000000030bdf9
- (void)setStyleColor:(id)arg1;	// IMP=0x00000000002228cd
- (void)setTransferMode2:(int)arg1;	// IMP=0x000000000030bde9
- (int)transferMode2;	// IMP=0x000000000030bdd9
- (void)setTransferMode1:(int)arg1;	// IMP=0x000000000030bdc9
- (int)transferMode1;	// IMP=0x000000000030bdb9
- (void)setColor2:(id)arg1;	// IMP=0x00000000001fbd69
- (id)color2;	// IMP=0x000000000030bda4
- (void)setColor1:(id)arg1;	// IMP=0x00000000001fbd55
- (id)color1;	// IMP=0x000000000030bd8f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002226cf
- (id)init;	// IMP=0x00000000001fbd00

@end

