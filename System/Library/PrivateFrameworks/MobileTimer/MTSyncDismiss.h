//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTProtoBufferSerializable-Protocol.h>
#import <MobileTimer/MTSerializable-Protocol.h>
#import <MobileTimer/MTSyncable-Protocol.h>
#import <MobileTimer/SYChange-Protocol.h>

@class NSDate, NSString;

@interface MTSyncDismiss : NSObject <SYChange, MTProtoBufferSerializable, MTSerializable, MTSyncable>
{
    float _syncVersion;	// 8 = 0x8
    NSDate *_dismissDate;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
}

+ (id)syncDismissOfObjectWithIdentifier:(id)arg1 dismissDate:(id)arg2 date:(id)arg3 version:(float)arg4;	// IMP=0x0000000000048e92
+ (id)syncDismissOfObjectWithIdentifier:(id)arg1 dismissDate:(id)arg2 date:(id)arg3;	// IMP=0x0000000000048e78
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000095a24
+ (id)deserialize:(id)arg1;	// IMP=0x000000000009563a
- (void).cxx_destruct;	// IMP=0x0000000000049414
@property(nonatomic) float syncVersion; // @synthesize syncVersion=_syncVersion;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDate *dismissDate; // @synthesize dismissDate=_dismissDate;
@property(readonly, copy) NSString *description;
- (id)preferred:(id)arg1;	// IMP=0x0000000000049212
- (_Bool)conflicts:(id)arg1;	// IMP=0x00000000000491f6
@property(readonly, nonatomic) unsigned long long syncType;
@property(readonly, nonatomic) NSDate *syncDate;
@property(readonly, nonatomic) NSString *syncIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048ff4
- (id)initWithDismissedObjectIdentifier:(id)arg1 dismissDate:(id)arg2 date:(id)arg3 version:(float)arg4;	// IMP=0x0000000000048f2d
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (void)serializeWithSerializer:(id)arg1;	// IMP=0x0000000000095984
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000095972
- (id)initFromDeserializer:(id)arg1;	// IMP=0x000000000009589c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009588a
- (id)serialize;	// IMP=0x0000000000095510

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

