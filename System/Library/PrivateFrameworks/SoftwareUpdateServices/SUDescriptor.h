//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString, SUDocumentation;

@interface SUDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    SUDocumentation *_documentation;	// 8 = 0x8
    NSString *_publisher;	// 16 = 0x10
    NSString *_humanReadableUpdateName;	// 24 = 0x18
    NSString *_productSystemName;	// 32 = 0x20
    NSString *_productVersion;	// 40 = 0x28
    NSString *_productBuildVersion;	// 48 = 0x30
    NSString *_prerequisiteBuild;	// 56 = 0x38
    NSString *_prerequisiteOS;	// 64 = 0x40
    NSString *_releaseType;	// 72 = 0x48
    unsigned long long _downloadSize;	// 80 = 0x50
    unsigned long long _unarchiveSize;	// 88 = 0x58
    unsigned long long _msuPrepareSize;	// 96 = 0x60
    unsigned long long _installationSize;	// 104 = 0x68
    unsigned long long _minimumSystemPartitionSize;	// 112 = 0x70
    int _updateType;	// 120 = 0x78
    _Bool _autoDownloadAllowableForCellular;	// 124 = 0x7c
    _Bool _downloadAllowableForCellular;	// 125 = 0x7d
    _Bool _downloadable;	// 126 = 0x7e
    _Bool _disableSiriVoiceDeletion;	// 127 = 0x7f
    _Bool _disableCDLevel4;	// 128 = 0x80
    _Bool _disableAppDemotion;	// 129 = 0x81
    _Bool _disableIntallTonight;	// 130 = 0x82
    _Bool _rampEnabled;	// 131 = 0x83
    _Bool _criticalOutOfBoxOnly;	// 132 = 0x84
    _Bool _autoUpdateEnabled;	// 133 = 0x85
    NSString *_setupCritical;	// 136 = 0x88
    NSDictionary *_systemPartitionPadding;	// 144 = 0x90
    NSData *_sepDigest;	// 152 = 0x98
    NSData *_rsepDigest;	// 160 = 0xa0
    NSData *_sepTBMDigest;	// 168 = 0xa8
    NSData *_rsepTBMDigest;	// 176 = 0xb0
    NSDate *_releaseDate;	// 184 = 0xb8
    unsigned long long _mdmDelayInterval;	// 192 = 0xc0
    NSString *_assetID;	// 200 = 0xc8
    _Bool _hideInstallAlert;	// 208 = 0xd0
    unsigned long long _audienceType;	// 216 = 0xd8
    unsigned long long _preferenceType;	// 224 = 0xe0
    unsigned long long _upgradeType;	// 232 = 0xe8
    _Bool _promoteAlternateUpdate;	// 240 = 0xf0
    _Bool _downloadableOverCellular;	// 241 = 0xf1
    _Bool _streamingZipCapable;	// 242 = 0xf2
    NSString *_criticalDownloadPolicy;	// 248 = 0xf8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016908
