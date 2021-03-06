//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardLineSerialization-Protocol.h>

@class NSString;
@protocol CNVCardSerializationStorage;

@interface CNVCardLineSerializationStrategyImpl : NSObject <CNVCardLineSerialization>
{
    id <CNVCardSerializationStorage> _storage;	// 8 = 0x8
}

+ (id)serializerWithStorage:(id)arg1;	// IMP=0x000000000001de9a
- (void).cxx_destruct;	// IMP=0x000000000001e304
- (void)insertLine:(id)arg1 atMarker:(id)arg2;	// IMP=0x000000000001e1f6
- (unsigned long long)estimatedDataLength;	// IMP=0x000000000001e1e0
- (id)insertionMarker;	// IMP=0x000000000001e1ca
- (void)serializeVersionPlaceholder;	// IMP=0x000000000001e1c4
- (void)serializeOpaqueValue:(id)arg1;	// IMP=0x000000000001e154
- (void)serializeData:(id)arg1;	// IMP=0x000000000001e14e
- (void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;	// IMP=0x000000000001e148
- (void)serializeString:(id)arg1;	// IMP=0x000000000001e142
- (_Bool)canSerializeData:(id)arg1;	// IMP=0x000000000001e126
- (_Bool)canSerializeArray:(id)arg1;	// IMP=0x000000000001e10a
- (_Bool)canSerializeString:(id)arg1;	// IMP=0x000000000001e0ee
- (void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2;	// IMP=0x000000000001e0e8
- (void)serializeParameters:(id)arg1;	// IMP=0x000000000001e0e2
- (void)serializeName:(id)arg1;	// IMP=0x000000000001e0cc
- (void)serializeGroupingName:(id)arg1;	// IMP=0x000000000001e0c6
- (void)willSerializeValue;	// IMP=0x000000000001e0c0
- (void)serializeLine:(id)arg1;	// IMP=0x000000000001df50
- (id)initWithStorage:(id)arg1;	// IMP=0x000000000001dee3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

