//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCMockIDSDatagramChannel;

__attribute__((visibility("hidden")))
@interface VCMockIDSDatagramChannelController
{
    VCMockIDSDatagramChannel *_datagramChannel;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000002bad18
- (void)setReadyToReadBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002baffb
- (void)setWriteDatagramBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bafad
- (void)setWriteDatagramsBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002baf5f
- (void)invalidate;	// IMP=0x00000000002baf16
- (void)dealloc;	// IMP=0x00000000002baeb1
- (id)datagramChannelRequiresOptions:(_Bool)arg1;	// IMP=0x00000000002bad5d

@end

