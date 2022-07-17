//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface SUScanOptions <NSSecureCoding, NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    _Bool _forced;	// 16 = 0x10
    NSMutableSet *_types;	// 24 = 0x18
    NSString *_requestedPMV;	// 32 = 0x20
    _Bool _MDMUseDelayPeriod;	// 40 = 0x28
    NSString *_sessionID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b348
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool MDMUseDelayPeriod; // @synthesize MDMUseDelayPeriod=_MDMUseDelayPeriod;
@property(retain, nonatomic) NSString *requestedPMV; // @synthesize requestedPMV=_requestedPMV;
@property(retain, nonatomic) NSSet *types; // @synthesize types=_types;
@property(nonatomic, getter=isForced) _Bool forced; // @synthesize forced=_forced;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000000000b7b3
- (void)clearTypes;	// IMP=0x000000000000b796
- (_Bool)findsAnyUpdate;	// IMP=0x000000000000b74a
- (_Bool)containsType:(int)arg1;	// IMP=0x000000000000b70a
- (void)removeType:(int)arg1;	// IMP=0x000000000000b6ca
- (void)addType:(int)arg1;	// IMP=0x000000000000b68a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b5c6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b4eb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b350
- (id)init;	// IMP=0x000000000000b283
- (void)dealloc;	// IMP=0x000000000000b20f

@end
