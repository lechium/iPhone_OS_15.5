//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSString;

@interface CLSActivityItem <CLSRelationable>
{
    NSString *_title;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001080c
+ (id)relations;	// IMP=0x000000000002587b
- (void).cxx_destruct;	// IMP=0x0000000000010eb0
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *title;
- (_Bool)validateObject:(id *)arg1;	// IMP=0x0000000000010a41
- (id)dictionaryRepresentation;	// IMP=0x0000000000010990
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010767
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010672
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;	// IMP=0x00000000000105d0
- (id)_init;	// IMP=0x00000000000105a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
