//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface AMSUIWebWalletPassAction
{
    _Bool _attemptLynxProvisioning;	// 8 = 0x8
    NSNumber *_lookupFeature;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b0364
@property(retain, nonatomic) NSNumber *lookupFeature; // @synthesize lookupFeature=_lookupFeature;
@property(nonatomic) _Bool attemptLynxProvisioning; // @synthesize attemptLynxProvisioning=_attemptLynxProvisioning;
- (id)_lookupPassForIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000af997
- (id)_attemptLynxProvisioning;	// IMP=0x00000000000af31a
- (id)runAction;	// IMP=0x00000000000aed7c
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000aebf5

@end
