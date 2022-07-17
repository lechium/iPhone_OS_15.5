//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString;

@interface SGPseudoEventKey : NSObject <SGEntityKey>
{
    NSString *_serialized;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSString *_groupId;	// 24 = 0x18
}

+ (_Bool)isSupportedEntityType:(long long)arg1;	// IMP=0x0000000000194469
- (void).cxx_destruct;	// IMP=0x0000000000194436
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)alternativeKeysForEventKitQuery;	// IMP=0x00000000001941bd
- (_Bool)isDropoff;	// IMP=0x0000000000194029
- (id)keyForEventKitQuery;	// IMP=0x0000000000194017
@property(readonly, copy) NSString *description;
- (id)serialize;	// IMP=0x0000000000193fc5
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToPseudoEventKey:(id)arg1;	// IMP=0x0000000000193f8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000193f24
- (id)initWithGloballyUniqueId:(id)arg1;	// IMP=0x0000000000193e3e
- (id)initWithSerialized:(id)arg1;	// IMP=0x0000000000193cba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000193caf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
