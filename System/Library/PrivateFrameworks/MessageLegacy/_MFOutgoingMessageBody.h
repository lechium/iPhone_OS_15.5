//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MIME/MFMessageBody.h>

#import <MessageLegacy/MFCollectingDataConsumer-Protocol.h>

@class MFBufferedDataConsumer, NSData, NSString;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer>
{
    MFBufferedDataConsumer *_consumer;	// 8 = 0x8
    NSData *_rawData;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    _Bool _lastNewLine;	// 32 = 0x20
}

- (id)data;	// IMP=0x0000000000041f07
- (void)done;	// IMP=0x0000000000041e9f
- (long long)appendData:(id)arg1;	// IMP=0x0000000000041e35
- (id)rawData;	// IMP=0x0000000000041df6
- (_Bool)isLastCharacterNewLine;	// IMP=0x0000000000041de6
- (unsigned long long)count;	// IMP=0x0000000000041dd5
- (void)dealloc;	// IMP=0x0000000000041d7d
- (id)init;	// IMP=0x0000000000041d2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

