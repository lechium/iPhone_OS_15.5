//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, NSData, NSString;

@interface HAPDataStreamTransportInterruptPayload : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_requestToSendIdentifiers;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_dataStreamTransportInterruptSequenceNumber;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008ebb3
- (void).cxx_destruct;	// IMP=0x000000000008eb8b
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *dataStreamTransportInterruptSequenceNumber; // @synthesize dataStreamTransportInterruptSequenceNumber=_dataStreamTransportInterruptSequenceNumber;
@property(retain, nonatomic) NSData *requestToSendIdentifiers; // @synthesize requestToSendIdentifiers=_requestToSendIdentifiers;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008e89d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008e80f
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000008e4e3
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008e0ec
- (id)initWithRequestToSendIdentifiers:(id)arg1 dataStreamTransportInterruptSequenceNumber:(id)arg2;	// IMP=0x000000000008e053
- (id)init;	// IMP=0x000000000008e024

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
