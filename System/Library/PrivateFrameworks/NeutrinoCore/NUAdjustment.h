//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUIdentifiable-Protocol.h>

@class NSDictionary, NSString, NUAdjustmentSchema, NUIdentifier;

@interface NUAdjustment : NSObject <NUIdentifiable>
{
    NUIdentifier *_identifier;	// 8 = 0x8
    NUAdjustmentSchema *_schema;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012660f
@property(readonly, nonatomic) NUAdjustmentSchema *schema; // @synthesize schema=_schema;
- (void)reset;	// IMP=0x00000000001260bb
- (_Bool)isEqualToAdjustment:(id)arg1;	// IMP=0x0000000000125bb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000125b5a
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NUIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDictionary *settings;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000001258a8
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000125896
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000124d56
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000124058
- (id)initWithAdjustmentSchema:(id)arg1;	// IMP=0x0000000000123cd1
- (id)init;	// IMP=0x000000000012395e

// Remaining properties
@property(readonly) Class superclass;

@end
