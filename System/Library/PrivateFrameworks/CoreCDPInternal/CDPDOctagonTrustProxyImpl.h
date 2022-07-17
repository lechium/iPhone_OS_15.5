//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDOctagonTrustProxy-Protocol.h>

@class CDPContext, NSString;

@interface CDPDOctagonTrustProxyImpl : NSObject <CDPDOctagonTrustProxy>
{
    CDPContext *_cdpContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000cb41
@property(retain, nonatomic) CDPContext *cdpContext; // @synthesize cdpContext=_cdpContext;
- (id)fetchAllEscrowRecords:(id)arg1 forceFetch:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000000c6d8
- (id)fetchEscrowRecords:(id)arg1 forceFetch:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000000c28a
- (id)initWithContext:(id)arg1;	// IMP=0x000000000000c21f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
