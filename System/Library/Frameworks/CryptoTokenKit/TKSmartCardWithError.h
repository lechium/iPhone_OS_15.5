//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, TKSmartCard;

__attribute__((visibility("hidden")))
@interface TKSmartCardWithError
{
    TKSmartCard *_parentCard;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001f04b
- (void)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000000001f029
- (void)transmitRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f00e
- (void)beginSessionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000001eff0
- (id)initWithCard:(id)arg1 error:(id)arg2;	// IMP=0x000000000001ef20

@end

