//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INOutgoingMessageTypeResolutionResult
{
}

+ (id)confirmationRequiredWithOutgoingMessageTypeToConfirm:(long long)arg1;	// IMP=0x000000000048ab1e
+ (id)successWithResolvedOutgoingMessageType:(long long)arg1;	// IMP=0x000000000048aa88
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000048ada3
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000048acbd
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000048abc9

@end

