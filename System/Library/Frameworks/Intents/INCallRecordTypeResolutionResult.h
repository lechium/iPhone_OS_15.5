//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INCallRecordTypeResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;	// IMP=0x00000000002c203c
+ (id)confirmationRequiredWithCallRecordTypeToConfirm:(long long)arg1;	// IMP=0x00000000002c1f91
+ (id)successWithResolvedValue:(long long)arg1;	// IMP=0x00000000002c1f7f
+ (id)successWithResolvedCallRecordType:(long long)arg1;	// IMP=0x00000000002c1ee9
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c22b0
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000002c215f
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000002c204e

@end

