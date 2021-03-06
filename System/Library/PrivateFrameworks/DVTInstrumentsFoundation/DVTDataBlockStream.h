//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DVTInputStream-Protocol.h>
#import <DVTInstrumentsFoundation/DVTOutputStream-Protocol.h>

@class NSString;

@interface DVTDataBlockStream : NSObject <DVTInputStream, DVTOutputStream>
{
    struct list<NSData *, std::allocator<NSData *>> _records;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000052688
- (void).cxx_destruct;	// IMP=0x000000000005267a
@property(readonly, nonatomic) _Bool supportsPeek;
- (long long)write:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000525c6
- (_Bool)hasSpace;	// IMP=0x00000000000525be
- (_Bool)hasData;	// IMP=0x00000000000525b0
- (id)peek:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000005259e
- (id)read:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000052533
- (id)createNextStream:(id *)arg1;	// IMP=0x000000000005251a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

