//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQDColor : NSObject <GQDNameMappable>
{
    double mRed;	// 8 = 0x8
    double mGreen;	// 16 = 0x10
    double mBlue;	// 24 = 0x18
    double mAlpha;	// 32 = 0x20
}

+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3;	// IMP=0x000000000000822e
+ (id)blackColor;	// IMP=0x0000000000008213
+ (const struct StateSpec *)stateForReading;	// IMP=0x0000000000008206
+ (id)cmykColorFromReader:(struct _xmlTextReader *)arg1;	// IMP=0x0000000000008921
+ (id)whiteColorFromReader:(struct _xmlTextReader *)arg1 calibrated:(_Bool)arg2;	// IMP=0x0000000000008884
+ (id)rgbColorFromReader:(struct _xmlTextReader *)arg1 calibrated:(_Bool)arg2;	// IMP=0x00000000000087a3
+ (void)readColorFromProcessor:(id)arg1 reader:(struct _xmlTextReader *)arg2;	// IMP=0x00000000000084ba
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;	// IMP=0x00000000000083b3
- (double)alphaComponent;	// IMP=0x00000000000083a8
- (double)blueComponent;	// IMP=0x000000000000839d
- (double)greenComponent;	// IMP=0x0000000000008392
- (double)redComponent;	// IMP=0x0000000000008387
- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000008347
@property(readonly, copy) NSString *description;
- (id)initWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x0000000000008286
- (int)htmlBlue;	// IMP=0x000000000004c620
- (int)htmlGreen;	// IMP=0x000000000004c5fe
- (int)htmlRed;	// IMP=0x000000000004c5dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

