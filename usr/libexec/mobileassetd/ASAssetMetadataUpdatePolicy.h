//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASAssetMetadataUpdatePolicy : NSObject
{
}

+ (id)policy;	// IMP=0x002000000004ca22
- (double)automaticMetadataUpdateIntervalForAssetType:(id)arg1;	// IMP=0x002000000004cefb
- (double)defaultNetworkTimeout;	// IMP=0x001000000004ceed
- (id)checkPreferencesForOverride:(id)arg1;	// IMP=0x001000000004ce32
- (id)getSystemAppURL:(id)arg1;	// IMP=0x001000000004cdbc
- (id)serverURLForAssetType:(id)arg1;	// IMP=0x001000000004cc44
- (char *)trainName;	// IMP=0x001000000004cb26
- (id)_stringPreferenceValueForKey:(id)arg1;	// IMP=0x001000000004cab6
- (void)getDelay:(double *)arg1 andGracePeriod:(double *)arg2 forUpdateError:(id)arg3;	// IMP=0x001000000004caa0
- (void)getDelay:(double *)arg1 andGracePeriod:(double *)arg2 forUpdateInterval:(double)arg3;	// IMP=0x001000000004ca67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
