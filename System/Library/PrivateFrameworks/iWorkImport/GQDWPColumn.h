//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQDWPColumn : NSObject
{
    long long mIndex;	// 8 = 0x8
    float mWidth;	// 16 = 0x10
    float mSpacing;	// 20 = 0x14
    _Bool mHasSpacing;	// 24 = 0x18
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x000000000001ea10
- (float)spacing;	// IMP=0x000000000001eabd
- (_Bool)hasSpacing;	// IMP=0x000000000001eab4
- (float)width;	// IMP=0x000000000001eaa9
- (long long)index;	// IMP=0x000000000001ea9f
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;	// IMP=0x000000000001ea1d

@end

