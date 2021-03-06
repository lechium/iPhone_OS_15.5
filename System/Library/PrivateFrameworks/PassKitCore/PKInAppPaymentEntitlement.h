//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject
{
    NSArray *_merchantIdentifiers;	// 8 = 0x8
    _Bool _ignoreMerchantIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000782c6
@property(readonly, nonatomic) _Bool ignoreMerchantIdentifiers; // @synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers;
- (void)_probeEntitlementsWithToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000000782b3
@property(readonly, nonatomic) _Bool hasMerchantIdentifiers;
- (_Bool)hasMerchantIdentifier:(id)arg1;	// IMP=0x0000000000078280
- (id)initWithToken:(CDStruct_6ad76789)arg1;	// IMP=0x0000000000078220

@end

