//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface SDAccessibilityServer
{
}

- (void)requestLabelForActivityWithSlotID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x002000000001323a
- (void)connectionInvalidated:(id)arg1;	// IMP=0x0010000000013234
- (void)connectionEstablished:(id)arg1;	// IMP=0x001000000001322e
- (id)remoteObjectInterface;	// IMP=0x001000000001320e
- (id)exportedInterface;	// IMP=0x00100000000131ee
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000013080
- (id)machServiceName;	// IMP=0x001000000001306c
- (void)invalidate;	// IMP=0x001000000001303d
- (void)activate;	// IMP=0x001000000001300e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

