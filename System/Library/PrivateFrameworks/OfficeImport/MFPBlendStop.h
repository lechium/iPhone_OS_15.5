//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MFPBlendStop : NSObject
{
    float mFactor;	// 8 = 0x8
    float mPosition;	// 12 = 0xc
}

- (float)position;	// IMP=0x000000000036a6d6
- (float)factor;	// IMP=0x000000000036a6cb
- (id)initWithFactor:(float)arg1 position:(float)arg2;	// IMP=0x000000000036a679

@end
