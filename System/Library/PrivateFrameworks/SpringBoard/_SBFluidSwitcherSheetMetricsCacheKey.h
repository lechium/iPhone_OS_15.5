//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>

@class UISApplicationSupportDisplayEdgeInfo;

@interface _SBFluidSwitcherSheetMetricsCacheKey : NSObject <NSCopying>
{
    struct CGSize _boundsSize;	// 8 = 0x8
    UISApplicationSupportDisplayEdgeInfo *_displayEdgeInfo;	// 24 = 0x18
    double _displayScale;	// 32 = 0x20
    long long _interfaceOrientation;	// 40 = 0x28
    unsigned long long _cachedHash;	// 48 = 0x30
    long long _userInterfaceIdiom;	// 56 = 0x38
    long long _configuration;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000217ac9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000217abe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000217a05
- (unsigned long long)hash;	// IMP=0x00000000002179fb
- (id)initWithBoundsSize:(struct CGSize)arg1 interfaceOrientation:(long long)arg2 configuration:(long long)arg3 userInterfaceIdiom:(long long)arg4 displayScale:(double)arg5 displayEdgeInfo:(id)arg6;	// IMP=0x000000000021786b

@end
