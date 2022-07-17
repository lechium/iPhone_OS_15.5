//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface _WGConcreteDataSource : NSObject
{
    NSMutableArray *_observers;	// 8 = 0x8
    NSMutableDictionary *_identifiersToData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000071da
- (id)datumWithIdentifier:(id)arg1;	// IMP=0x0000000000007176
@property(readonly, nonatomic) NSArray *data;
@property(readonly, nonatomic) NSArray *dataIdentifiers;
- (void)dataSource:(id)arg1 removeDatumWithIdentifier:(id)arg2 observerUpdateBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006f7b
- (void)dataSource:(id)arg1 replaceWithDatum:(id)arg2 observerUpdateBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006dd1
- (void)removeObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006d66
- (void)addObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006cfb
- (id)init;	// IMP=0x0000000000006c86

@end
