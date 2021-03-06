//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatus/NSCopying-Protocol.h>
#import <SystemStatus/STStatusDomainDataDiff-Protocol.h>

@class NSString, STListData;

@interface STListDataDiff : NSObject <STStatusDomainDataDiff, NSCopying>
{
    STListData *_objectsAdded;	// 8 = 0x8
    STListData *_objectsRemoved;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ed1f
+ (id)diffFromListData:(id)arg1 toListData:(id)arg2;	// IMP=0x000000000000dc05
- (void).cxx_destruct;	// IMP=0x000000000000eeef
@property(readonly, copy, nonatomic) STListData *objectsRemoved; // @synthesize objectsRemoved=_objectsRemoved;
@property(readonly, copy, nonatomic) STListData *objectsAdded; // @synthesize objectsAdded=_objectsAdded;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000edd5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ed27
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ed14
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ea77
- (id)diffByApplyingDiff:(id)arg1;	// IMP=0x000000000000e48a
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)applyToMutableListData:(id)arg1;	// IMP=0x000000000000e13f
- (id)listDataByApplyingToListData:(id)arg1;	// IMP=0x000000000000e0f9
- (id)initWithObjectsAdded:(id)arg1 objectsRemoved:(id)arg2;	// IMP=0x000000000000e040
- (id)init;	// IMP=0x000000000000e02a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

