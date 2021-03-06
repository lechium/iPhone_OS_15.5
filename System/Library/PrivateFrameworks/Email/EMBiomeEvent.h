//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/BMStoreData-Protocol.h>
#import <Email/EFLoggable-Protocol.h>
#import <Email/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface EMBiomeEvent : NSObject <EFLoggable, BMStoreData, NSSecureCoding>
{
    unsigned int _dataVersion;	// 8 = 0x8
    NSString *_eventName;	// 16 = 0x10
    NSString *_messageId;	// 24 = 0x18
    NSDictionary *_payload;	// 32 = 0x20
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000008f88
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008f80
+ (id)log;	// IMP=0x0000000000008aa6
- (void).cxx_destruct;	// IMP=0x0000000000009425
@property(readonly, nonatomic) unsigned int dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, copy, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)json;	// IMP=0x0000000000009164
- (id)serialize;	// IMP=0x0000000000009092
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008da4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008c9b
- (id)initWithEventName:(id)arg1 messageId:(id)arg2 payload:(id)arg3;	// IMP=0x0000000000008b83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

