//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPNFCAccessResponseStatusWrapper, NSData, NSString;

@interface HAPNFCAccessIssuerKeyResponse : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_identifier;	// 8 = 0x8
    HAPNFCAccessResponseStatusWrapper *_statusCode;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013e3df
- (void).cxx_destruct;	// IMP=0x000000000013e3b7
@property(retain, nonatomic) HAPNFCAccessResponseStatusWrapper *statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013e0c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013e03b
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000013dd0f
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013d918
- (id)initWithIdentifier:(id)arg1 statusCode:(id)arg2;	// IMP=0x000000000013d87f
- (id)init;	// IMP=0x000000000013d850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
