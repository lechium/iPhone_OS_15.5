//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PDCollectionPublishOperation
{
    _Bool _firstRun;	// 24 = 0x18
    NSArray *_objectsToDelete;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000678ac
- (id)objectsToDelete;	// IMP=0x0010000000067897
- (id)createPayloadForDeletingCollection:(id)arg1;	// IMP=0x00100000000677f4
- (id)createPayloadForDeletingCollectionItem:(id)arg1;	// IMP=0x0010000000067751
- (id)logSubsystem;	// IMP=0x001000000006773d
- (_Bool)needsToMakeNetworkRequest;	// IMP=0x0010000000067735
- (_Bool)wantsToExecute;	// IMP=0x00100000000676f9
- (void)execute;	// IMP=0x00100000000676bd
- (_Bool)handleZoneRemoved:(id)arg1;	// IMP=0x00100000000676b5
- (id)acceptContentType;	// IMP=0x00100000000676a8
- (id)requestContentType;	// IMP=0x001000000006769b
- (Class)expectedResponseClass;	// IMP=0x001000000006768a
- (id)requestData;	// IMP=0x0010000000067114
- (int)actionForPayload:(id)arg1;	// IMP=0x00100000000670ff
- (id)endpointIdentifier;	// IMP=0x00100000000670f2
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x00100000000670d7
- (id)initWithDatabase:(id)arg1 andObjectsToDelete:(id)arg2;	// IMP=0x0010000000066ebf
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000066e80

@end
