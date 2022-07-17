//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatus/STStatusDomainClientHandle-Protocol.h>

@class NSString;
@protocol STStatusDomainData, STStatusDomainServerHandle;

@interface STStatusDomain : NSObject <STStatusDomainClientHandle>
{
    _Bool _invalidated;	// 8 = 0x8
    CDUnknownBlockType _dataChangedBlock;	// 16 = 0x10
    id <STStatusDomainServerHandle> _serverHandle;	// 24 = 0x18
}

+ (unsigned long long)statusDomainName;	// IMP=0x0000000000012c34
- (void).cxx_destruct;	// IMP=0x0000000000012d08
@property(readonly, nonatomic) id <STStatusDomainServerHandle> serverHandle; // @synthesize serverHandle=_serverHandle;
@property(copy, nonatomic) CDUnknownBlockType dataChangedBlock; // @synthesize dataChangedBlock=_dataChangedBlock;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)observeData:(id)arg1 forDomain:(unsigned long long)arg2;	// IMP=0x0000000000012c41
- (void)observeDataWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012bcc
- (void)invalidate;	// IMP=0x0000000000012af9
@property(readonly, copy, nonatomic) id <STStatusDomainData> data;
- (void)dealloc;	// IMP=0x00000000000129e0
- (id)initWithServerHandle:(id)arg1;	// IMP=0x0000000000012946
- (id)init;	// IMP=0x00000000000128ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
