//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMFMessageTransportDelegate;

@interface HMFMessageTransport
{
    id <HMFMessageTransportDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000192a2
@property __weak id <HMFMessageTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000191b4

@end

