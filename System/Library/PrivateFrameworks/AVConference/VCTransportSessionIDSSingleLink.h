//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCTransportSessionIDSSingleLink
{
}

- (int)updateTransportStream:(struct OpaqueVCTransportStream *)arg1;	// IMP=0x00000000003b6b61
- (int)createVFD:(int *)arg1 forStreamType:(unsigned int)arg2;	// IMP=0x00000000003b69d4
- (int)onStart;	// IMP=0x00000000003b68af
- (void)handleLinkDisconnectedWithInfo:(id)arg1;	// IMP=0x00000000003b67f4
- (void)handleLinkConnectedWithInfo:(id)arg1;	// IMP=0x00000000003b6739
- (id)initWithNotificationQueue:(id)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;	// IMP=0x00000000003b66dd

@end
