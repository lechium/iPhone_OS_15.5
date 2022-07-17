//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSSet;

@interface COMeshLocalNode
{
    NSSet *_acceptableCommands;	// 112 = 0x70
    NSArray *_nodes;	// 120 = 0x78
    NSDictionary *_commands;	// 128 = 0x80
    CDUnknownBlockType _controlFlagsProvider;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000037cd2
@property(copy, nonatomic) CDUnknownBlockType controlFlagsProvider; // @synthesize controlFlagsProvider=_controlFlagsProvider;
@property(copy, nonatomic) NSDictionary *commands; // @synthesize commands=_commands;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property(copy, nonatomic) NSSet *acceptableCommands; // @synthesize acceptableCommands=_acceptableCommands;
- (void)_invalidateAndReintroduceNode:(id)arg1;	// IMP=0x0000000000037bcd
- (void)_handleRequestIdentifier:(id)arg1 rapportRepresentation:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 fromNode:(id)arg5 at:(unsigned long long)arg6;	// IMP=0x00000000000373e2
- (void)_handleEventIdentifier:(id)arg1 rapportRepresentation:(id)arg2 options:(id)arg3 fromNode:(id)arg4;	// IMP=0x0000000000037001
- (void)_handleLostDevice:(id)arg1;	// IMP=0x0000000000036e53
- (void)_handleFoundDevice:(id)arg1;	// IMP=0x0000000000036901
- (id)_nodeForIDSIdentifier:(id)arg1;	// IMP=0x00000000000364c3
- (void)activate;	// IMP=0x00000000000362bb
- (id)initWithCompanionLinkClient:(id)arg1 source:(id)arg2;	// IMP=0x0000000000035abc

@end
