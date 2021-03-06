//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailKit/EFPubliclyDescribable-Protocol.h>

@class EFPromise, MEExtensionHostContext, MEMailComposeToolbarItemInfo, MERemoteExtensionContext, NSArray, NSDictionary, NSExtension, NSString, NSURL, NSUUID, UIImage;
@protocol MEComposeSessionHandler, MEComposeSessionHandler_Private, MEContentBlocker_Private, MEMessageActionHandler, MEMessageActionHandler_Private, MEMessageSecurityHandler, OS_dispatch_queue;

@interface MERemoteExtension : NSObject <EFPubliclyDescribable>
{
    struct os_unfair_lock_s _remoteExtensionProxyLock;	// 8 = 0x8
    struct os_unfair_lock_s _accessLevelLock;	// 12 = 0xc
    NSString *_dataAccessReason;	// 16 = 0x10
    unsigned long long _bodyAccess;	// 24 = 0x18
    _Bool _entitlementVerified;	// 32 = 0x20
    id <MEMessageActionHandler> _messageActionInterface;	// 40 = 0x28
    UIImage *_messageSecurityDecoderIcon;	// 48 = 0x30
    NSExtension *_extension;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_extensionLoadingQueue;	// 64 = 0x40
    NSString *_containerPath;	// 72 = 0x48
    NSString *_containerID;	// 80 = 0x50
    NSString *_extensionID;	// 88 = 0x58
    EFPromise *_remoteExtensionProxyPromise;	// 96 = 0x60
    MERemoteExtensionContext *_extensionContext;	// 104 = 0x68
    NSUUID *_contextUUID;	// 112 = 0x70
    NSDictionary *_headerAccessLevels;	// 120 = 0x78
    id <MEMessageSecurityHandler> _synchronousMessageSecurityInterface;	// 128 = 0x80
}

+ (id)allCapabilitiesRequiringMessageContentAccess;	// IMP=0x000000000000feb4
+ (id)allCapabilities;	// IMP=0x000000000000fdef
+ (id)log;	// IMP=0x000000000000ee1d
- (void).cxx_destruct;	// IMP=0x0000000000011e8c
@property(readonly, nonatomic) id <MEMessageSecurityHandler> synchronousMessageSecurityInterface; // @synthesize synchronousMessageSecurityInterface=_synchronousMessageSecurityInterface;
@property(readonly, copy) NSDictionary *headerAccessLevels; // @synthesize headerAccessLevels=_headerAccessLevels;
@property(readonly) NSUUID *contextUUID; // @synthesize contextUUID=_contextUUID;
@property(readonly, nonatomic) MERemoteExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property(retain, nonatomic) EFPromise *remoteExtensionProxyPromise; // @synthesize remoteExtensionProxyPromise=_remoteExtensionProxyPromise;
@property(nonatomic) _Bool entitlementVerified; // @synthesize entitlementVerified=_entitlementVerified;
@property(retain, nonatomic) NSString *extensionID; // @synthesize extensionID=_extensionID;
@property(retain, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionLoadingQueue; // @synthesize extensionLoadingQueue=_extensionLoadingQueue;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) UIImage *messageSecurityDecoderIcon; // @synthesize messageSecurityDecoderIcon=_messageSecurityDecoderIcon;
@property(readonly, nonatomic) id <MEMessageActionHandler> messageActionInterface; // @synthesize messageActionInterface=_messageActionInterface;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011a7a
@property(readonly) _Bool hasMessageContentAccess;
- (void)_nts_loadBodyAccess;	// IMP=0x00000000000117ea
- (void)_nts_loadDataAccessReason;	// IMP=0x0000000000011667
@property(readonly) _Bool bodyAccess;
@property(readonly, copy) NSString *dataAccessReason;
- (id)_synchronousInterfaceForExtensionCapability:(id)arg1;	// IMP=0x00000000000114c9
- (id)_interfaceForExtensionCapability:(id)arg1;	// IMP=0x00000000000113e0
- (void)primaryActionClickedForMessageContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011344
- (void)getDecodedMailViewControllerForMessageContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000112a8
- (void)getMailSignatureVerificationExtensionViewControllerForMessageSigners:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001120c
@property(readonly, nonatomic) id <MEContentBlocker_Private> synchronousContentBlockerInterface;
- (id)contentBlockerInterface;	// IMP=0x0000000000011143
@property(readonly, nonatomic) id <MEMessageActionHandler_Private> synchronousMessageActionProviderInterface;
- (id)messageActionProviderInterface;	// IMP=0x000000000001107a
- (void)getMailComposeExtensionViewControllerForSession:(id)arg1 hostDelegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010fde
@property(readonly, nonatomic) id <MEComposeSessionHandler_Private> synchronousComposeSessionInterface;
@property(readonly, nonatomic) id <MEComposeSessionHandler> composeSessionInterface;
- (id)interfaceForExtensionCapability:(id)arg1;	// IMP=0x0000000000010e94
- (id)_loadRemoteExtesionProxyFuture;	// IMP=0x00000000000106d4
- (id)_remoteExtensionProxyFuture;	// IMP=0x000000000001049a
@property(readonly) MEExtensionHostContext *extensionHostContext;
@property(readonly, nonatomic) MEMailComposeToolbarItemInfo *composeWindowToolbarButtonInfo;
- (id)toolbarIconTooltip;	// IMP=0x0000000000010204
@property(readonly, nonatomic) UIImage *toolbarIcon;
@property(readonly, nonatomic) UIImage *menuIcon;
@property(readonly, nonatomic) UIImage *preferencesIcon;
@property(readonly, nonatomic) _Bool inboundNetworkingAllowed;
@property(readonly, nonatomic) _Bool outboundNetworkingAllowed;
@property(readonly, nonatomic) NSArray *capabilities;
@property(nonatomic, setter=setEnabled:) _Bool isEnabled;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSURL *containingAppURL;
@property(readonly, nonatomic) NSString *containingAppDisplayName;
@property(readonly, nonatomic) NSString *displayVersion;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, copy) NSString *description;
- (id)initWithExtension:(id)arg1;	// IMP=0x000000000000eefa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

