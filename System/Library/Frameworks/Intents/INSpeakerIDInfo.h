//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INSpeakerIDInfo : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_sharedUserID;	// 8 = 0x8
    long long _speakerIDConfidence;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x000000000045c9de
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000045c9d6
- (void).cxx_destruct;	// IMP=0x000000000045c9c6
@property(readonly, nonatomic) long long speakerIDConfidence; // @synthesize speakerIDConfidence=_speakerIDConfidence;
@property(readonly, copy, nonatomic) NSString *sharedUserID; // @synthesize sharedUserID=_sharedUserID;
- (id)_dictionaryRepresentation;	// IMP=0x000000000045c8ac
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000045c7d0
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x000000000045c688
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000045c616
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000045c56d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000045c562
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000045c4c4
@property(readonly) unsigned long long hash;
- (id)initWithSharedUserID:(id)arg1 speakerIDConfidence:(long long)arg2;	// IMP=0x000000000045c3d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

