//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCompositeSettingConstraint-Protocol.h>

@class NSString;

@interface HMDCompositeSettingIntegerConstraint : NSObject <HMDCompositeSettingConstraint>
{
    long long _min;	// 8 = 0x8
    long long _max;	// 16 = 0x10
    long long _step;	// 24 = 0x18
}

@property(readonly) long long step; // @synthesize step=_step;
@property(readonly) long long max; // @synthesize max=_max;
@property(readonly) long long min; // @synthesize min=_min;
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c2741
- (id)initWithMaxValue:(long long)arg1 minValue:(long long)arg2 stepValue:(long long)arg3;	// IMP=0x00000000004c26ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

