//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SUUtility : NSObject
{
}

+ (id)bootTime;	// IMP=0x00000000000244e9
+ (_Bool)deleteKeepAliveFile;	// IMP=0x0000000000024201
+ (_Bool)writeKeepAliveFile;	// IMP=0x00000000000241a6
+ (id)systemContainerURL;	// IMP=0x00000000000240af
+ (id)prettyPrintDate:(id)arg1;	// IMP=0x000000000002408b
+ (id)addToDate:(id)arg1 numberOfDays:(long long)arg2;	// IMP=0x0000000000023ff7
+ (id)gregorianCalendar;	// IMP=0x0000000000023f96
+ (id)URLIfFileExists:(id)arg1;	// IMP=0x0000000000023f3b
+ (void)setCacheable:(_Bool)arg1;	// IMP=0x0000000000023f35
+ (void)purgeV1SUAssets;	// IMP=0x0000000000023bd8
+ (unsigned long long)devicePadding:(id)arg1;	// IMP=0x0000000000023bd0
+ (_Bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(_Bool)arg3 disableCDLevelFour:(_Bool)arg4 disableSiriDeletion:(_Bool)arg5 disableAppDemotion:(_Bool)arg6;	// IMP=0x0000000000023bc8
+ (_Bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(_Bool)arg3;	// IMP=0x0000000000023ba4
+ (_Bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2;	// IMP=0x0000000000023b90
+ (_Bool)appDemotionIsEnabled;	// IMP=0x0000000000023a5f
+ (void)enableAppDemotion:(_Bool)arg1;	// IMP=0x000000000002399c
+ (unsigned long long)systemPartitionGrowth:(id)arg1;	// IMP=0x000000000002384c
+ (long long)demoteApps:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x0000000000023844
+ (long long)cacheDelete:(id)arg1;	// IMP=0x000000000002383c
+ (unsigned long long)totalPurgeableSpace:(id)arg1;	// IMP=0x0000000000023834
+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long *)arg3 isAutoDownload:(_Bool)arg4 disableCDLevelFour:(_Bool)arg5 disableCDLevelThree:(_Bool)arg6 disableSiriDeletion:(_Bool)arg7 disableAppDemotion:(_Bool)arg8;	// IMP=0x0000000000023825
+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long *)arg3 isAutoDownload:(_Bool)arg4 includePurging:(_Bool)arg5;	// IMP=0x00000000000237f9
+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long *)arg3 isAutoDownload:(_Bool)arg4;	// IMP=0x00000000000237d7
+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long *)arg3;	// IMP=0x00000000000237c2
+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2;	// IMP=0x0000000000023793
+ (long long)appDemoteableSpace;	// IMP=0x000000000002378b
+ (void)postFailureNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4;	// IMP=0x000000000002357a
+ (void)postAutoUpdateInformationalNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000023258
+ (id)internalRecoveryStringForErrorCode:(long long)arg1;	// IMP=0x0000000000022f11
+ (id)autoDownloadExpiredError:(_Bool)arg1;	// IMP=0x0000000000022e62
+ (long long)MADownloadErrorCodeToSUDownloadErrorCode:(long long)arg1;	// IMP=0x0000000000022e24
+ (long long)translateErrorCodeFromError:(id)arg1;	// IMP=0x0000000000022d78
+ (id)translateError:(id)arg1 withAddedUserInfo:(id)arg2;	// IMP=0x0000000000022b46
+ (id)translateError:(id)arg1;	// IMP=0x0000000000022b32
+ (void)assignError:(id *)arg1 withError:(id)arg2 translate:(_Bool)arg3;	// IMP=0x0000000000022ae5
+ (void)assignError:(id *)arg1 withCode:(long long)arg2;	// IMP=0x0000000000022a98
+ (id)errorRemovingUserInfoKey:(id)arg1 originalError:(id)arg2;	// IMP=0x000000000002297c
+ (id)errorWithCode:(long long)arg1 originalError:(id)arg2;	// IMP=0x0000000000022855
+ (id)errorWithCode:(long long)arg1;	// IMP=0x000000000002283a
+ (int)randomIntWithMinVal:(unsigned int)arg1 maxVal:(unsigned int)arg2;	// IMP=0x00000000000227cf
+ (_Bool)alarmSetBeforeDate:(id)arg1;	// IMP=0x00000000000224b6
+ (_Bool)isProductionFused;	// IMP=0x0000000000022437
+ (_Bool)currentReleaseTypeIsInternal;	// IMP=0x00000000000223fe
+ (id)currentReleaseType;	// IMP=0x0000000000022388
+ (id)currentProductBuild;	// IMP=0x0000000000022312
+ (id)currentProductVersion;	// IMP=0x000000000002229c
+ (id)currentProductType;	// IMP=0x0000000000022226
+ (id)currentDeviceName;	// IMP=0x00000000000221b0
+ (id)currentProductCategory;	// IMP=0x000000000002213a
+ (id)serialNumber;	// IMP=0x00000000000220c4
+ (_Bool)cellularDataIsEnabled;	// IMP=0x00000000000220bc
+ (_Bool)hasCellularRadio;	// IMP=0x00000000000220ab
+ (_Bool)isCellularDataCapable;	// IMP=0x000000000002209a
+ (_Bool)isWiFiCapable;	// IMP=0x0000000000022092
+ (_Bool)isDaemon;	// IMP=0x0000000000022086
+ (void)setIsDaemon:(_Bool)arg1;	// IMP=0x000000000002207a
+ (id)fastWorkQueue;	// IMP=0x0000000000022026
+ (id)mainWorkQueue;	// IMP=0x0000000000021fd2
+ (id)appDemotionSettingQueue;	// IMP=0x0000000000021f8b
+ (id)taskQueue;	// IMP=0x0000000000021f44

@end

