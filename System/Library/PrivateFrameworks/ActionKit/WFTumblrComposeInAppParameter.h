//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFSwitchParameter.h>

#import <ActionKit/ICAppInstallStatusObserver-Protocol.h>

@interface WFTumblrComposeInAppParameter : WFSwitchParameter <ICAppInstallStatusObserver>
{
}

- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;	// IMP=0x00000000002c62e5
- (_Bool)parameterStateIsValid:(id)arg1;	// IMP=0x00000000002c622e
- (_Bool)isHidden;	// IMP=0x00000000002c61b4
- (void)wasRemovedFromWorkflow;	// IMP=0x00000000002c60dc
- (void)wasAddedToWorkflow;	// IMP=0x00000000002c6004
- (id)defaultSerializedRepresentation;	// IMP=0x00000000002c5fe4

@end