@property(nonatomic) _Bool promoteAlternateUpdate; // @synthesize promoteAlternateUpdate=_promoteAlternateUpdate;
@property(nonatomic) unsigned long long upgradeType; // @synthesize upgradeType=_upgradeType;
@property(nonatomic) unsigned long long preferenceType; // @synthesize preferenceType=_preferenceType;
@property(nonatomic) unsigned long long audienceType; // @synthesize audienceType=_audienceType;
@property(nonatomic) _Bool hideInstallAlert; // @synthesize hideInstallAlert=_hideInstallAlert;
@property(retain, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(nonatomic) unsigned long long mdmDelayInterval; // @synthesize mdmDelayInterval=_mdmDelayInterval;
@property(retain, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain, nonatomic, setter=setRSEPTBMDigest:) NSData *rsepTBMDigest; // @synthesize rsepTBMDigest=_rsepTBMDigest;
@property(retain, nonatomic, setter=setSEPTBMDigest:) NSData *sepTBMDigest; // @synthesize sepTBMDigest=_sepTBMDigest;
@property(retain, nonatomic, setter=setRSEPDigest:) NSData *rsepDigest; // @synthesize rsepDigest=_rsepDigest;
@property(retain, nonatomic, setter=setSEPDigest:) NSData *sepDigest; // @synthesize sepDigest=_sepDigest;
@property(retain, nonatomic) NSDictionary *systemPartitionPadding; // @synthesize systemPartitionPadding=_systemPartitionPadding;
@property(retain, nonatomic) NSString *criticalDownloadPolicy; // @synthesize criticalDownloadPolicy=_criticalDownloadPolicy;
@property(nonatomic) _Bool autoUpdateEnabled; // @synthesize autoUpdateEnabled=_autoUpdateEnabled;
@property(nonatomic) _Bool criticalOutOfBoxOnly; // @synthesize criticalOutOfBoxOnly=_criticalOutOfBoxOnly;
@property(retain, nonatomic) NSString *setupCritical; // @synthesize setupCritical=_setupCritical;
@property(nonatomic) _Bool rampEnabled; // @synthesize rampEnabled=_rampEnabled;
@property(nonatomic, getter=installTonightDisabled, setter=_setDisableInstallTonight:) _Bool disableInstallTonight; // @synthesize disableInstallTonight=_disableIntallTonight;
@property(nonatomic, getter=appDemotionDisabled, setter=_setDisableAppDemotion:) _Bool disableAppDemotion; // @synthesize disableAppDemotion=_disableAppDemotion;
@property(nonatomic, getter=cdLevel4Disabled, setter=_setDisableCDLevel4:) _Bool disableCDLevel4; // @synthesize disableCDLevel4=_disableCDLevel4;
@property(nonatomic, getter=siriVoiceDeletionDisabled, setter=_setDisableSiriVoiceDeletion:) _Bool disableSiriVoiceDeletion; // @synthesize disableSiriVoiceDeletion=_disableSiriVoiceDeletion;
@property(nonatomic, getter=_isStreamingZipCapable, setter=_setStreamingZipCapable:) _Bool streamingZipCapable; // @synthesize streamingZipCapable=_streamingZipCapable;
@property(nonatomic, getter=isDownloadableOverCellular) _Bool downloadableOverCellular; // @synthesize downloadableOverCellular=_downloadableOverCellular;
@property(nonatomic, getter=isDownloadable) _Bool downloadable; // @synthesize downloadable=_downloadable;
@property(nonatomic) _Bool autoDownloadAllowableForCellular; // @synthesize autoDownloadAllowableForCellular=_autoDownloadAllowableForCellular;
@property(retain, nonatomic) SUDocumentation *documentation; // @synthesize documentation=_documentation;
@property(nonatomic) int updateType; // @synthesize updateType=_updateType;
@property(nonatomic, getter=_msuPrepareSize, setter=_setMsuPrepareSize:) unsigned long long msuPrepareSize; // @synthesize msuPrepareSize=_msuPrepareSize;
@property(nonatomic) unsigned long long minimumSystemPartitionSize; // @synthesize minimumSystemPartitionSize=_minimumSystemPartitionSize;
@property(nonatomic, getter=_unarchiveSize, setter=_setUnarchiveSize:) unsigned long long unarchiveSize; // @synthesize unarchiveSize=_unarchiveSize;
@property(nonatomic) unsigned long long installationSize; // @synthesize installationSize=_installationSize;
@property(nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(retain, nonatomic) NSString *releaseType; // @synthesize releaseType=_releaseType;
@property(retain, nonatomic) NSString *prerequisiteOS; // @synthesize prerequisiteOS=_prerequisiteOS;
@property(retain, nonatomic) NSString *prerequisiteBuild; // @synthesize prerequisiteBuild=_prerequisiteBuild;
@property(retain, nonatomic) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productSystemName; // @synthesize productSystemName=_productSystemName;
@property(retain, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
- (id)description;	// IMP=0x0000000000017c51
- (_Bool)isEmergencyOrCritical;	// IMP=0x0000000000017c38
- (unsigned long long)hash;	// IMP=0x0000000000017c0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017b8b
- (id)_buildCompareKey;	// IMP=0x0000000000017af6
- (_Bool)_hasValue:(id)arg1;	// IMP=0x0000000000017acc
- (_Bool)isValidDescriptor;	// IMP=0x0000000000017a39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000176e5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000170d2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016910
- (id)updateTypeName;	// IMP=0x00000000000168af
- (unsigned long long)totalRequiredFreeSpace;	// IMP=0x0000000000016881
- (unsigned long long)preparationSize;	// IMP=0x0000000000016873
- (id)humanReadableUpdateName;	// IMP=0x00000000000167ad
- (void)dealloc;	// IMP=0x00000000000166df
- (id)init;	// IMP=0x0000000000016660

@end
