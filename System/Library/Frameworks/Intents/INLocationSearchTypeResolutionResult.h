//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INLocationSearchTypeResolutionResult
{
}

+ (id)confirmationRequiredWithLocationSearchTypeToConfirm:(long long)arg1;	// IMP=0x00000000001c5c90
+ (id)successWithResolvedLocationSearchType:(long long)arg1;	// IMP=0x00000000001c5bfa
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c5f02
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000001c5e2b
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000001c5d3b

@end

