//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/CATIDSMessage-Protocol.h>

@class NSDictionary, NSNumber, NSUUID;
@protocol CATActiveIDSServiceConnectionMessageContent;

__attribute__((visibility("hidden")))
@interface CATActiveServiceConnectionIDSMessage : NSObject <CATIDSMessage>
{
    NSUUID *_connectionIdentifier;	// 8 = 0x8
    NSNumber *_receivedSequenceNumber;	// 16 = 0x10
    id <CATActiveIDSServiceConnectionMessageContent> _content;	// 24 = 0x18
}

+ (id)instanceWithDictionary:(id)arg1;	// IMP=0x000000000000dae0
- (void).cxx_destruct;	// IMP=0x000000000000dd82
@property(readonly, nonatomic) id <CATActiveIDSServiceConnectionMessageContent> content; // @synthesize content=_content;
@property(readonly, nonatomic) NSNumber *receivedSequenceNumber; // @synthesize receivedSequenceNumber=_receivedSequenceNumber;
@property(readonly, nonatomic) NSUUID *connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long messageType;
- (id)initWithConnectionIdentifier:(id)arg1 receivedSequenceNumber:(id)arg2 content:(id)arg3;	// IMP=0x000000000000d84c

@end

