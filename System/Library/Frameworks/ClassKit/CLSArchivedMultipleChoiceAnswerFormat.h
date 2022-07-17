//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSArray, NSString;

@interface CLSArchivedMultipleChoiceAnswerFormat <CLSRelationable>
{
    long long _type;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005c772
+ (id)relations;	// IMP=0x0000000000026ad2
- (void)addAnswerItem:(id)arg1;	// IMP=0x000000000005c937
@property(readonly, nonatomic) NSArray *archivedAnswerChoiceItems;
- (void)setType:(long long)arg1;	// IMP=0x000000000005c8b5
@property(readonly, nonatomic) long long type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005c7f4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005c77a
- (id)initWithType:(long long)arg1;	// IMP=0x000000000005c6fc
- (id)_init;	// IMP=0x000000000005c6cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
