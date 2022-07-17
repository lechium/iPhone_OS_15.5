//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExtensionKit/_EXExtensionProcessObserver-Protocol.h>

@class NSString, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface EXHostUISession <_EXExtensionProcessObserver>
{
    NSXPCListenerEndpoint *_endpoint;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000051e4
- (void).cxx_destruct;	// IMP=0x0000000000005382
@property(readonly) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void)processDidInvalidate:(id)arg1;	// IMP=0x0000000000005304
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005287
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000051ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
