//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage, _UIImageViewPretiledImageCacheKey;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageWrapper : NSObject
{
    UIImage *_pretiledImage;	// 8 = 0x8
    _UIImageViewPretiledImageCacheKey *_cacheKey;	// 16 = 0x10
}

+ (id)cacheValueWithPretiledImage:(id)arg1 cacheKey:(id)arg2;	// IMP=0x000000000125ae22
- (void).cxx_destruct;	// IMP=0x000000000125afb5
@property(readonly, nonatomic) UIImage *pretiledImage; // @synthesize pretiledImage=_pretiledImage;
- (id)description;	// IMP=0x000000000125af6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000125af1b
- (unsigned long long)hash;	// IMP=0x000000000125af05
- (void)dealloc;	// IMP=0x000000000125aebc

@end

