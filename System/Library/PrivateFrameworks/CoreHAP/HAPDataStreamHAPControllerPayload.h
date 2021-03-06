//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, NSData, NSString;

@interface HAPDataStreamHAPControllerPayload : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_payload;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_sessionIdentifier;	// 16 = 0x10
    HAPTLVUnsignedNumberValue *_forceClose;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008d424
- (void).cxx_destruct;	// IMP=0x000000000008d3f1
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *forceClose; // @synthesize forceClose=_forceClose;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008cff5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008cf3d
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000008cb25
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008c68a
- (id)initWithPayload:(id)arg1 sessionIdentifier:(id)arg2 forceClose:(id)arg3;	// IMP=0x000000000008c5d3
- (id)init;	// IMP=0x000000000008c5a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

