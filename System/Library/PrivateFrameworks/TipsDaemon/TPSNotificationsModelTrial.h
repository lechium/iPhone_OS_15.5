//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsDaemon/TPSTrialUpdateHandler-Protocol.h>

@class NSString, TRILevel;

@interface TPSNotificationsModelTrial <TPSTrialUpdateHandler>
{
    TRILevel *_modelBasedNotifications;	// 8 = 0x8
    TRILevel *_notificationsModel;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000002634
- (void).cxx_destruct;	// IMP=0x0000000000002a8d
@property(retain, nonatomic) TRILevel *notificationsModel; // @synthesize notificationsModel=_notificationsModel;
@property(retain, nonatomic) TRILevel *modelBasedNotifications; // @synthesize modelBasedNotifications=_modelBasedNotifications;
- (_Bool)shouldNotify;	// IMP=0x0000000000002a3b
- (id)_shouldNotifyWithModelInputs:(id)arg1;	// IMP=0x0000000000002691
- (id)notificationsClassifier;	// IMP=0x0000000000002689
- (_Bool)shouldUseModelBasedNotifications;	// IMP=0x000000000000262c
- (void)handleUpdate;	// IMP=0x00000000000024c4
- (id)namespaceName;	// IMP=0x00000000000024b7
- (int)projectID;	// IMP=0x00000000000024ac
- (id)init;	// IMP=0x000000000000247d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

