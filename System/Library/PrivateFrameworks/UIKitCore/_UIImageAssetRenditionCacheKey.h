//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageAssetRenditionCacheKey : NSObject
{
    UIColor *resolvedTintColor;	// 8 = 0x8
    NSString *appearanceName;	// 16 = 0x10
    struct CGSize _size;	// 24 = 0x18
    unsigned int _drawMode;	// 40 = 0x28
    struct {
        unsigned int bold:1;
        unsigned int letterpress:1;
    } _flags;	// 44 = 0x2c
}

+ (id)keyWithSize:(struct CGSize)arg1 unresolvedTintColor:(id)arg2 traitCollection:(id)arg3 bold:(_Bool)arg4 letterpress:(_Bool)arg5 drawMode:(unsigned int)arg6;	// IMP=0x0000000000843bdc
- (void).cxx_destruct;	// IMP=0x0000000000843f02
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000843d69
- (unsigned long long)hash;	// IMP=0x0000000000843cd2

@end
