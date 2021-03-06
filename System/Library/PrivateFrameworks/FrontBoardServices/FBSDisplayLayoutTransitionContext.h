//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class NSOrderedSet, NSSet, NSString;

@interface FBSDisplayLayoutTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding>
{
    NSOrderedSet *_transitionReasons;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006bb4e
@property(readonly, copy, nonatomic) NSString *transitionReason; // @dynamic transitionReason;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000006ba8e
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000006ba3e
- (id)succinctDescriptionBuilder;	// IMP=0x000000000006ba22
- (id)succinctDescription;	// IMP=0x000000000006b9d2
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000006b936
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000006b7e7
- (void)setTransitionReasons:(id)arg1;	// IMP=0x000000000006b7ba
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSSet *transitionReasons;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

