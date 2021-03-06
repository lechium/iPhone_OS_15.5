//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ECAngleBracketIDHash, ECServerMessage;

@interface EDExistingMessageWithMessageIDHeader : NSObject
{
    ECAngleBracketIDHash *_messageIDHash;	// 8 = 0x8
    ECServerMessage *_serverMessage;	// 16 = 0x10
    long long _messagePersistentID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000013520d
@property(readonly, nonatomic) long long messagePersistentID; // @synthesize messagePersistentID=_messagePersistentID;
@property(readonly, nonatomic) ECServerMessage *serverMessage; // @synthesize serverMessage=_serverMessage;
@property(readonly, nonatomic) ECAngleBracketIDHash *messageIDHash; // @synthesize messageIDHash=_messageIDHash;
- (id)initWithMessageIDHash:(id)arg1 serverMessage:(id)arg2 messagePersistentID:(long long)arg3;	// IMP=0x000000000013512b

@end

