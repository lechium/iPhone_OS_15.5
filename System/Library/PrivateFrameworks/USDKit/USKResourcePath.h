//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface USKResourcePath : NSObject
{
    struct SdfAssetPath _path;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000427d5d
- (void).cxx_destruct;	// IMP=0x0000000000427d29
- (unsigned long long)hash;	// IMP=0x0000000000427d1b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000427b5c
- (id)resolvedPath;	// IMP=0x0000000000427ad0
- (id)path;	// IMP=0x0000000000427a44
- (id)initWithSdfAssetPath:(struct SdfAssetPath)arg1;	// IMP=0x00000000004279af
- (struct SdfAssetPath)sdfAssetPath;	// IMP=0x000000000042795e

@end
