//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSPropertyList;

__attribute__((visibility("hidden")))
@interface __HMDBundleApplicationInfo
{
    LSPropertyList *_entitlements;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000056adde
- (_Bool)isEntitledForSPIAccess;	// IMP=0x000000000056ad08
- (_Bool)isEntitledForAPIAccess;	// IMP=0x000000000056aca0
- (id)initWithRecord:(id)arg1;	// IMP=0x000000000056aaf8
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000056aa75

@end
