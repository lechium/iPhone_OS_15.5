//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDataProviderValue-Protocol.h>

@class HKQuantity, NSDate, NSString;

@interface HKBloodPressureDataProviderCurrentValue : NSObject <HKDataProviderValue>
{
    NSDate *_date;	// 8 = 0x8
    HKQuantity *_systolicValue;	// 16 = 0x10
    HKQuantity *_diastolicValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000233f76
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;	// IMP=0x0000000000233f05
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;	// IMP=0x0000000000233b8c
- (id)date;	// IMP=0x0000000000233b7e
- (id)_quantityForType:(id)arg1 correlation:(id)arg2;	// IMP=0x0000000000233ade
- (id)initWithSystolicValue:(id)arg1 diastolicValue:(id)arg2 date:(id)arg3;	// IMP=0x0000000000233a27
- (id)initWithCorrelation:(id)arg1;	// IMP=0x00000000002338e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
