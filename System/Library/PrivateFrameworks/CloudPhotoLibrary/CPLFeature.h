//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLFeature : NSObject
{
}

+ (id)featureWithName:(id)arg1;	// IMP=0x0000000000111ea5
- (_Bool)handleScopeWhenFeatureIsDisabled:(id)arg1 scopeType:(long long)arg2 store:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000111e9d
- (_Bool)shouldDisableScopeWhenFeatureIsDisabled:(id)arg1;	// IMP=0x0000000000111e95
- (_Bool)enableFeatureInStore:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000111dd3
- (_Bool)disableFeatureInStore:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000111d11

@end

