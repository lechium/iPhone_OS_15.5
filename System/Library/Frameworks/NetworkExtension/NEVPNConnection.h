//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEConfigurationManager, NEVPNManager, NSDate, NSError, NSString;
@protocol OS_dispatch_queue;

@interface NEVPNConnection : NSObject
{
    _Bool _initialized;	// 8 = 0x8
    _Bool _installed;	// 9 = 0x9
    _Bool _installNotify;	// 10 = 0xa
    int _sessionType;	// 12 = 0xc
    long long _status;	// 16 = 0x10
    NSDate *_connectedDate;	// 24 = 0x18
    NEConfigurationManager *_configManager;	// 32 = 0x20
    NSString *_configurationName;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    void *_session;	// 56 = 0x38
    NEVPNManager *_weakmanager;	// 64 = 0x40
    NSError *_lastDisconnectError;	// 72 = 0x48
}

+ (id)createConnectionForEnabledEnterpriseConfigurationWithName:(id)arg1;	// IMP=0x00000000001b2d18
+ (id)createConnectionForEnabledEnterpriseConfiguration;	// IMP=0x00000000001b2cfd
+ (id)createDisconnectErrorWithDomain:(id)arg1 code:(unsigned int)arg2;	// IMP=0x00000000001b214a
- (void).cxx_destruct;	// IMP=0x00000000001b2f80
@property(readonly) NSError *lastDisconnectError; // @synthesize lastDisconnectError=_lastDisconnectError;
@property(nonatomic) _Bool installNotify; // @synthesize installNotify=_installNotify;
@property(nonatomic) _Bool installed; // @synthesize installed=_installed;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property __weak NEVPNManager *weakmanager; // @synthesize weakmanager=_weakmanager;
@property(readonly, nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property void *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(readonly, nonatomic) NEConfigurationManager *configManager; // @synthesize configManager=_configManager;
@property(readonly) NSDate *connectedDate; // @synthesize connectedDate=_connectedDate;
@property(readonly) long long status; // @synthesize status=_status;
- (void)resetLastDisconnectError:(id)arg1;	// IMP=0x00000000001b2982
- (void)reload;	// IMP=0x00000000001b24bc
@property(readonly) NEVPNManager *manager;
- (void)destroySession;	// IMP=0x00000000001b2062
- (void)createSessionWithConfigurationIdentifier:(id)arg1 forceInfoFetch:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b1bb4
- (void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b1b9d
- (void)updateSessionInfoForce:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b14fb
- (void)stopVPNTunnel;	// IMP=0x00000000001b148f
- (_Bool)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id *)arg2;	// IMP=0x00000000001b11a7
- (_Bool)startVPNTunnelAndReturnError:(id *)arg1;	// IMP=0x00000000001b1190
- (void)dealloc;	// IMP=0x00000000001b111b
- (id)initHeadlessWithName:(id)arg1;	// IMP=0x00000000001b1076
- (id)initWithType:(int)arg1;	// IMP=0x00000000001b1004

@end

