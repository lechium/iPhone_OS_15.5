//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADSchemeColor
{
    int mIndex;	// 16 = 0x10
}

+ (id)schemeColorWithIndex:(int)arg1;	// IMP=0x000000000020a004
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000339b7
- (unsigned long long)hash;	// IMP=0x0000000000033b28
- (int)schemeColorIndex;	// IMP=0x00000000000a5d30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019712c
- (id)initWithSchemeColorIndex:(int)arg1;	// IMP=0x000000000000b6a2

@end
