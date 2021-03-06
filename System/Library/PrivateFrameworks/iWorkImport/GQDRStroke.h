//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDColor, GQDRStrokePattern, NSString;

__attribute__((visibility("hidden")))
@interface GQDRStroke : NSObject <GQDNameMappable>
{
    float mMiterLimit;	// 8 = 0x8
    float mWidth;	// 12 = 0xc
    int mCap;	// 16 = 0x10
    int mJoin;	// 20 = 0x14
    GQDColor *mColor;	// 24 = 0x18
    GQDRStrokePattern *mPattern;	// 32 = 0x20
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x000000000000cb60
- (id)pattern;	// IMP=0x000000000000cbe9
- (id)color;	// IMP=0x000000000000cbdf
- (int)join;	// IMP=0x000000000000cbd6
- (int)cap;	// IMP=0x000000000000cbcd
- (float)width;	// IMP=0x000000000000cbc2
- (float)miterLimit;	// IMP=0x000000000000cbb7
- (void)dealloc;	// IMP=0x000000000000cb6d
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;	// IMP=0x000000000000cbf3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

