//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INStartCallContactResolutionResult
{
}

+ (id)unsupportedForReason:(long long)arg1;	// IMP=0x00000000003beb3b
+ (id)confirmationRequiredWithPersonToConfirm:(id)arg1 forReason:(long long)arg2;	// IMP=0x00000000003beaf0
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;	// IMP=0x00000000003be8a9
- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000003be728
- (id)initWithPersonResolutionResult:(id)arg1;	// IMP=0x00000000003be716

@end
