//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INTaskStatusResolutionResult
{
}

+ (id)confirmationRequiredWithTaskStatusToConfirm:(long long)arg1;	// IMP=0x0000000000204c04
+ (id)successWithResolvedTaskStatus:(long long)arg1;	// IMP=0x0000000000204b6e
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000204e7e
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000204d98
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000204caf

@end
