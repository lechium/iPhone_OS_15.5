//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUMessageSession;

@interface SASProximitySessionSharingTransport
{
    CUMessageSession *_messageSession;	// 8 = 0x8
    CUMessageSession *_actionMessageSession;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000008d7e
@property(retain) CUMessageSession *actionMessageSession; // @synthesize actionMessageSession=_actionMessageSession;
@property(retain) CUMessageSession *messageSession; // @synthesize messageSession=_messageSession;
- (void)sendData:(id)arg1 response:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008af8
- (void)invalidate;	// IMP=0x0000000000008abb
- (void)activate;	// IMP=0x00000000000087fe
- (id)initWithMessageSession:(id)arg1;	// IMP=0x0000000000008796

@end
