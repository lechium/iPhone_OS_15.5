//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSIntegerSet, NSDictionary, NSOrderedSet;

@interface STStatusDomainDataChangeLog : NSObject
{
    NSOrderedSet *_sortedRecordKeys;	// 8 = 0x8
    NSDictionary *_recordsByKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000334f
@property(readonly, copy, nonatomic) NSDictionary *recordsByKey; // @synthesize recordsByKey=_recordsByKey;
@property(readonly, copy, nonatomic) NSOrderedSet *sortedRecordKeys; // @synthesize sortedRecordKeys=_sortedRecordKeys;
- (id)recordForKey:(id)arg1;	// IMP=0x00000000000032b8
- (id)currentDataForDomain:(unsigned long long)arg1;	// IMP=0x00000000000030b9
@property(readonly, nonatomic) BSIntegerSet *domainsWithData;
- (id)initWithRecordKeys:(id)arg1;	// IMP=0x0000000000002cfc

@end

