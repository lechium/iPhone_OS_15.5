//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BRCCoreAnalyticsReporter : NSObject
{
}

+ (void)sendTelemetryEvent:(id)arg1 withReport:(id)arg2;	// IMP=0x00000000002bb044
+ (void)newAppTelemetryMetricEvent:(id)arg1;	// IMP=0x00000000002bab5c
+ (_Bool)uploadLoadErrorsAsIndividualEvents:(id)arg1 syncType:(id)arg2 totalItemsCount:(unsigned long long)arg3 zoneCountsOnly:(_Bool)arg4 isFolderSharingEnabled:(_Bool)arg5 dsid:(id)arg6 rampNumber:(id)arg7;	// IMP=0x00000000002ba208
+ (_Bool)uploadSyncErrorsAsIndividualEvents:(id)arg1 syncType:(id)arg2 totalItemsCount:(unsigned long long)arg3 zoneType:(id)arg4 zoneCountsOnly:(_Bool)arg5 isFolderSharingEnabled:(_Bool)arg6 dsid:(id)arg7 rampNumber:(id)arg8;	// IMP=0x00000000002b9e03
+ (id)telemetryDictionaryToUploadForError:(id)arg1 errorMessage:(id)arg2 count:(id)arg3 syncType:(id)arg4 totalItemsCount:(id)arg5 zoneType:(id)arg6 zoneCountsOnly:(_Bool)arg7 isFolderSharingEnabled:(_Bool)arg8 dsid:(id)arg9 rampNumber:(id)arg10 lastFailureDate:(id)arg11 pcsState:(id)arg12;	// IMP=0x00000000002b9a9a
+ (id)dictionaryForErrorsByZone:(id)arg1 wantPrivateZone:(_Bool)arg2;	// IMP=0x00000000002b98e4
+ (void)uploadMetricsReport:(id)arg1;	// IMP=0x00000000002b9048

@end

