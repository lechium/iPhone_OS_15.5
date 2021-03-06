//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface NviContext : NSObject
{
    _Bool _requestHistoricalAudio;	// 8 = 0x8
    _Bool _shouldLogRawSensorData;	// 9 = 0x9
    NSDictionary *_voiceTriggerInfo;	// 16 = 0x10
    unsigned long long _reqStartAudioSampleId;	// 24 = 0x18
    unsigned long long _reqStartMachAbsTime;	// 32 = 0x20
    NSString *_rootLogDir;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000010ac4e
@property(retain, nonatomic) NSString *rootLogDir; // @synthesize rootLogDir=_rootLogDir;
@property(nonatomic) _Bool shouldLogRawSensorData; // @synthesize shouldLogRawSensorData=_shouldLogRawSensorData;
@property(nonatomic) unsigned long long reqStartMachAbsTime; // @synthesize reqStartMachAbsTime=_reqStartMachAbsTime;
@property(nonatomic) unsigned long long reqStartAudioSampleId; // @synthesize reqStartAudioSampleId=_reqStartAudioSampleId;
@property(nonatomic) _Bool requestHistoricalAudio; // @synthesize requestHistoricalAudio=_requestHistoricalAudio;
@property(retain, nonatomic) NSDictionary *voiceTriggerInfo; // @synthesize voiceTriggerInfo=_voiceTriggerInfo;
- (id)description;	// IMP=0x000000000010ab83

@end

