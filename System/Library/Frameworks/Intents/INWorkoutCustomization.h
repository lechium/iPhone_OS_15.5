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

@interface INWorkoutCustomization : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_focus;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000004d0537
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004d052f
- (void).cxx_destruct;	// IMP=0x00000000004d0507
@property(readonly, copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) NSString *focus; // @synthesize focus=_focus;
- (id)_dictionaryRepresentation;	// IMP=0x00000000004d03e5
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000004d0309
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000004d0211
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004d01a3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004d0055
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d004a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cff9c
@property(readonly) unsigned long long hash;
- (id)initWithFocus:(id)arg1 environment:(id)arg2;	// IMP=0x00000000004cfea4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

