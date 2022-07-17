//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPNotificationContextSourceWrapper, HAPTLVUnsignedNumberValue, NSString;

@interface HAPCharacteristicNotificationContext : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_contextIdentifier;	// 8 = 0x8
    HAPNotificationContextSourceWrapper *_source;	// 16 = 0x10
    HAPTLVUnsignedNumberValue *_clockTickCounter;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000064c3e
- (void).cxx_destruct;	// IMP=0x0000000000064c0b
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *clockTickCounter; // @synthesize clockTickCounter=_clockTickCounter;
@property(retain, nonatomic) HAPNotificationContextSourceWrapper *source; // @synthesize source=_source;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006480f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000064757
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000064385
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000063f67
- (id)initWithContextIdentifier:(id)arg1 source:(id)arg2 clockTickCounter:(id)arg3;	// IMP=0x0000000000063eb0
- (id)init;	// IMP=0x0000000000063e81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
