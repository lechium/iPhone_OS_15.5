//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INRelativeSettingResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;	// IMP=0x000000000024a15b
+ (id)confirmationRequiredWithRelativeSettingToConfirm:(long long)arg1;	// IMP=0x000000000024a0b0
+ (id)successWithResolvedValue:(long long)arg1;	// IMP=0x000000000024a09e
+ (id)successWithResolvedRelativeSetting:(long long)arg1;	// IMP=0x000000000024a008
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000024a370
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000024a256
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000024a16d

@end
