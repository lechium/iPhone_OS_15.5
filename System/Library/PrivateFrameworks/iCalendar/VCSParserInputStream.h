//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface VCSParserInputStream : NSObject
{
    NSData *_dataStream;	// 8 = 0x8
    _Bool _discardBuffer;	// 16 = 0x10
    struct _NSRange _buffer;	// 24 = 0x18
    int _currentLineNum;	// 40 = 0x28
    unsigned int _seek;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000002a634
- (id)errorStr:(unsigned long long)arg1;	// IMP=0x000000000002a5df
- (int)lineNum;	// IMP=0x000000000002a5d6
- (_Bool)isContinued;	// IMP=0x000000000002a4a6
- (unsigned long long)loadLineBuffer;	// IMP=0x000000000002a407
- (unsigned long long)getLine:(char *)arg1 withSize:(unsigned long long *)arg2;	// IMP=0x000000000002a35f
- (id)initWithData:(id)arg1;	// IMP=0x000000000002a2f4

@end
