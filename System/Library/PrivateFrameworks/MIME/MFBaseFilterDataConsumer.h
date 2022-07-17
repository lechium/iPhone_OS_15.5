//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MIME/MFDataConsumer-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer>
{
    NSMutableArray *_consumers;	// 8 = 0x8
    _Bool _serialAppend;	// 16 = 0x10
}

+ (id)filterWithConsumer:(id)arg1;	// IMP=0x0000000000015c58
+ (id)filterWithConsumers:(id)arg1;	// IMP=0x0000000000015bfb
- (void).cxx_destruct;	// IMP=0x000000000001624e
@property(readonly, nonatomic) NSArray *consumers; // @synthesize consumers=_consumers;
@property(nonatomic, getter=isSerialAppend) _Bool serialAppend; // @synthesize serialAppend=_serialAppend;
- (void)done;	// IMP=0x00000000000160e4
- (long long)appendData:(id)arg1;	// IMP=0x0000000000015ddf
- (id)initWithConsumer:(id)arg1;	// IMP=0x0000000000015d3e
- (id)initWithConsumers:(id)arg1;	// IMP=0x0000000000015cb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
