//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface BLDAAPBuffer : NSObject
{
    NSData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003c33a
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (long long)appendHeader:(unsigned int)arg1 size:(unsigned int)arg2;	// IMP=0x000000000003c27c
- (long long)appendUInt64:(unsigned long long)arg1 withCode:(unsigned int)arg2;	// IMP=0x000000000003c1f1
- (long long)appendUInt32:(unsigned int)arg1 withCode:(unsigned int)arg2;	// IMP=0x000000000003c168
- (long long)appendUInt8:(unsigned char)arg1 withCode:(unsigned int)arg2;	// IMP=0x000000000003c0e1
- (id)init;	// IMP=0x000000000003c08b

@end

