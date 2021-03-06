//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDataProviderValue-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface HKGenericDataProviderCurrentValue : NSObject <HKDataProviderValue>
{
    NSNumber *_value;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000023319e
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;	// IMP=0x0000000000233112
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;	// IMP=0x0000000000233016
- (id)initWithValue:(id)arg1;	// IMP=0x0000000000232fbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

