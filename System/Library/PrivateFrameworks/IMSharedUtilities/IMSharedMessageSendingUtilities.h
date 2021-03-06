//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMSharedMessageSendingUtilities : NSObject
{
    long long _serviceAvailability;	// 8 = 0x8
}

+ (void)_setupAccountMonitor;	// IMP=0x0000000000048144
+ (id)sharedInstance;	// IMP=0x00000000000480ff
+ (void)initialize;	// IMP=0x000000000004809e
@property long long serviceAvailability; // @synthesize serviceAvailability=_serviceAvailability;
- (_Bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;	// IMP=0x0000000000048574
- (long long)_maxMMSMessageByteCount;	// IMP=0x0000000000048554
- (long long)_maxMMSAttachmentCount;	// IMP=0x0000000000048534
- (_Bool)_isiMessageSupported;	// IMP=0x000000000004852c
- (_Bool)isSupportedAttachmentUTI:(id)arg1;	// IMP=0x0000000000048472
- (_Bool)isiMessageEnabled;	// IMP=0x000000000004841e
- (_Bool)isMMSEnabled;	// IMP=0x00000000000483fc
- (_Bool)canSendText;	// IMP=0x0000000000048395
- (id)_managedConfigAppAllowlist;	// IMP=0x0000000000048363
- (void)_updateServiceAvailability;	// IMP=0x0000000000048252
- (_Bool)_canSendText;	// IMP=0x0000000000048219
- (_Bool)_hasSMSCapability;	// IMP=0x0000000000048208

@end

