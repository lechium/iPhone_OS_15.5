//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIViewServiceDeputyXPCInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIViewControllerControlMessageDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface>
{
}

- (id)connectionInvocation;	// IMP=0x000000000116b665
- (SEL)connectionSelector;	// IMP=0x000000000116b658
- (id)connectionProtocol;	// IMP=0x000000000116b647
- (id)hostObjectInterface;	// IMP=0x000000000116b63f
- (id)exportedInterface;	// IMP=0x000000000116b61f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
