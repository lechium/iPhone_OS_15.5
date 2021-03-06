//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UIWillPresentNotificationAction : BSAction
{
    _Bool _isDeliverable;	// 8 = 0x8
    UNNotification *_notification;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000721669
@property(readonly, nonatomic) _Bool isDeliverable; // @synthesize isDeliverable=_isDeliverable;
@property(readonly, retain, nonatomic) UNNotification *notification; // @synthesize notification=_notification;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x000000000072160e
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x00000000007215f7
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000007214e2
- (long long)UIActionType;	// IMP=0x00000000007214d7
- (id)_trigger;	// IMP=0x000000000072145d
@property(readonly, nonatomic) _Bool isRemote;
@property(readonly, nonatomic) _Bool isLocal;
- (id)initWithNotification:(id)arg1 deliverable:(_Bool)arg2 timeout:(double)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000072122f
- (id)initWithNotification:(id)arg1 timeout:(double)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000721215

@end

