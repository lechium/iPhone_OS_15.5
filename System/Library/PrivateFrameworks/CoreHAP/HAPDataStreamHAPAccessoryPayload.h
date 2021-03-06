//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, NSData, NSString;

@interface HAPDataStreamHAPAccessoryPayload : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_payload;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_forceClose;	// 16 = 0x10
    HAPTLVUnsignedNumberValue *_accessoryRequestToSend;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008c4f9
- (void).cxx_destruct;	// IMP=0x000000000008c4c6
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *accessoryRequestToSend; // @synthesize accessoryRequestToSend=_accessoryRequestToSend;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *forceClose; // @synthesize forceClose=_forceClose;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008c0ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008c012
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000008bbfa
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008b75f
- (id)initWithPayload:(id)arg1 forceClose:(id)arg2 accessoryRequestToSend:(id)arg3;	// IMP=0x000000000008b6a8
- (id)init;	// IMP=0x000000000008b679

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

