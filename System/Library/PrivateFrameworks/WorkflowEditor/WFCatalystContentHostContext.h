//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <WorkflowEditor/WFCatalystContentHost-Protocol.h>

@class NSString;
@protocol WFCatalystContentHost;

@interface WFCatalystContentHostContext : NSExtensionContext <WFCatalystContentHost>
{
    id <WFCatalystContentHost> _handler;	// 8 = 0x8
}

+ (id)_allowedItemPayloadClasses;	// IMP=0x00000000002428cb
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x00000000002428ab
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000024288b
- (void).cxx_destruct;	// IMP=0x00000000002429a0
@property(nonatomic) __weak id <WFCatalystContentHost> handler; // @synthesize handler=_handler;
- (void)actionInterfaceListenerDidBecomeActive:(id)arg1;	// IMP=0x0000000000242901

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

