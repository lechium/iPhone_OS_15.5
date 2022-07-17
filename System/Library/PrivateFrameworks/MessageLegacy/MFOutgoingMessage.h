//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage
{
    MFMessageBody *_messageBody;	// 192 = 0xc0
    MFMutableMessageHeaders *_messageHeaders;	// 200 = 0xc8
}

- (unsigned long long)messageSize;	// IMP=0x00000000000423d4
- (id)headersIfAvailable;	// IMP=0x00000000000423c2
- (id)headers;	// IMP=0x00000000000423b0
- (void)setMutableHeaders:(id)arg1;	// IMP=0x0000000000042377
- (id)mutableHeaders;	// IMP=0x0000000000042348
- (_Bool)messageDataHolder:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;	// IMP=0x000000000004224a
- (id)messageDataHolder;	// IMP=0x00000000000421be
- (_Bool)messageData:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;	// IMP=0x000000000004209d
- (id)messageData;	// IMP=0x0000000000041fd9
- (id)messageBodyIfAvailable;	// IMP=0x0000000000041fc8
- (id)messageBody;	// IMP=0x0000000000041fb7
- (id)messageStore;	// IMP=0x0000000000041faf
- (void)setMessageBody:(id)arg1;	// IMP=0x0000000000041f71
- (void)dealloc;	// IMP=0x0000000000041f19

@end
