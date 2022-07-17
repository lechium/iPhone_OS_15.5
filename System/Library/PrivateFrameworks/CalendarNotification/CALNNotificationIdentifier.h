//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/NSCopying-Protocol.h>

@class NSString;

@interface CALNNotificationIdentifier : NSObject <NSCopying>
{
    NSString *_sourceIdentifier;	// 8 = 0x8
    NSString *_sourceClientIdentifier;	// 16 = 0x10
    NSString *_stringRepresentation;	// 24 = 0x18
}

+ (id)_allowedCharacterSetForEncodingNotificationIdentifierComponents;	// IMP=0x000000000001e108
+ (id)_deconstructNotificationIdentifierStringRepresentationIntoComponents:(id)arg1;	// IMP=0x000000000001dd5e
+ (id)_constructNotificationIdentifierStringRepresentationFromComponents:(id)arg1;	// IMP=0x000000000001da2f
- (void).cxx_destruct;	// IMP=0x000000000001e8ac
@property(readonly, copy, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
@property(readonly, copy, nonatomic) NSString *sourceClientIdentifier; // @synthesize sourceClientIdentifier=_sourceClientIdentifier;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (id)description;	// IMP=0x000000000001e7b7
- (_Bool)isEqualToNotificationIdentifier:(id)arg1;	// IMP=0x000000000001e64b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e5ed
- (unsigned long long)hash;	// IMP=0x000000000001e52e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e523
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 stringRepresentation:(id)arg3;	// IMP=0x000000000001e43d
- (id)initWithStringRepresentation:(id)arg1;	// IMP=0x000000000001e316
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;	// IMP=0x000000000001e1d0

@end
