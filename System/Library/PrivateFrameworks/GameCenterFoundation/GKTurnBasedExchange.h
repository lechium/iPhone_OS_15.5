//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKTurnBasedExchangeInternal, GKTurnBasedMatch, GKTurnBasedParticipant, NSArray, NSData, NSDate, NSString;

@interface GKTurnBasedExchange : NSObject
{
    GKTurnBasedParticipant *_sender;	// 8 = 0x8
    GKTurnBasedMatch *_match;	// 16 = 0x10
    GKTurnBasedExchangeInternal *_internal;	// 24 = 0x18
    NSArray *_replies;	// 32 = 0x20
    NSArray *_recipients;	// 40 = 0x28
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x00000000000a86e8
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000a8561
- (void).cxx_destruct;	// IMP=0x00000000000a97c6
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(retain) GKTurnBasedExchangeInternal *internal; // @synthesize internal=_internal;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
@property(retain, nonatomic) GKTurnBasedParticipant *sender; // @synthesize sender=_sender;
- (void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a909e
- (void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a8a30
- (void)_updateInternalFromMatchInternal:(id)arg1;	// IMP=0x00000000000a8848
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000a87c2
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000a873f
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000a866d
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000a85d3
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000a854f
- (id)description;	// IMP=0x00000000000a7ed0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a7e23
- (unsigned long long)hash;	// IMP=0x00000000000a7ddf
@property(readonly, nonatomic) BOOL status;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
- (id)init;	// IMP=0x00000000000a7c22
- (id)initWithInternalRepresentation:(id)arg1;	// IMP=0x00000000000a7b96

// Remaining properties
@property(retain, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *exchangeID; // @dynamic exchangeID;
@property(readonly, nonatomic) NSDate *sendDate; // @dynamic sendDate;
@property(retain, nonatomic) NSDate *timeoutDate; // @dynamic timeoutDate;

@end
