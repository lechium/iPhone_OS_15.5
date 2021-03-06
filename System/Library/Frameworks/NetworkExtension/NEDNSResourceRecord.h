//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEDNSResourceRecord : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    long long _recordClass;	// 24 = 0x18
    unsigned long long _timeToLive;	// 32 = 0x20
    unsigned long long _dataLength;	// 40 = 0x28
    NSString *_resourceString;	// 48 = 0x30
}

+ (id)typeToString:(long long)arg1;	// IMP=0x0000000000045d2c
- (void).cxx_destruct;	// IMP=0x0000000000045e54
@property(readonly) NSString *resourceString; // @synthesize resourceString=_resourceString;
@property(readonly) unsigned long long dataLength; // @synthesize dataLength=_dataLength;
@property(readonly) unsigned long long timeToLive; // @synthesize timeToLive=_timeToLive;
@property(readonly) long long recordClass; // @synthesize recordClass=_recordClass;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) long long type; // @synthesize type=_type;
- (id)initFromByteParser:(id)arg1;	// IMP=0x000000000004551c

@end

