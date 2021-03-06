//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICacheCoding-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKUIInAppPurchase : NSObject <SKUICacheCoding>
{
    NSString *_formattedPrice;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000209585
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *formattedPrice; // @synthesize formattedPrice=_formattedPrice;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;	// IMP=0x00000000002093d0
- (id)initWithInAppPurchaseDictionary:(id)arg1;	// IMP=0x00000000002092a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

