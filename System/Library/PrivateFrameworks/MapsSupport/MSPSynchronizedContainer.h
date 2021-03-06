//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPCloudContainerObserver-Protocol.h>
#import <MapsSupport/MSPContainerObserver-Protocol.h>

@class MSPCloudContainer, MSPCloudSynchronizer, MSPContainer, NSString;

@interface MSPSynchronizedContainer : NSObject <MSPContainerObserver, MSPCloudContainerObserver>
{
    _Bool _requiresMerge;	// 8 = 0x8
    MSPCloudSynchronizer *_synchronizer;	// 16 = 0x10
    MSPContainer *_container;	// 24 = 0x18
    MSPCloudContainer *_cloudContainer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009b72f
@property(retain, nonatomic) MSPCloudContainer *cloudContainer; // @synthesize cloudContainer=_cloudContainer;
@property(retain, nonatomic) MSPContainer *container; // @synthesize container=_container;
@property(nonatomic) __weak MSPCloudSynchronizer *synchronizer; // @synthesize synchronizer=_synchronizer;
- (void)cloudContainerDidChange:(id)arg1;	// IMP=0x000000000009b63b
- (void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;	// IMP=0x000000000009b56c
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;	// IMP=0x000000000009b4d8
@property(readonly, copy) NSString *description;
- (void)cancelMergeWithError:(id)arg1;	// IMP=0x000000000009b3b7
- (void)mergeWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009afc0
- (void)prepareCloudWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009aa4b
@property(nonatomic) _Bool requiresMerge; // @synthesize requiresMerge=_requiresMerge;
- (void)setRequiresMerge:(_Bool)arg1 withReason:(unsigned long long)arg2;	// IMP=0x000000000009a99a
- (id)initWithContainer:(id)arg1 synchronizer:(id)arg2;	// IMP=0x000000000009a87c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

