//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SGInteractionKey
{
}

+ (_Bool)isSupportedEntityType:(long long)arg1;	// IMP=0x00000000001b1686
- (id)description;	// IMP=0x00000000001b15f0
@property(readonly, nonatomic) NSString *personHandle;
@property(readonly, nonatomic) NSString *bundleId;
- (id)init;	// IMP=0x00000000001b1545
- (id)initWithBundleId:(id)arg1 personHandle:(id)arg2;	// IMP=0x00000000001b13e2
- (id)initWithSource:(id)arg1 uniqueIdentifier:(id)arg2;	// IMP=0x00000000001b13d0

@end

