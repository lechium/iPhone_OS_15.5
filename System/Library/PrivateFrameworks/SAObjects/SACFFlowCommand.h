//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface SACFFlowCommand
{
}

+ (id)flowCommandWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002a2ba
+ (id)flowCommand;	// IMP=0x000000000002a2a8
- (_Bool)mutatingCommand;	// IMP=0x000000000002a2ee
- (_Bool)requiresResponse;	// IMP=0x000000000002a2e6
@property(copy, nonatomic) NSDictionary *jsDialogScripts;
- (id)encodedClassName;	// IMP=0x000000000002a29b
- (id)groupIdentifier;	// IMP=0x000000000002a287

@end

