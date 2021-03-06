//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString, NSUUID;

@interface BMAlarmEvent <BMStoreData, BMProtoBufWrapper>
{
    _Bool _isSleepAlarm;	// 8 = 0x8
    unsigned long long _eventType;	// 16 = 0x10
    NSUUID *_alarmID;	// 24 = 0x18
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000c8050
- (void).cxx_destruct;	// IMP=0x00000000000c8754
@property(readonly, nonatomic) NSUUID *alarmID; // @synthesize alarmID=_alarmID;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) _Bool isSleepAlarm; // @synthesize isSleepAlarm=_isSleepAlarm;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c85c2
- (id)proto;	// IMP=0x00000000000c850d
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000c8471
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000c8303
- (id)encodeAsProto;	// IMP=0x00000000000c82b3
- (id)json;	// IMP=0x00000000000c81f3
- (id)jsonDict;	// IMP=0x00000000000c80ab
- (id)serialize;	// IMP=0x00000000000c8099
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithEventType:(unsigned long long)arg1 alarmID:(id)arg2 isSleepAlarm:(_Bool)arg3;	// IMP=0x00000000000c7f55
- (id)init;	// IMP=0x00000000000c7f4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

