//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INPaymentStatusResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;	// IMP=0x0000000000155b9a
+ (id)confirmationRequiredWithPaymentStatusToConfirm:(long long)arg1;	// IMP=0x0000000000155aef
+ (id)successWithResolvedValue:(long long)arg1;	// IMP=0x0000000000155add
+ (id)successWithResolvedPaymentStatus:(long long)arg1;	// IMP=0x0000000000155a47
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000155dbc
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000155c95
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000155bac

@end

