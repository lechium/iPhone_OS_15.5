//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <MailKit/MEExtensionRemoteHostProtocol-Protocol.h>

@class NSString;
@protocol MEMailComposeExtensionHostDelegate;

@interface MEExtensionHostContext : NSExtensionContext <MEExtensionRemoteHostProtocol>
{
    id <MEMailComposeExtensionHostDelegate> _composeExtensionHostDelegate;	// 8 = 0x8
}

+ (id)extensionHostRequestScheduler;	// IMP=0x000000000000925b
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000009242
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0000000000009229
- (void).cxx_destruct;	// IMP=0x000000000000947b
@property(nonatomic) __weak id <MEMailComposeExtensionHostDelegate> composeExtensionHostDelegate; // @synthesize composeExtensionHostDelegate=_composeExtensionHostDelegate;
- (void)regenerateEmailAddressTokenChangesForSession:(id)arg1;	// IMP=0x00000000000092cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
