//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADFill <NSCopying>
{
    _Bool mDefinedByStyle;	// 17 = 0x11
    _Bool _definedByStyle;	// 18 = 0x12
}

@property _Bool definedByStyle; // @synthesize definedByStyle=_definedByStyle;
- (id)description;	// IMP=0x000000000031192d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033959
- (unsigned long long)hash;	// IMP=0x00000000001036ed
- (_Bool)isOverridden;	// IMP=0x0000000000311918
- (_Bool)usesPlaceholderColor;	// IMP=0x0000000000311910
- (void)setStyleColor:(id)arg1;	// IMP=0x000000000031190a
- (float)alpha;	// IMP=0x00000000000a7d98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000311900

@end
