//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTMTLReplayActivity : NSObject
{
    NSString *_activityType;	// 8 = 0x8
    unsigned long long _activityStartTime;	// 16 = 0x10
    unsigned long long _activityEndTime;	// 24 = 0x18
    GTMTLReplayActivity *_previousActivity;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000082af7
@property(retain, nonatomic) GTMTLReplayActivity *previousActivity; // @synthesize previousActivity=_previousActivity;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_activityEndTime;
- (void)signpostIntervalBegin:(unsigned long long)arg1;	// IMP=0x00100000000829fa
- (void)outputToLog:(id)arg1;	// IMP=0x0010000000082978
- (id)jsonObject;	// IMP=0x0010000000082836
- (unsigned int)messageSerial;	// IMP=0x0010000000082820
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000827ab
- (id)initWithType:(id)arg1;	// IMP=0x0010000000082733

@end
