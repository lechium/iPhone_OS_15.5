//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface INEvent : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_eventType;	// 8 = 0x8
    NSArray *_eventDescriptors;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x0000000000364fdc
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000364fd4
- (void).cxx_destruct;	// IMP=0x0000000000364fac
@property(readonly, copy, nonatomic) NSArray *eventDescriptors; // @synthesize eventDescriptors=_eventDescriptors;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000364e8a
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x0000000000364dae
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0000000000364cb6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000364c48
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000364ae9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000364ade
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000364a30
@property(readonly) unsigned long long hash;
- (id)initWithEventType:(id)arg1 eventDescriptors:(id)arg2;	// IMP=0x0000000000364938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

