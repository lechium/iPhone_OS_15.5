//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ETPointFIFO : NSObject
{
    ETPointFIFO *_nextFIFO;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000013145
@property(retain, nonatomic) ETPointFIFO *nextFIFO; // @synthesize nextFIFO=_nextFIFO;
- (void)clear;	// IMP=0x0000000000013114
- (void)flush;	// IMP=0x00000000000130fe
- (void)addPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000130ec
- (void)emitPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000130d6
- (id)initWithFIFO:(id)arg1;	// IMP=0x0000000000013042

@end
