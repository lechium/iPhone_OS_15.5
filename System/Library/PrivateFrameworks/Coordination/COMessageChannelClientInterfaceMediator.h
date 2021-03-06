//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Coordination/COMessageChannelClientInterface-Protocol.h>

@class COMessageChannel, NSString;

__attribute__((visibility("hidden")))
@interface COMessageChannelClientInterfaceMediator : NSObject <COMessageChannelClientInterface>
{
    COMessageChannel *_messageChannel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000019dc5
@property(readonly, nonatomic) __weak COMessageChannel *messageChannel; // @synthesize messageChannel=_messageChannel;
- (void)failedToSendRequestWithID:(unsigned int)arg1 withError:(id)arg2;	// IMP=0x0000000000019d4a
- (void)receivedResponseForRequestID:(unsigned int)arg1 responsePayload:(id)arg2 responseType:(id)arg3 responseError:(id)arg4 fromMember:(id)arg5;	// IMP=0x0000000000019c85
- (void)receivedRequestWithPayload:(id)arg1 payloadType:(id)arg2 requestID:(unsigned int)arg3 fromMember:(id)arg4 withCallback:(CDUnknownBlockType)arg5;	// IMP=0x0000000000019bbe
- (void)receivedRecipientListForRequestID:(unsigned int)arg1 recipients:(id)arg2;	// IMP=0x0000000000019b59
- (id)initWithMessageChannel:(id)arg1;	// IMP=0x0000000000019af5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

