//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADLineEnd <NSCopying>
{
    unsigned char mType;	// 17 = 0x11
    unsigned char mWidth;	// 18 = 0x12
    unsigned char mLength;	// 19 = 0x13
    unsigned int mIsTypeOverridden:1;	// 20 = 0x14
    unsigned int mIsWidthOverridden:1;	// 20 = 0x14
    unsigned int mIsLengthOverridden:1;	// 20 = 0x14
}

+ (id)stringForLineEndLength:(unsigned char)arg1;	// IMP=0x0000000000322342
+ (id)stringForLineEndWidth:(unsigned char)arg1;	// IMP=0x000000000032230c
+ (id)stringForLineEndType:(unsigned char)arg1;	// IMP=0x00000000003222a1
+ (id)defaultProperties;	// IMP=0x000000000001fa46
- (id)description;	// IMP=0x0000000000322378
- (_Bool)isLengthOverridden;	// IMP=0x000000000014a243
- (void)setLength:(unsigned char)arg1;	// IMP=0x000000000001fb4c
- (unsigned char)length;	// IMP=0x000000000014a201
- (_Bool)isWidthOverridden;	// IMP=0x000000000014a1db
- (void)setWidth:(unsigned char)arg1;	// IMP=0x000000000001fb30
- (unsigned char)width;	// IMP=0x000000000014a199
- (_Bool)isTypeOverridden;	// IMP=0x000000000014a173
- (void)setType:(unsigned char)arg1;	// IMP=0x000000000001fb14
- (unsigned char)type;	// IMP=0x000000000014a131
- (void)removeUnnecessaryOverrides;	// IMP=0x0000000000322057
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x0000000000321e3d
- (_Bool)isAnythingOverridden;	// IMP=0x0000000000321dc3
- (unsigned long long)hash;	// IMP=0x0000000000103751
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a3eff
- (id)initWithType:(unsigned char)arg1 width:(unsigned char)arg2 length:(unsigned char)arg3;	// IMP=0x0000000000321cda
- (id)initWithDefaults;	// IMP=0x000000000001fa76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001fb68

@end

