//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>
#import <CoreDuet/_DKProtobufConverting-Protocol.h>

@class NSString, _CDEventStreamProperties, _DKObjectType;

@interface _DKEventStream : NSObject <_DKProtobufConverting, NSSecureCoding>
{
    _CDEventStreamProperties *_eventProperties;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    _DKObjectType *_eventValueType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000564c7
+ (id)eventStreamWithName:(id)arg1 valueType:(id)arg2;	// IMP=0x000000000005608e
+ (id)eventStreamWithName:(id)arg1;	// IMP=0x000000000005603b
+ (id)fromPBCodable:(id)arg1;	// IMP=0x00000000000bf69d
- (void).cxx_destruct;	// IMP=0x00000000000568b4
@property(readonly) _DKObjectType *eventValueType; // @synthesize eventValueType=_eventValueType;
@property(readonly) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056731
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000565b9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000564cf
- (id)initWithName:(id)arg1 valueType:(id)arg2 cache:(id)arg3;	// IMP=0x000000000005635b
@property(readonly) _CDEventStreamProperties *eventProperties; // @synthesize eventProperties=_eventProperties;
- (id)toPBCodable;	// IMP=0x00000000000bf4ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
