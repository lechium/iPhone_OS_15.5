//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CompanionSync/NMSDeviceSourced-Protocol.h>
#import <CompanionSync/NMSObfuscatableDescriptionProviding-Protocol.h>

@class IDSMessageContext, NSData, NSDate, NSDictionary, NSString;

@interface NMSIncomingResponse : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding>
{
    unsigned short _messageID;	// 8 = 0x8
    NSString *sourceDeviceID;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    NSString *_idsIdentifier;	// 32 = 0x20
    NSString *_requestIDSIdentifier;	// 40 = 0x28
    NSDate *_requestSent;	// 48 = 0x30
    NSDictionary *_requestPersistentUserInfo;	// 56 = 0x38
    id _pbResponse;	// 64 = 0x40
    IDSMessageContext *_idsContext;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000837b0
@property(retain, nonatomic) IDSMessageContext *idsContext; // @synthesize idsContext=_idsContext;
@property(retain, nonatomic) id pbResponse; // @synthesize pbResponse=_pbResponse;
@property(retain, nonatomic) NSDictionary *requestPersistentUserInfo; // @synthesize requestPersistentUserInfo=_requestPersistentUserInfo;
@property(retain, nonatomic) NSDate *requestSent; // @synthesize requestSent=_requestSent;
@property(copy, nonatomic) NSString *requestIDSIdentifier; // @synthesize requestIDSIdentifier=_requestIDSIdentifier;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NSString *sourceDeviceID; // @synthesize sourceDeviceID;
- (id)CPObfuscatedDescriptionObject;	// IMP=0x0000000000083476
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
