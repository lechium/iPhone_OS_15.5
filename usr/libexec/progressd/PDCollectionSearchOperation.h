//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDCollectionSearchOperation
{
    _Bool _firstRun;	// 24 = 0x18
    _Bool _responseStatusPayloadFailed;	// 25 = 0x19
    int _searchType;	// 28 = 0x1c
}

- (id)createHandoutQueryRequest;	// IMP=0x002000000004ec21
- (id)createCollectionQueryRequest;	// IMP=0x001000000004ea3d
- (id)logSubsystem;	// IMP=0x001000000004ea29
- (_Bool)needsToMakeNetworkRequest;	// IMP=0x001000000004ea21
- (_Bool)wantsToExecute;	// IMP=0x001000000004e9c8
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x001000000004e9c0
- (void)execute;	// IMP=0x001000000004e984
- (_Bool)handleZoneRemoved:(id)arg1;	// IMP=0x001000000004e97c
- (id)acceptContentType;	// IMP=0x001000000004e96f
- (id)requestContentType;	// IMP=0x001000000004e962
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004e1c8
- (id)requestData;	// IMP=0x001000000004e13d
- (Class)expectedResponseClass;	// IMP=0x001000000004e12c
- (id)endpointIdentifier;	// IMP=0x001000000004e11f
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x001000000004e104
- (id)initForCollectionItemsWithDatabase:(id)arg1;	// IMP=0x001000000004e0b7
- (id)initForCollectionsWithDatabase:(id)arg1;	// IMP=0x001000000004e06a
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000004e02b

@end

