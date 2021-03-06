//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <DataDetectorsUI/DDRemoteActionHostProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDRemoteActionHostContext : NSExtensionContext <DDRemoteActionHostProtocol>
{
}

+ (id)_allowedItemPayloadClasses;	// IMP=0x0000000000006e01
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000006d62
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0000000000006d49
- (void)enableUserInteraction:(_Bool)arg1;	// IMP=0x0000000000006fe2
- (void)prepareViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006e47
- (id)protocolService;	// IMP=0x0000000000006d7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

