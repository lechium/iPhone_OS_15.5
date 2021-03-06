//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NADiffOperation-Protocol.h>

@class NSNumber, NSString;
@protocol NADiffableItemGroup;

@interface NAGroupDiffOperation : NSObject <NADiffOperation>
{
    unsigned long long _type;	// 8 = 0x8
    id <NADiffableItemGroup> _group;	// 16 = 0x10
    NSNumber *_fromIndex;	// 24 = 0x18
    NSNumber *_toIndex;	// 32 = 0x20
}

+ (id)moveOperationWithGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;	// IMP=0x000000000001a92f
+ (id)deleteOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000001a897
+ (id)insertOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000001a7ff
- (void).cxx_destruct;	// IMP=0x000000000001b118
@property(readonly, copy, nonatomic) NSNumber *toIndex; // @synthesize toIndex=_toIndex;
@property(readonly, copy, nonatomic) NSNumber *fromIndex; // @synthesize fromIndex=_fromIndex;
@property(readonly, nonatomic) id <NADiffableItemGroup> group; // @synthesize group=_group;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)_operationDescriptionWithVerboseType:(_Bool)arg1;	// IMP=0x000000000001ae2b
@property(readonly, copy, nonatomic) NSString *operationDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a9f1
- (id)initWithOperationType:(unsigned long long)arg1 group:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4;	// IMP=0x000000000001a73c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

