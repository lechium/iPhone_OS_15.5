//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLSettingsManagerProtocol-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface CLSettingsManagerInternal <CLSettingsManagerProtocol>
{
    NSMutableSet *_clients;	// 8 = 0x8
    NSMutableDictionary *_settingsDictionary;	// 16 = 0x10
}

+ (id)getSilo;	// IMP=0x000000000000655d
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006544
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000000000064e7
@property(retain) NSMutableDictionary *settingsDictionary; // @synthesize settingsDictionary=_settingsDictionary;
@property(retain) NSMutableSet *clients; // @synthesize clients=_clients;
- (void)refresh;	// IMP=0x000000000000695e
- (void)flush;	// IMP=0x0000000000006958
- (id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(byref id)arg3;	// IMP=0x00000000000067f4
- (void)updateClientsWithDictionary:(id)arg1;	// IMP=0x0000000000006697
- (id)syncgetSettingsAndRegisterForUpdates:(byref id)arg1;	// IMP=0x000000000000664f
- (void)unregisterForUpdates:(byref id)arg1;	// IMP=0x0000000000006632
- (void)endService;	// IMP=0x0000000000006600
- (void)beginService;	// IMP=0x00000000000065b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

