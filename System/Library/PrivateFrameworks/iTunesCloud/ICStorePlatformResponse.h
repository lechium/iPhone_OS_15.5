//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICStorePlatformResponse-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface ICStorePlatformResponse : NSObject <ICStorePlatformResponse>
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    NSNumber *_enqueuerAccountIdentifier;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
    NSArray *_requestedItemIdentifiers;	// 32 = 0x20
    NSDictionary *_responseDictionary;	// 40 = 0x28
    NSString *_storefrontIdentifier;	// 48 = 0x30
    NSArray *_performanceMetrics;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000177824
@property(readonly, nonatomic) NSArray *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSNumber *enqueuerAccountIdentifier; // @synthesize enqueuerAccountIdentifier=_enqueuerAccountIdentifier;
@property(readonly, copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)_enumerateResultDictionariesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001776e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001776dd
@property(readonly, copy, nonatomic) id rawResponse;
@property(readonly, copy, nonatomic) NSDictionary *resultsDictionary;
@property(readonly, nonatomic, getter=isAuthenticated) _Bool authenticated;
@property(readonly, copy, nonatomic) NSString *storefrontIdentifier;
- (id)itemForIdentifier:(id)arg1;	// IMP=0x00000000001773eb
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001772aa
@property(readonly, copy, nonatomic) NSArray *allItems;
- (id)initWithURLResponse:(id)arg1 requestedItemIdentifiers:(id)arg2;	// IMP=0x0000000000176e82
- (id)initWithResponseDictionary:(id)arg1 requestedItemIdentifiers:(id)arg2;	// IMP=0x0000000000176dc9
- (id)initWithResponseDictionary:(id)arg1;	// IMP=0x0000000000176db0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

