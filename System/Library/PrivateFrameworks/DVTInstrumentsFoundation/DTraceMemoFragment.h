//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DTraceMemoFragment : NSObject
{
    unsigned int _code;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    long long _filePositionEnd;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned int code; // @synthesize code=_code;
@property(readonly, nonatomic) long long filePositionEnd; // @synthesize filePositionEnd=_filePositionEnd;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithTimestamp:(unsigned long long)arg1 filePositionEnd:(long long)arg2 code:(unsigned int)arg3;	// IMP=0x00000000000511e5

@end
