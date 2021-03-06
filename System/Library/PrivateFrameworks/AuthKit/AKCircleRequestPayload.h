//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKPushMessage, NSData, NSDictionary, NSString;

@interface AKCircleRequestPayload : NSObject <NSSecureCoding>
{
    NSString *_serverInfo;	// 8 = 0x8
    NSData *_clientInfo;	// 16 = 0x10
    long long _clientErrorCode;	// 24 = 0x18
    NSString *_altDSID;	// 32 = 0x20
    NSString *_transactionId;	// 40 = 0x28
    AKPushMessage *_responseMessage;	// 48 = 0x30
    NSDictionary *_responseInfo;	// 56 = 0x38
    unsigned long long _circleStep;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003b371
+ (id)payloadWithMessage:(id)arg1;	// IMP=0x000000000003ac14
- (void).cxx_destruct;	// IMP=0x000000000003b439
@property(nonatomic) unsigned long long circleStep; // @synthesize circleStep=_circleStep;
@property(retain, nonatomic) NSDictionary *responseInfo; // @synthesize responseInfo=_responseInfo;
@property(retain, nonatomic) AKPushMessage *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) long long clientErrorCode; // @synthesize clientErrorCode=_clientErrorCode;
@property(retain, nonatomic) NSData *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) NSString *serverInfo; // @synthesize serverInfo=_serverInfo;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003b299
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003b04c
- (id)description;	// IMP=0x000000000003b004
- (id)replyPayload;	// IMP=0x000000000003af01
- (_Bool)isAcceptingPayload;	// IMP=0x000000000003ae2e
- (_Bool)isRequestingPayload;	// IMP=0x000000000003ae12

@end

