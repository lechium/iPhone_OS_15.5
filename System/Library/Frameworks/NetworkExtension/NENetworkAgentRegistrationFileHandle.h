//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSUUID;

@interface NENetworkAgentRegistrationFileHandle
{
    NSNumber *_sessionType;	// 24 = 0x18
    NSUUID *_configurationIdentifier;	// 32 = 0x20
    NSUUID *_agentUUID;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    unsigned long long _agentFlags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000004deac
@property unsigned long long agentFlags; // @synthesize agentFlags=_agentFlags;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSUUID *agentUUID; // @synthesize agentUUID=_agentUUID;
@property(readonly) NSUUID *configurationIdentifier; // @synthesize configurationIdentifier=_configurationIdentifier;
@property(readonly) NSNumber *sessionType; // @synthesize sessionType=_sessionType;
- (unsigned long long)type;	// IMP=0x000000000004de27
- (id)description;	// IMP=0x000000000004dcb2
- (id)dictionary;	// IMP=0x000000000004daca
- (id)initFromDictionary:(id)arg1;	// IMP=0x000000000004d92a
- (id)initWithNetworkAgentRegistration:(id)arg1 sessionType:(id)arg2 configurationIdentifier:(id)arg3 agentUUID:(id)arg4;	// IMP=0x000000000004d907
- (id)initWithNetworkAgentRegistration:(id)arg1 sessionType:(id)arg2 configurationIdentifier:(id)arg3 agentUUID:(id)arg4 name:(id)arg5;	// IMP=0x000000000004d7bf

@end
