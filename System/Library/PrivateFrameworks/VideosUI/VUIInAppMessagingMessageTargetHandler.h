//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/IAMMessageTarget-Protocol.h>

@class NSString;

@interface VUIInAppMessagingMessageTargetHandler : NSObject <IAMMessageTarget>
{
    NSString *_targetIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000124b22
@property(readonly, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
- (void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3;	// IMP=0x0000000000124960
- (id)initWithTargetIdentifier:(id)arg1;	// IMP=0x00000000001248f5
- (id)init;	// IMP=0x0000000000124886

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldBeNotifiedOfNilPriorityMessageAfterRegistration;
@property(readonly) Class superclass;

@end
