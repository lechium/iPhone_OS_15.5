//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INPlaybackRepeatModeResolutionResult
{
}

+ (id)confirmationRequiredWithPlaybackRepeatModeToConfirm:(long long)arg1;	// IMP=0x00000000003ad1f2
+ (id)successWithResolvedPlaybackRepeatMode:(long long)arg1;	// IMP=0x00000000003ad15c
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003ad47d
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000003ad385
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000003ad29d

@end

