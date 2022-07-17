//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DOCFeatureStateFFSetting
{
    NSString *_domainID;	// 16 = 0x10
    NSString *_featureID;	// 24 = 0x18
    long long _valueMode;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000a0db
@property long long valueMode; // @synthesize valueMode=_valueMode;
@property(retain) NSString *featureID; // @synthesize featureID=_featureID;
@property(retain) NSString *domainID; // @synthesize domainID=_domainID;
- (id)initWithDomainID:(id)arg1 featureID:(id)arg2 valueMode:(long long)arg3;	// IMP=0x0000000000009d15

@end
