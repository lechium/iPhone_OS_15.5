//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NEProxyConfigurationNetworkAgent
{
    NSData *_agentData;	// 72 = 0x48
}

+ (id)agentFromData:(id)arg1;	// IMP=0x00000000001420a3
+ (id)agentType;	// IMP=0x000000000014202e
+ (id)agentDomain;	// IMP=0x0000000000142021
- (void).cxx_destruct;	// IMP=0x0000000000142164
@property(retain) NSData *agentData; // @synthesize agentData=_agentData;
- (id)copyAgentData;	// IMP=0x00000000001420f9
- (id)initWithProxyConfiguration:(id)arg1;	// IMP=0x0000000000142055
- (id)agentDescription;	// IMP=0x000000000014203b

@end

