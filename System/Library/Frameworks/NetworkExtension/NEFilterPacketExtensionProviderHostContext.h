//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEFilterExtensionProviderProtocol-Protocol.h>
#import <NetworkExtension/NEFilterPacketExtensionProviderHostProtocol-Protocol.h>

@class NSString;

@interface NEFilterPacketExtensionProviderHostContext <NEFilterExtensionProviderProtocol, NEFilterPacketExtensionProviderHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000188c8b
- (void)createPacketChannelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000188cf7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
