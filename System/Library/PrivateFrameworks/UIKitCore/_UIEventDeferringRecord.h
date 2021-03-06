//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDebugDescriptionProviding-Protocol.h>

@class NSMutableSet, NSString, _UIEventDeferringDescriptor, _UIEventDeferringOwnershipToken;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringRecord : NSObject <BSDebugDescriptionProviding>
{
    NSMutableSet *_recreationReasons;	// 8 = 0x8
    _UIEventDeferringDescriptor *_descriptor;	// 16 = 0x10
    id <BSInvalidatable> _invalidationToken;	// 24 = 0x18
    _UIEventDeferringOwnershipToken *_deferringToken;	// 32 = 0x20
    void *_recordingManagerPointer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000110c31d
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000110be23
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000110bdd3
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000110bd83
- (id)succinctDescriptionBuilder;	// IMP=0x000000000110bc0d
- (id)succinctDescription;	// IMP=0x000000000110bbbd
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000110b8ba

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

