//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarBackgroundCacheKey : NSObject <NSCopying>
{
    long long _barPosition;	// 8 = 0x8
    _Bool _usesContiguousBarBackground;	// 16 = 0x10
    double _scale;	// 24 = 0x18
    double _alpha;	// 32 = 0x20
    double _height;	// 40 = 0x28
    double _statusBarHeight;	// 48 = 0x30
    struct CGColor *_backgroundColor;	// 56 = 0x38
    struct CGColor *_strokeColor;	// 64 = 0x40
}

- (void)dealloc;	// IMP=0x00000000001cc47d
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x00000000001cc3dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001cc375
- (unsigned long long)hash;	// IMP=0x00000000001cc255
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cc24a
- (id)initWithBarPosition:(long long)arg1 usesContiguousBarBackground:(_Bool)arg2 scale:(double)arg3 alpha:(double)arg4 height:(double)arg5 statusBarHeight:(double)arg6 backgroundColor:(struct CGColor *)arg7 strokeColor:(struct CGColor *)arg8;	// IMP=0x00000000001cc196

@end

