//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INCarAudioSourceResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;	// IMP=0x00000000002394b1
+ (id)confirmationRequiredWithCarAudioSourceToConfirm:(long long)arg1;	// IMP=0x0000000000239406
+ (id)successWithResolvedValue:(long long)arg1;	// IMP=0x00000000002393f4
+ (id)successWithResolvedCarAudioSource:(long long)arg1;	// IMP=0x000000000023935e
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000239708
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000002395ac
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000002394c3

@end
