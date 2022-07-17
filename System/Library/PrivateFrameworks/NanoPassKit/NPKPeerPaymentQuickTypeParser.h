//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface NPKPeerPaymentQuickTypeParser : NSObject
{
    NSSet *_supportedCurrencyCodes;	// 8 = 0x8
    NSSet *_allowedPayloadIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000471e5
@property(readonly, nonatomic) NSSet *allowedPayloadIDs; // @synthesize allowedPayloadIDs=_allowedPayloadIDs;
@property(readonly, nonatomic) NSSet *supportedCurrencyCodes; // @synthesize supportedCurrencyCodes=_supportedCurrencyCodes;
- (id)parsePayload:(id)arg1 payloadID:(id)arg2 maxCount:(unsigned long long)arg3;	// IMP=0x0000000000046a76
- (id)parsePayload:(id)arg1 payloadID:(id)arg2;	// IMP=0x0000000000046a61
- (id)initWithSupportedCurrencyCodes:(id)arg1 allowedPayloadIDs:(id)arg2;	// IMP=0x0000000000046986

@end
