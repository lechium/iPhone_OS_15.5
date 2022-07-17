//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MTBaseEventDataProviderDelegate;

@interface MTBaseEventDataProvider
{
}

- (id)xpVersionMetricsKit:(id)arg1;	// IMP=0x0000000000035bd8
- (id)xpSendMethod:(id)arg1;	// IMP=0x0000000000035a5c
- (id)xpPostFrequency:(id)arg1;	// IMP=0x0000000000035818
- (id)windowOuterWidth:(id)arg1;	// IMP=0x000000000003569c
- (id)windowOuterHeight:(id)arg1;	// IMP=0x0000000000035520
- (id)windowInnerWidth:(id)arg1;	// IMP=0x00000000000353a4
- (id)windowInnerHeight:(id)arg1;	// IMP=0x0000000000035228
- (id)userAgent:(id)arg1;	// IMP=0x00000000000350ac
- (id)timezoneOffset:(id)arg1;	// IMP=0x0000000000034f3a
- (id)storeFrontHeader:(id)arg1;	// IMP=0x0000000000034dbe
- (id)screenWidth:(id)arg1;	// IMP=0x0000000000034c42
- (id)screenHeight:(id)arg1;	// IMP=0x0000000000034ac6
- (id)resourceRevNum:(id)arg1;	// IMP=0x000000000003494a
- (id)pixelRatio:(id)arg1;	// IMP=0x00000000000347ce
- (id)parentPageUrl:(id)arg1;	// IMP=0x0000000000034652
- (id)pageUrl:(id)arg1;	// IMP=0x00000000000344d6
- (id)pageType:(id)arg1;	// IMP=0x00000000000343f7
- (id)pageId:(id)arg1;	// IMP=0x0000000000034318
- (id)pageDetails:(id)arg1;	// IMP=0x0000000000034239
- (id)pageContext:(id)arg1;	// IMP=0x000000000003415a
- (id)page:(id)arg1;	// IMP=0x0000000000033e0c
- (id)osVersion:(id)arg1;	// IMP=0x0000000000033c90
- (id)osBuildNumber:(id)arg1;	// IMP=0x0000000000033b14
- (id)os:(id)arg1;	// IMP=0x0000000000033998
- (id)isSignedIn:(id)arg1;	// IMP=0x00000000000335b3
- (id)hostAppVersion:(id)arg1;	// IMP=0x0000000000033437
- (id)hostApp:(id)arg1;	// IMP=0x00000000000332bb
- (id)hardwareModel:(id)arg1;	// IMP=0x000000000003313f
- (id)hardwareFamily:(id)arg1;	// IMP=0x0000000000032fc3
- (id)eventTime:(id)arg1;	// IMP=0x0000000000032eb2
- (id)dsId:(id)arg1;	// IMP=0x0000000000032d36
- (id)cookies:(id)arg1;	// IMP=0x0000000000032806
- (id)connection:(id)arg1;	// IMP=0x000000000003268a
- (id)clientId:(id)arg1;	// IMP=0x000000000003234f
- (id)clientEventId:(id)arg1;	// IMP=0x000000000003221b
- (id)fetchAllCookies;	// IMP=0x0000000000032106
- (id)capacitySystemAvailable:(id)arg1;	// IMP=0x0000000000031f8a
- (id)capacitySystem:(id)arg1;	// IMP=0x0000000000031e0e
- (id)capacityDisk:(id)arg1;	// IMP=0x0000000000031c92
- (id)capacityDataAvailable:(id)arg1;	// IMP=0x0000000000031b16
- (id)capacityData:(id)arg1;	// IMP=0x000000000003199a
- (id)baseVersion:(id)arg1;	// IMP=0x0000000000031884
- (id)appVersion:(id)arg1;	// IMP=0x0000000000031708
- (id)app:(id)arg1;	// IMP=0x000000000003158c
- (id)knownFields;	// IMP=0x00000000000314ec

// Remaining properties
@property(nonatomic) __weak id <MTBaseEventDataProviderDelegate> delegate; // @dynamic delegate;

@end
