//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKBooksServiceInterface-Protocol.h>

@class CRKValidXPCConnectionProvider, NSString;

@interface CRKBooksServiceProxy : NSObject <CRKBooksServiceInterface>
{
    CRKValidXPCConnectionProvider *_connectionProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001005b
@property(readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
- (void)_fetchChaptersWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fd36
- (void)fetchChaptersWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fc28
- (void)_fetchBooksWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f8d6
- (void)fetchBooksWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f7c8
- (id)init;	// IMP=0x000000000000f742

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

