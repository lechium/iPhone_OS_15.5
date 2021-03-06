//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface HFPowerStateTargetValueTuple : NSObject
{
    NSString *_characteristicType;	// 8 = 0x8
    NSNumber *_onTargetValue;	// 16 = 0x10
    NSNumber *_offTargetValue;	// 24 = 0x18
}

+ (id)fanStateTargetValueTuple;	// IMP=0x0000000000035003
- (void).cxx_destruct;	// IMP=0x0000000000035274
@property(readonly, nonatomic) NSNumber *offTargetValue; // @synthesize offTargetValue=_offTargetValue;
@property(readonly, nonatomic) NSNumber *onTargetValue; // @synthesize onTargetValue=_onTargetValue;
@property(readonly, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
- (long long)primaryStateForTargetValue:(id)arg1;	// IMP=0x00000000000351e1
- (id)targetValueForPrimaryState:(long long)arg1;	// IMP=0x00000000000351ad
- (id)initWithCharacteristicType:(id)arg1 onTargetValue:(id)arg2 offTargetValue:(id)arg3;	// IMP=0x00000000000350f6
- (id)init;	// IMP=0x0000000000035041

@end

