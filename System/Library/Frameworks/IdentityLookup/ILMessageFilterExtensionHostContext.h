//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <IdentityLookup/ILMessageFilterExtensionHostProtocol-Protocol.h>

@class NSString;

@interface ILMessageFilterExtensionHostContext : NSExtensionContext <ILMessageFilterExtensionHostProtocol>
{
    CDUnknownBlockType _deferQueryRequestToNetwork;	// 8 = 0x8
    CDUnknownBlockType _deferReportRequestToNetwork;	// 16 = 0x10
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x00000000000018d1
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x00000000000018b8
- (void).cxx_destruct;	// IMP=0x000000000000192e
@property(copy, nonatomic) CDUnknownBlockType deferReportRequestToNetwork; // @synthesize deferReportRequestToNetwork=_deferReportRequestToNetwork;
@property(copy, nonatomic) CDUnknownBlockType deferQueryRequestToNetwork; // @synthesize deferQueryRequestToNetwork=_deferQueryRequestToNetwork;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001835
- (oneway void)deferReportRequestToNetworkWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001725
- (oneway void)deferQueryRequestToNetworkWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001615
- (void)finish;	// IMP=0x000000000000156f
- (void)handleReportRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000137a
- (void)handleQueryRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001114

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

