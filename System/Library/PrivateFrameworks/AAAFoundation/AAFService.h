//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AAAFoundation/NSXPCListenerDelegate-Protocol.h>

@class NSArray, NSString, NSXPCListener, Protocol;

@interface AAFService : NSObject <NSXPCListenerDelegate>
{
    NSString *_serviceName;	// 8 = 0x8
    NSArray *_preConnectEntitlements;	// 16 = 0x10
    Protocol *_exportedProtocol;	// 24 = 0x18
    id _exportedObject;	// 32 = 0x20
    NSXPCListener *_serviceListener;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000003f86
@property(retain, nonatomic) NSXPCListener *serviceListener; // @synthesize serviceListener=_serviceListener;
@property(readonly, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(readonly, nonatomic) Protocol *exportedProtocol; // @synthesize exportedProtocol=_exportedProtocol;
@property(readonly, nonatomic) NSArray *preConnectEntitlements; // @synthesize preConnectEntitlements=_preConnectEntitlements;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000003f2e
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x0000000000003b58
- (void)_configureListener;	// IMP=0x0000000000003a68
- (void)configureExportedInterface:(id)arg1;	// IMP=0x0000000000003a62
- (void)startup;	// IMP=0x000000000000399c
- (id)init;	// IMP=0x000000000000396d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

