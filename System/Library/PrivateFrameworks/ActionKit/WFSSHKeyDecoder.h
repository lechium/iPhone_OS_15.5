//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface WFSSHKeyDecoder : NSObject
{
    NSData *_data;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
    unsigned long long _length;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000032bfdf
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)decodeDataWithPrecedingLength;	// IMP=0x000000000032bf7d
- (id)decodeDataWithLength:(unsigned long long)arg1;	// IMP=0x000000000032bee1
- (id)decodeStringWithPrecedingLength;	// IMP=0x000000000032beb1
- (id)decodeStringWithLength:(unsigned long long)arg1;	// IMP=0x000000000032be2f
- (unsigned int)decodeInteger;	// IMP=0x000000000032bdde
- (void)advanceBy:(unsigned long long)arg1;	// IMP=0x000000000032bdc5
- (const char *)currentPointer;	// IMP=0x000000000032bd6b
- (id)initWithData:(id)arg1;	// IMP=0x000000000032bcc4

@end
