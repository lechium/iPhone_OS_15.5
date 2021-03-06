//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <IdentityLookupUI/ILClassificationUIExtensionHostProtocol-Protocol.h>

@class NSObject, NSString;
@protocol ILClassificationUIExtensionHostContextDelegate, OS_dispatch_queue;

@interface ILClassificationUIExtensionHostContext : NSExtensionContext <ILClassificationUIExtensionHostProtocol>
{
    id <ILClassificationUIExtensionHostContextDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000003f90
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0000000000003f77
- (void).cxx_destruct;	// IMP=0x0000000000003ffb
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <ILClassificationUIExtensionHostContextDelegate> delegate; // @synthesize delegate=_delegate;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003ef4
- (oneway void)setReadyForClassificationResponse:(_Bool)arg1;	// IMP=0x0000000000003d46
- (void)classificationResponseForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003a6f
- (void)prepareForClassificationRequest:(id)arg1;	// IMP=0x0000000000003994
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000003933

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

