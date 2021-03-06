//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CoreSpeechXPCProtocol-Protocol.h>

@class CoreSpeechXPCFakeModelMonitor;

@interface CoreSpeechXPC : NSObject <CoreSpeechXPCProtocol>
{
    CoreSpeechXPCFakeModelMonitor *_fakeAssetMonitor;	// 8 = 0x8
}

+ (void)logLanguageMismatchMetricWithJarvisSelectedLocale:(id)arg1 jarvisTriggerMode:(long long)arg2;	// IMP=0x00000000000b69c8
+ (id)accessoryModelTypeToString:(long long)arg1;	// IMP=0x00000000000b671c
- (void).cxx_destruct;	// IMP=0x00000000000b69e9
@property(retain, nonatomic) CoreSpeechXPCFakeModelMonitor *fakeAssetMonitor; // @synthesize fakeAssetMonitor=_fakeAssetMonitor;
- (void)_fetchVoiceTriggerInstalledAssetWithLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b6746
- (id)selectFallbackModelForLocale:(id)arg1 downloadedModels:(id)arg2 preinstalledModels:(id)arg3 rtLocaleMap:(id)arg4;	// IMP=0x00000000000b6307
- (id)getAccessoryFallbackFamilyLocal:(id)arg1 fromLocaleMap:(id)arg2;	// IMP=0x00000000000b6050
- (id)getAccessoryFallbackLocalTable;	// IMP=0x00000000000b6000
- (void)voiceTriggerJarvisLanguageList:(id)arg1 jarvisSelectedLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b57c9
- (void)voiceTriggerHearstRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3 downloadedModels:(id)arg4 preinstalledModels:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000b578f
- (void)voiceTriggerRemoraRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3 endpointId:(id)arg4 downloadedModels:(id)arg5 preinstalledModels:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000000b5752
- (void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3 downloadedModels:(id)arg4 preinstalledModels:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000b5740
- (void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 accessoryRTModelType:(long long)arg3 locale:(id)arg4 endpointId:(id)arg5 downloadedModels:(id)arg6 preinstalledModels:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000000b467d
- (void)_handleFakeHearstModelRequest:(id)arg1 majorVersion:(unsigned long long)arg2 minorVersion:(unsigned long long)arg3 downloadedModels:(id)arg4 preinstalledModels:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000b39b3
- (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b38e1
- (void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b380f
- (id)initWithFakeMonitor:(id)arg1;	// IMP=0x00000000000b379f

@end

