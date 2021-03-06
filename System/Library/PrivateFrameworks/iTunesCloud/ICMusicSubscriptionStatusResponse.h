//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICMusicSubscriptionStatus, NSDate, NSDictionary;

@interface ICMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _finalResponse;	// 8 = 0x8
    _Bool _needsReload;	// 9 = 0x9
    ICMusicSubscriptionStatus *_subscriptionStatus;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
}

+ (_Bool)isValidSubscriptionStatusResponseDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000061ade
+ (_Bool)isValidSubscriptionStatusPropertyListRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000619f7
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000619ef
- (void).cxx_destruct;	// IMP=0x00000000000619c7
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic, getter=isFinalResponse) _Bool finalResponse; // @synthesize finalResponse=_finalResponse;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
@property(readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000061787
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006167b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000615e7
- (id)description;	// IMP=0x00000000000614ce
- (id)_init;	// IMP=0x000000000006149f
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00000000000613d7
- (id)initWithPropertyListRepresentation:(id)arg1;	// IMP=0x0000000000061228

@end

