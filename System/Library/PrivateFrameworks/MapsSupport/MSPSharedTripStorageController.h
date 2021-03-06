//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSPGroupSessionStorage, NSMutableDictionary;
@protocol MSPSharedTripStorageDelegate;

__attribute__((visibility("hidden")))
@interface MSPSharedTripStorageController : NSObject
{
    id <MSPSharedTripStorageDelegate> _delegate;	// 8 = 0x8
    MSPGroupSessionStorage *_senderSession;	// 16 = 0x10
    NSMutableDictionary *_sharedTripGroupSessionInfo;	// 24 = 0x18
    NSMutableDictionary *_receiverRules;	// 32 = 0x20
    NSMutableDictionary *_senderRules;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000045c59
@property(retain, nonatomic) NSMutableDictionary *senderRules; // @synthesize senderRules=_senderRules;
@property(retain, nonatomic) NSMutableDictionary *receiverRules; // @synthesize receiverRules=_receiverRules;
@property(retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo; // @synthesize sharedTripGroupSessionInfo=_sharedTripGroupSessionInfo;
@property(retain, nonatomic) MSPGroupSessionStorage *senderSession; // @synthesize senderSession=_senderSession;
@property(nonatomic) __weak id <MSPSharedTripStorageDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_saveSendingRules;	// IMP=0x00000000000457fc
- (void)_saveSenderSession;	// IMP=0x00000000000452dd
- (void)_loadSenderSession;	// IMP=0x0000000000044c7d
- (id)_senderRulesPath;	// IMP=0x0000000000044bf5
- (id)_storingSenderPath;	// IMP=0x0000000000044b6d
- (void)_saveReceivingRules;	// IMP=0x000000000004470e
- (void)_saveStoredSessions;	// IMP=0x0000000000044318
- (void)_loadStoredSessions;	// IMP=0x0000000000043bf8
- (id)_rulesPath;	// IMP=0x0000000000043b2c
- (id)_storingPath;	// IMP=0x0000000000043a60
- (void)sendingRulesTouched;	// IMP=0x0000000000043a4e
- (id)sendingRulesForIdentifier:(id)arg1;	// IMP=0x000000000004385b
- (void)receivingRulesTouched;	// IMP=0x0000000000043849
- (id)receivingRulesForIdentifier:(id)arg1;	// IMP=0x00000000000436fe
- (void)updateGroupSessionStorageWithState:(id)arg1;	// IMP=0x00000000000435db
- (void)removeSession:(id)arg1;	// IMP=0x0000000000043489
- (void)addNewSession:(id)arg1 originator:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4;	// IMP=0x0000000000043321
- (id)groupSessionInfoForKey:(id)arg1;	// IMP=0x0000000000043200
- (void)dealloc;	// IMP=0x0000000000042ef5
- (id)init;	// IMP=0x0000000000042d1b

@end

