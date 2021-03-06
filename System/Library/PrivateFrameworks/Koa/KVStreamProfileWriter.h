//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Koa/KVProfileWriter-Protocol.h>

@class NSOutputStream, NSString;

@interface KVStreamProfileWriter : NSObject <KVProfileWriter>
{
    NSOutputStream *_stream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000011a16
- (_Bool)finishProfile:(id *)arg1;	// IMP=0x0000000000011a0e
- (_Bool)finishDataset:(id *)arg1;	// IMP=0x0000000000011a06
- (_Bool)addItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011764
- (_Bool)startDataset:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000115e3
- (_Bool)startProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011438
- (id)initWithOutputStream:(id)arg1;	// IMP=0x00000000000113b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

