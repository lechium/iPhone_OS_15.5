//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface _MessageList : NSObject
{
    NSString *_persistencePath;	// 8 = 0x8
    NSMutableArray *_messageDictionaries;	// 16 = 0x10
    _Bool _coalescingSuspended;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000040780
- (id)_getComplicationDescriptor:(id)arg1;	// IMP=0x0010000000040764
- (id)_getFamily:(id)arg1;	// IMP=0x0010000000040748
- (id)_getClientID:(id)arg1;	// IMP=0x001000000004072c
- (id)_getFaceUUID:(id)arg1;	// IMP=0x00100000000406be
- (long long)_getMessageType:(id)arg1;	// IMP=0x0010000000040670
- (void)_pruneMessagesMadeObsoleteByNewMessageOfType:(long long)arg1 withFaceUUID:(id)arg2 clientID:(id)arg3 family:(id)arg4 complicationDescriptor:(id)arg5;	// IMP=0x0010000000040107
- (void)_persistMessageDictionaries;	// IMP=0x00100000000400e1
- (void)_enqueueMessageDict:(id)arg1;	// IMP=0x001000000003ffb6
- (id)_messageAtIndex:(unsigned long long)arg1;	// IMP=0x001000000003fdce
- (void)_ensureCoalescingSuspended;	// IMP=0x001000000003fdc8
- (void)resumeCoalescing;	// IMP=0x001000000003fc57
- (void)suspendCoalescing;	// IMP=0x001000000003fc4d
- (void)dequeueFirstMessage;	// IMP=0x001000000003fb24
- (id)firstMessage;	// IMP=0x001000000003fad8
- (id)messageEnumerator;	// IMP=0x001000000003f982
- (unsigned long long)count;	// IMP=0x001000000003f96c
- (void)clearMessageCount:(unsigned long long)arg1;	// IMP=0x001000000003f815
- (void)clearAllMessages;	// IMP=0x001000000003f7e0
- (_Bool)hasMessages;	// IMP=0x001000000003f7c3
- (void)enqueueMessage:(id)arg1;	// IMP=0x001000000003f3a1
- (id)initWithPersistencePath:(id)arg1;	// IMP=0x001000000003ef9f

@end
