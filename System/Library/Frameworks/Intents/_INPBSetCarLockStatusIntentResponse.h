//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetCarLockStatusIntentResponse-Protocol.h>

@class NSString;

@interface _INPBSetCarLockStatusIntentResponse : PBCodable <_INPBSetCarLockStatusIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000331064
- (id)dictionaryRepresentation;	// IMP=0x0000000000330f46
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000330ef9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000330ec7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000330e35
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000330d36
- (void)writeTo:(id)arg1;	// IMP=0x0000000000330d30
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000330d23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
