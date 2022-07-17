//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSGlobalConfigurationStoreDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class NSString;
@protocol DNDSGlobalConfigurationManagerDelegate, DNDSGlobalConfigurationStoring;

@interface DNDSGlobalConfigurationManager : NSObject <DNDSSysdiagnoseDataProvider, DNDSBackingStoreDelegate, DNDSGlobalConfigurationStoreDelegate>
{
    id <DNDSGlobalConfigurationStoring> _backingStore;	// 8 = 0x8
    id <DNDSGlobalConfigurationManagerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b51fc
@property(nonatomic) __weak id <DNDSGlobalConfigurationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)_writeConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b4fb8
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(_Bool)arg2;	// IMP=0x00000000000b4ead
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier; // @dynamic sysdiagnoseDataIdentifier;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;	// IMP=0x00000000000b4e8a
- (void)globalConfigurationStore:(id)arg1 didUpdatePreventAutoReplySetting:(_Bool)arg2;	// IMP=0x00000000000b4e45
- (id)fallbackConfiguration;	// IMP=0x00000000000b4e2c
- (_Bool)setPreventAutoReply:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x00000000000b4c8b
- (_Bool)getPreventAutoReplyReturningError:(id *)arg1;	// IMP=0x00000000000b4c36
- (_Bool)setConfiguration:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000b4a1a
- (id)getConfigurationReturningError:(id *)arg1;	// IMP=0x00000000000b49a6
- (void)dealloc;	// IMP=0x00000000000b4970
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000000b48e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
