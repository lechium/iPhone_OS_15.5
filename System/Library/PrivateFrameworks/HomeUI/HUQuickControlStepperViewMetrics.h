//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlStepperViewMetrics : NSObject
{
    HUIntrinsicSizeDescriptor *_sizeDescriptor;	// 8 = 0x8
    unsigned long long _orientation;	// 16 = 0x10
    double _cornerRadius;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000043b78
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) HUIntrinsicSizeDescriptor *sizeDescriptor; // @synthesize sizeDescriptor=_sizeDescriptor;
- (id)initWithSizeDescriptor:(id)arg1 orientation:(unsigned long long)arg2 cornerRadius:(double)arg3;	// IMP=0x0000000000043ad4

@end

