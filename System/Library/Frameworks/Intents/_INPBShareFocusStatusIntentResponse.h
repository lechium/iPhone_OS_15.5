//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBShareFocusStatusIntentResponse-Protocol.h>

@class NSString;

@interface _INPBShareFocusStatusIntentResponse : PBCodable <_INPBShareFocusStatusIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004e67d2
- (id)dictionaryRepresentation;	// IMP=0x00000000004e66b4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e6667
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e6635
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004e65a3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004e64a4
- (void)writeTo:(id)arg1;	// IMP=0x00000000004e649e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004e6491

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

