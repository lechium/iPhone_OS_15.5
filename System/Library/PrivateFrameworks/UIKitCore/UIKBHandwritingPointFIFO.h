//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBHandwritingPointFIFO : NSObject
{
    UIKBHandwritingPointFIFO *_nextFIFO;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000094eb47
@property(retain, nonatomic) UIKBHandwritingPointFIFO *nextFIFO; // @synthesize nextFIFO=_nextFIFO;
- (void)clear;	// IMP=0x000000000094eaef
- (void)flush;	// IMP=0x000000000094eab2
- (void)addPoint:(struct)arg1;	// IMP=0x000000000094eaa0
- (void)emitPoint:(struct)arg1;	// IMP=0x000000000094ea4a
- (id)initWithFIFO:(id)arg1;	// IMP=0x000000000094e9e2

@end

