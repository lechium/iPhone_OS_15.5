//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SSMetricsAppInstallEvent
{
}

+ (id)_stringForInstallType:(unsigned long long)arg1;	// IMP=0x000000000015eb68
+ (id)_stringForInstallStatus:(unsigned long long)arg1;	// IMP=0x000000000015eae0
+ (unsigned long long)_installTypeForString:(id)arg1;	// IMP=0x000000000015e984
+ (unsigned long long)_installStatusForString:(id)arg1;	// IMP=0x000000000015e84b
- (_Bool)requiresDiagnosticSendingPermission;	// IMP=0x000000000015e843
- (id)description;	// IMP=0x000000000015e618
@property(nonatomic) long long jobID;
@property(nonatomic) unsigned long long installType;
@property(nonatomic) unsigned long long installStatus;
@property(retain, nonatomic) NSString *installError;
@property(retain, nonatomic) NSString *hardwareType;
@property(retain, nonatomic) NSString *bundleID;
@property(retain, nonatomic) NSString *buildVersion;
- (id)init;	// IMP=0x000000000015e294

@end
