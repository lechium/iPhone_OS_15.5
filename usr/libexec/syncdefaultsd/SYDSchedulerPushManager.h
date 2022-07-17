//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SYDPushManager;

@interface SYDSchedulerPushManager : NSObject
{
    NSString *_user;	// 8 = 0x8
    SYDPushManager *_pushManager;	// 16 = 0x10
    NSString *_environment;	// 24 = 0x18
    double _refreshInterval;	// 32 = 0x20
}

+ (void)_unregisterManager:(id)arg1;	// IMP=0x0040000000060485
+ (void)_registerManager:(id)arg1;	// IMP=0x0010000000060413
+ (void)_managerDidChange:(id)arg1;	// IMP=0x0010000000060176
+ (id)sharedManagers;	// IMP=0x0010000000060121
- (void).cxx_destruct;	// IMP=0x0020000000060ec6
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) SYDPushManager *pushManager; // @synthesize pushManager=_pushManager;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
- (void)shutdown;	// IMP=0x0010000000060e07
- (void)didUpdateTokenOnServer:(id)arg1;	// IMP=0x0010000000060df1
- (void)resetUpdates;	// IMP=0x0010000000060ddb
- (double)nextUpdateInterval;	// IMP=0x0010000000060d8b
- (void)setEnvironment:(id)arg1 forUser:(id)arg2 refreshInterval:(double)arg3;	// IMP=0x0010000000060b5b
- (_Bool)needsUpdate;	// IMP=0x0010000000060b33
- (id)publicToken;	// IMP=0x0010000000060afb
- (id)persistentState;	// IMP=0x00100000000609ff
- (void)_managerDidReceivePushNotification:(id)arg1;	// IMP=0x00100000000608b5
- (void)_managerNeedsUpdateOnServer:(id)arg1;	// IMP=0x00100000000607d1
- (void)dealloc;	// IMP=0x001000000006075c
- (id)initWithPersistentState:(id)arg1 pushManager:(id)arg2;	// IMP=0x0010000000060555

@end
