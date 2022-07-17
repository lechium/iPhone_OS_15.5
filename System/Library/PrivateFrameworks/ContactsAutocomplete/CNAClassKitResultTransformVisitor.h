//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSDataStore, CNAutocompleteResultFactory, NSMutableArray;

@interface CNAClassKitResultTransformVisitor : NSObject
{
    NSMutableArray *_results;	// 8 = 0x8
    CNAutocompleteResultFactory *_factory;	// 16 = 0x10
    CLSDataStore *_dataStore;	// 24 = 0x18
    unsigned long long _searchType;	// 32 = 0x20
}

+ (id)addressForPerson:(id)arg1 searchType:(unsigned long long)arg2;	// IMP=0x0000000000015fc5
- (void).cxx_destruct;	// IMP=0x0000000000016283
@property(readonly, nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(readonly, nonatomic) CLSDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(readonly, nonatomic) CNAutocompleteResultFactory *factory; // @synthesize factory=_factory;
- (void)visitClass:(id)arg1;	// IMP=0x0000000000015ffb
- (void)visitPerson:(id)arg1;	// IMP=0x0000000000015def
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015db7
- (id)reduceCollection:(id)arg1;	// IMP=0x0000000000015c72
- (id)description;	// IMP=0x0000000000015bce
- (id)initWithFactory:(id)arg1 dataStore:(id)arg2 searchType:(unsigned long long)arg3;	// IMP=0x0000000000015b03

@end
