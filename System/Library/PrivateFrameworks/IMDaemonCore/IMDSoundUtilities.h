//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDSoundUtilities : NSObject
{
}

+ (_Bool)_isAutoPlay:(id)arg1;	// IMP=0x0000000000017585
+ (_Bool)_isAcknowledgmentMessage:(id)arg1;	// IMP=0x0000000000017562
+ (_Bool)_isAssociatedMessage:(id)arg1;	// IMP=0x0000000000017546
+ (void)_stopSuppressingForGUID:(id)arg1;	// IMP=0x000000000001752c
+ (_Bool)_isSuppressedForGUID:(id)arg1;	// IMP=0x00000000000174e4
+ (_Bool)_wasDowngraded:(id)arg1;	// IMP=0x00000000000174c8
+ (_Bool)_isSMSMessage:(id)arg1;	// IMP=0x0000000000017493
+ (void)_playSMSSound;	// IMP=0x0000000000017484
+ (void)_playAcknowledgmentSentSound;	// IMP=0x0000000000017475
+ (unsigned int)_installSystemSound:(id)arg1;	// IMP=0x00000000000173a4
+ (void)_playSoundType:(long long)arg1;	// IMP=0x0000000000017364
+ (long long)_smsSoundsToPlay;	// IMP=0x0000000000017314
+ (long long)_soundTypeForMessage:(id)arg1;	// IMP=0x000000000001713a
+ (void)playMessageSentSoundIfNeeded:(id)arg1;	// IMP=0x0000000000017093

@end

