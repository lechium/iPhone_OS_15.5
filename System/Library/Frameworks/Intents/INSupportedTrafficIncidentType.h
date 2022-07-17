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

@interface INSupportedTrafficIncidentType : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    NSString *_localizedDisplayString;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000004ceec3
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004ceebb
- (void).cxx_destruct;	// IMP=0x00000000004ceeab
@property(readonly, copy, nonatomic) NSString *localizedDisplayString; // @synthesize localizedDisplayString=_localizedDisplayString;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)_dictionaryRepresentation;	// IMP=0x00000000004ced9c
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000004cecc0
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000004ceb77
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004ceb05
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004cea5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004cea51
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004ce9b7
@property(readonly) unsigned long long hash;
- (id)initWithType:(long long)arg1 localizedDisplayString:(id)arg2;	// IMP=0x00000000004ce8c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
