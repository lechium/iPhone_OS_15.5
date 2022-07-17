//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>

@interface _UIFontCacheKey : NSObject <NSCopying>
{
    unsigned long long _hash;	// 8 = 0x8
}

+ (id)newFontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 textLegibility:(_Bool)arg6;	// IMP=0x00000000000c2389
+ (id)newFontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2 textLegibility:(_Bool)arg3;	// IMP=0x00000000000c230d
+ (id)newSystemFontCacheKeyWithDesign:(id)arg1 weight:(double)arg2 pointSize:(double)arg3 monospacedDigits:(_Bool)arg4;	// IMP=0x00000000000c225e
+ (id)newSystemFontCacheKeyWithTraits:(int)arg1 pointSize:(double)arg2;	// IMP=0x00000000000c21e0
+ (id)newFontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(double)arg3;	// IMP=0x00000000000c2161
- (void)_precalculateHash;	// IMP=0x00000000000c24dd
- (unsigned long long)_hash;	// IMP=0x00000000000c24d5
- (unsigned long long)hash;	// IMP=0x00000000000c24cb
- (_Bool)_isEqualToKey:(id)arg1;	// IMP=0x00000000000c24c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c244d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c2156

@end
