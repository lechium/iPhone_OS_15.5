//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRProtocolClientConnectionDelegate-Protocol.h>

@class NSString;

@interface MRJSONTransportExternalDevice <MRProtocolClientConnectionDelegate>
{
}

- (_Bool)isPaired;	// IMP=0x000000000020535c
- (void)_handleSetStateMessage:(id)arg1;	// IMP=0x0000000000205022
- (id)_onWorkerQueue_createClientConnectionWithTransport:(id)arg1;	// IMP=0x0000000000204fd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
