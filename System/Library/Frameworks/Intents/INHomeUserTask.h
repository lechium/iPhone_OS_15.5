//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INHomeAttributeValue, NSString;

@interface INHomeUserTask : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    long long _taskType;	// 8 = 0x8
    long long _attribute;	// 16 = 0x10
    INHomeAttributeValue *_value;	// 24 = 0x18
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000003b62d3
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003b62cb
- (void).cxx_destruct;	// IMP=0x00000000003b62bb
@property(readonly, copy, nonatomic) INHomeAttributeValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) long long attribute; // @synthesize attribute=_attribute;
@property(readonly, nonatomic) long long taskType; // @synthesize taskType=_taskType;
- (id)_dictionaryRepresentation;	// IMP=0x00000000003b6164
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000003b6088
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000003b5f03
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003b5e7c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003b5db8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003b5dad
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b5d09
@property(readonly) unsigned long long hash;
- (id)initWithTaskType:(long long)arg1 attribute:(long long)arg2 value:(id)arg3;	// IMP=0x00000000003b5bd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

