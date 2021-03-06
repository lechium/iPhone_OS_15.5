//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface PBBridgeIDSMessageInstance : NSObject
{
    unsigned short _typeID;	// 8 = 0x8
    NSNumber *_sentAbsoluteTime;	// 16 = 0x10
    long long _retryCount;	// 24 = 0x18
    double _retryInterval;	// 32 = 0x20
    CDUnknownBlockType _retryAction;	// 40 = 0x28
}

+ (id)newMessageInstanceOfType:(unsigned short)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3 withAction:(CDUnknownBlockType)arg4;	// IMP=0x000000000002c8e5
- (void).cxx_destruct;	// IMP=0x000000000002cb24
@property(copy, nonatomic) CDUnknownBlockType retryAction; // @synthesize retryAction=_retryAction;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned short typeID; // @synthesize typeID=_typeID;
@property(retain, nonatomic) NSNumber *sentAbsoluteTime; // @synthesize sentAbsoluteTime=_sentAbsoluteTime;
- (id)description;	// IMP=0x000000000002c9fd
- (id)init;	// IMP=0x000000000002c9c3

@end

