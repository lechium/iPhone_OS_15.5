//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TTBulletTextAttributesCacheKey : NSObject
{
    unsigned long long _hashValue;	// 8 = 0x8
}

@property(nonatomic) unsigned long long hashValue; // @synthesize hashValue=_hashValue;
- (unsigned long long)hash;	// IMP=0x00000000000405f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040571
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040566
- (id)initWithTextFont:(id)arg1 paragraphStyle:(id)arg2 zoomFactor:(double)arg3;	// IMP=0x0000000000040477

@end
