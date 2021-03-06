//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

@interface TSUDispatchData : NSObject
{
    NSObject<OS_dispatch_data> *_data;	// 8 = 0x8
    unsigned long long _size;	// 16 = 0x10
    unsigned long long _maxFragmentsCount;	// 24 = 0x18
    NSObject<OS_dispatch_data> *_fragmentedData;	// 32 = 0x20
    NSObject<OS_dispatch_data> *_defragmentedData;	// 40 = 0x28
    unsigned long long _fragmentsCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000064067
@property(readonly, nonatomic) unsigned long long fragmentsCount; // @synthesize fragmentsCount=_fragmentsCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *defragmentedData; // @synthesize defragmentedData=_defragmentedData;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *fragmentedData; // @synthesize fragmentedData=_fragmentedData;
@property(nonatomic) unsigned long long maxFragmentsCount; // @synthesize maxFragmentsCount=_maxFragmentsCount;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *data;
- (void)append:(id)arg1;	// IMP=0x0000000000063ee4
- (id)initWithData:(id)arg1;	// IMP=0x0000000000063e24
- (id)init;	// IMP=0x0000000000063e0b

@end

